#include <iostream>
#include "clsInputValidate.h"
#include "clsDate.h"
using namespace std;







int main()
{

	
	
	cout << "//////////////////////////" << endl;

	cout<<clsInputValidate::IsNumberBetween<float>(5.3, 1.2, 10.4);


	return 0;
}

