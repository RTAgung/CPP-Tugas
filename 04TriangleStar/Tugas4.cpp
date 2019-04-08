#include <iostream>
using namespace std;
// copyright punya RTA

int main()
{
	int x;
	cout<< "Masukan panjang sisi : "; cin>> x;

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout<< "* ";
		}
		cout<< "* "<< endl;
	}
	for (int i = 0; i <= x; i++)
	{
		for (int j = i; j < x; j++)
		{
			cout<< "* ";
		}
		cout<< "* "<<endl;
	}
	
	return 0;
}
