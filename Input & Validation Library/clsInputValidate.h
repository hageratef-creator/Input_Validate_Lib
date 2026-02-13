#pragma once
#include<iostream>
#include<string>
#include"clsString.h"
#include"clsDate.h"


using namespace std;



class clsInputValidate
{

public:

	static bool IsNumberBetween(short Number, short Range1, short Range2)
	{
		if (Number >= Range1 && Number <= Range2)
		{
			return true;
		}
		return false;
	}

	static bool IsNumberBetween(int Number, int Range1, int Range2)
	{
		if (Number >= Range1 && Number <= Range2)
		{
			return true;
		}
		return false;
	}

	static bool IsNumberBetween(float dNumber, float Range1, float Range2)
	{
		if (dNumber >= Range1 && dNumber <= Range2)
		{
			return true;
		}
		return false;
	}

	static bool IsNumberBetween(double dNumber, double Range1, double Range2)
	{
		if (dNumber >= Range1 && dNumber <= Range2)
		{
			return true;
		}
		return false;
	}

	static bool IsDateBetween(clsDate Date, clsDate Datefrom, clsDate DateTo)
	{
		if (clsDate::IsDate1BeforeDate2(Date, Datefrom) || clsDate::IsDate1EqualDate2(Date, Datefrom)
			&&
			clsDate::IsDate1AfterDate2(Date, DateTo) || clsDate::IsDate1EqualDate2(Date, DateTo))
		{
			return true;
		}

		if (clsDate::IsDate1BeforeDate2(Date, DateTo) || clsDate::IsDate1EqualDate2(Date, DateTo)
			&&
			clsDate::IsDate1AfterDate2(Date, Datefrom) || clsDate::IsDate1EqualDate2(Date, Datefrom))
		{
			return true;
		}
		return false;
	}

	static int ReadIntNumber(string Message = "invalide Input,plz enter again\n")
	{
		int num;
		while (!(cin >> num))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << Message;
		}
		return num;
	}



	static float ReadfloatNumber(string Message = "invalide Input,plz enter again\n")
	{
		float num;
		while (!(cin >> num))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << Message;
		}
		return num;
	}

	static short ReadshortNumber(string Message = "invalide Input,plz enter again\n")
	{
		short num;
		while (!(cin >> num))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << Message;
		}
		return num;
	}

	static double ReadDoubleNumber(string Message)
	{
		double dnum;
		cout << Message << endl;
		while (!(cin >> dnum))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalide Input,plz enter again\n";

		}
		return dnum;
	}

	static int ReadNumberBetween(int from, int to, string Message = "Invalide Input,plz enter again\n")
	{
		int num = ReadIntNumber();
		while (!IsNumberBetween(num, from, to))
		{
			cout << Message;
			num = ReadIntNumber();
		}
		return num;
	}

	static short ReadNumberBetween(short from, short to, string Message = "Invalide Input,plz enter again\n")
	{
		short num = ReadIntNumber();
		while (!IsNumberBetween(num, from, to))
		{
			cout << Message;
			num = ReadIntNumber();
		}
		return num;
	}

	static double ReadDoubleBetween(double from, double to, string Message = "Invalide Input,plz enter again\n")
	{
		double dnum = ReadDoubleNumber(Message);
		while (!IsNumberBetween(dnum, from, to))
		{
			cout << Message;
			dnum = ReadDoubleNumber(Message);
		}
		return dnum;
	}

	static bool IsValideDate(clsDate Date)
	{
		return clsDate::IsValidDate(Date);
	}

	static char ReadChar(string Message)
	{
		char Letter;
		cout << Message;
		cin >> Letter;
		return Letter;
	}

	static string ReadString(string Message)
	{
		string Text;
		cout << Message;
		getline(cin >> ws, Text);
		return Text;
	}


};









