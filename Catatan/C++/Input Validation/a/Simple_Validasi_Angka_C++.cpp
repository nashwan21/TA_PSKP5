#include <iostream>

using namespace std;

 float a;

 void validasi(){
	cout << "Masukkan Angka     : ";		
	while (!(cin >> a)){
		cout << "ERROR!" << endl;
		cout << "" << endl;
		cout << "Masukkan Angka : ";
		cin.clear();
        cin.ignore(132, '\n');	
	}
}

 int main(){
    validasi();
    return 0;
 }