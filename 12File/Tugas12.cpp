#include <bits/stdc++.h>
using namespace std;

int main()
{
	string nama, kosong;
	ifstream amfil;
	ofstream simfan;
	int pilih, n;
	cout<< "Menu :"<<endl;
	cout<< "1. Input \n2. Output \n3. Reset"<<endl;
	cout<< "Pilih : "; cin>> pilih;
	
	switch (pilih){
		case 1:
			cin.ignore();
			getline(cin,nama);
			simfan.open("Tugas12.txt", ios::app);
			simfan << nama <<endl;
			simfan.close();
			amfil.open("Tugas12n.txt");
			amfil>> n;
			amfil.close();
			n++;
			simfan.open("Tugas12n.txt");
			simfan<<n;
			simfan.close();
			break;
		case 2:
			amfil.open("Tugas12n.txt");
			amfil>>n;
			amfil.close();
			amfil.open("Tugas12.txt");
			for (int i = 0; i < n; ++i)
			{
				getline(amfil,nama);
				cout<< nama<<endl;
			}
			amfil.close();
			break;
		case 3:
			simfan.open("Tugas12.txt");
			simfan << kosong;
			simfan.close();
			simfan.open("Tugas12n.txt");
			simfan << kosong;
			simfan.close();
			break;
		default :
			cout<< "salah input";
	}
	return 0;
}
