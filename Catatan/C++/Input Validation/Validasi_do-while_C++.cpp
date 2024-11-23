#include <iostream>

using namespace std;

 float a, b, c;
 bool benar;

void validasi(){
	do{
		cout << "Nama Kamu : ";
		cin >> a;

		benar = cin.fail();
		cin.clear();
		cin.ignore(132, '\n');

	}while(benar == false);

	do{
		cout << "Gender    : ";
		cin >> b;

		benar = cin.fail();
		cin.clear();
		cin.ignore(132, '\n');

	}while(benar == false);

	do{
		cout << "Nomor Telepon    : ";
		cin >> c;

		benar = cin.fail();
		cin.clear();
		cin.ignore(132, '\n');

	}while(benar == true);
}

 int main(){
	validasi();
    return 0;
 }
