#include <iostream>

using namespace std;

int main(){

	int i;
	double d;
	float f;
	char c;
	int* pi;
	double* pd;
	float* pf;
	char* pc;

	cout << "int: " << sizeof(i) << " byte" << endl;
	cout << "double: " << sizeof(d) << " byte" << endl;
	cout << "float: " << sizeof(f) << " byte" << endl;
	cout << "char: " << sizeof(c) << " byte" << endl;
	
	cout << "*******************" << endl;

	cout << "int pi: " << sizeof(pi) << " byte" << endl;
	cout << "double pi: " << sizeof(pd) << " byte" << endl;
	cout << "float pi: " << sizeof(pf) << " byte" << endl;
	cout << "char pi: " << sizeof(pc) << " byte" << endl;

	cout << "*******************" << endl;
	
	int* a;
	int yas1 = 15;
	a = &yas1;
	cout << a << endl;

	int* b;
	int yas2 = 16;
	b = &yas2;
	cout << b << endl;

	int* numaralar;
	int numara1 = 303;
	numaralar = &numara1;
	cout << numaralar << endl;

	char* karakter;
	char k1 = 'a';
	karakter = &k1;
	cout << karakter << endl;









}