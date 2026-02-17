#pragma once
#include<iostream>
#include<string>
#include"clsString.h"
#include"clsDate.h"


using namespace std;



class clsInputValidate
{

public:

	template< class T> static T IsNumberBetween(T Number, T Range1, T Range2)
	{
		if (Number >= Range1 && Number <= Range2)
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


	template <class T > static T ReadANumber(string Message = "invalide Input,plz enter again\n")
	{
		T num;
		while (!(cin >> num))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << Message;
		}
		return num;
	}



	template <class T > static T ReadNumberBetween(T from, T to, string Message = "Invalide Input,plz enter again\n")
	{
		T num = ReadANumber<T>();
		while (!IsNumberBetween(num, from, to))
		{
			cout << Message;
			num = ReadANumber<T>();
		}
		return num;
	}


	
	static bool IsValideDate(clsDate Date)
	{
		return clsDate::IsValidDate(Date);
	}

	
	static string ReadString(string Message)
	{
		string Text;
		cout << Message;
		getline(cin >> ws, Text);
		return Text;
	}


};









