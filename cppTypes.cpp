#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	short a = SHRT_MIN;
	short a1 = SHRT_MAX;
	int a2 = INT32_MAX;
	int a3 = INT32_MIN;
	long long a4 = LLONG_MAX;
	long long a5 = LLONG_MIN;
	unsigned short a6 = 0;
	unsigned short a7= USHRT_MAX;
	unsigned int a8 = 0;
	unsigned int a9 = UINT32_MAX;
	unsigned long long b= 0;
	unsigned long long  b1 = ULLONG_MAX;
	float b2 = FLT_MIN;
	float b3 = FLT_MAX;
	double b4 = DBL_MIN;
	double b5 = DBL_MAX;
	bool b6 = 0;
	bool b7 = 1;
	char b8 = 0;
	char b9 = 255;

	cout << "type\t\t|byte\t|min\t\t\t|max" << endl;
	cout << "short\t\t|" << sizeof(a) << "\t|" <<a<<"\t\t\t|"<<a1 <<endl;
	cout << "int\t\t|" << sizeof(a2) << "\t|" <<a2<< "\t\t|" << a3 << endl;
	cout << "long\t\t|" << sizeof(a4) << "\t|" <<a4<< "\t|" << a5 << endl;
	cout << "uns_short\t|" << sizeof(a6) << "\t|" <<a6<< "\t\t\t|" << a7 << endl;
	cout << "uns_int\t\t|" << sizeof(a8) << "\t|" <<a8<< "\t\t\t|" << a9 << endl;
	cout << "uns_long\t|" << sizeof(b) << "\t| " <<b<< "\t\t\t| " << b1 << endl;
	cout << "float\t\t|" << sizeof(b2) << "\t|" <<b2<< "\t\t|" << b3 << endl;
	cout << "double\t\t|" << sizeof(b4) << "\t|" <<b4<< "\t\t|" << b5 << endl;
	cout << "bool\t\t|" << sizeof(b6) << "\t|" <<b6<< "\t\t\t|" << b7 << endl;
	cout << "char\t\t|" << sizeof(b8) << "\t|" <<b8<< "\t\t\t|" << b9 << endl;




}	

