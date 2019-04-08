#include <iostream>
using namespace std;

//copyright punya RTA

int main()
{
	char a;
	int p,x,x1,x2,y,u ;
	
	do{
		do{
		cout<< "Menu :"<<endl;
		cout<< "1. Perkalian \n2. Pangkat \n3. Faktorial"<<endl;
		cout<< "Pilihan : "; 
		cin>> p;
		cout<< endl;
			if (!(p>0 && p<4))
			{
				cout<< "Input Salah!!\n\n"<<endl ;
			}
		}while (!(p>0 && p<4));
		
		switch (p)
		{
			case 1 :
				cout<< "Program Perkalian"<<endl;
				cout<< "Bilangan	= "; cin>> x;
				cout<< "Dikali		= "; cin>> y;
				x1 = x ;
				u = 0 ;
				while (u<=y)
				{	
					u++ ;
					if(u<y)
					{
						x1 = x + x1 ;
						cout<< x << " + " ;
					}
					else if (u==y)
					{
						cout<< x;
						cout<< " = " << x1 <<endl;
					}
				}
				break ;
				
			case 2 :
				cout<< "Program Perpangkatan"<<endl;
				cout<< "Bilangan	= "; cin>> x;
				cout<< "Pangkat		= "; cin>> y;;
				x1 = x ;
				u = 0;
				while (u<=y)
				{
					u++ ;
					if (u<y)
					{
						x1 = x * x1;
						cout<< x << " x ";
					}
					else if (u==y)
					{
						cout<< x << " = " << x1 <<endl;
					}
				}
				break ;
				
			case 3 :
				cout<< "Program Faktorial" <<endl;
				cout<< "Bilangan	= "; cin>> x;
				x1 = x;
				x2 = x;
				u = 0;
				while (u<=x)
				{
					u++ ;
					if (u<x)
					{
						cout<< x2 << " x " ;
						x2-- ;
						x1 = x1 * x2 ;
					}
					else if (u==x)
					{
						cout<< x2 << " = " << x1 <<endl;
					}
				}
				break;
		}
		
		do{
		cout<< "\nLagi (y/n) ? ";
		cin>> a;
		cout<< endl;
		if (!(a=='y' || a=='n'))
		{
			cout<< "\nInput Salah!!\n\n";
		}
		}while(!(a=='y' || a=='n'));
	}while (a=='y');
	
	cout<< "\n\n=============== Terima Kasih ===============";
	
	return 0;
}
