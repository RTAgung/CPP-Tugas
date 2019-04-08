#include <iostream>
using namespace std;

int main ()
{
	string un, pw, a, b, z;
	int x;
	cout<< "Enter Username = ";
	cin>> un;
	cout<< "Enter Password = ";
	cin>> pw;
	
	if(un=="RTAgung678" && pw=="GuaGanteng123") 
	{
		cout<< "\nPilih nomor untuk memesan makanan"<< endl;
		cout<< "1. Masukan pesanan anda \n2. Lihat harga pesanan"<< endl;
		cout<< "Pilih : ";
		cin>>x;
		if (x==1)
		{
			cout<<"Makanan yang anda pesan : ";
			cin>> a;
			cout<<"Minuman yang anda pesan : ";
			cin>> b;
		}
		
		cout<< "\nPilih nomor untuk memesan makanan"<< endl;
		cout<< "1. Masukan pesanan anda \n2. Lihat harga pesanan"<< endl;
		cout<< "Pilih : ";
		cin>>x;
		if (x==2)
		{
			cout<<"\nMasukan pesanan makanan/minuman anda : ";
			cin>> z;
			if (z==a)
			{
				cout<<"Harga "<< a << "nya 10.000 bro";
			}
			else if (z==b)
			{
				cout<<"Harga "<< b << "nya 5.000 bro";
			}
			else
			{
				cout<<"Kami tidak menyediakan "<< z << ", beli di indomaret aja bro";
			}
			cout<< "\n\n\n=============Terima Kasih=============";
		}
	}
	if(un=="RTAgung678" && pw!="GuaGanteng123") {
		cout<< "Wrong Password!";
	}
	if(un!="RTAgung678" && pw=="GuaGanteng123") {
		cout<< "Wrong Username!";
	}
	if(un!="RTAgung678" && pw!="GuaGanteng123") {
		cout<< "Username and Password are wrong!";
	}
}
