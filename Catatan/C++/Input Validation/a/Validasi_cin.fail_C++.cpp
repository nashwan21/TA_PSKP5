#include <iostream>

using namespace std;

 float a, b;

 void validasi1(){
	cout << "Nama Kamu      : ";
	cin >> a;	
	if(!(cin.fail())){
		cout << "ERROR!" << endl;
	}else{
		cout << "BERHASIL" << endl;
	}
}

void validasi2(){
	cout << "Masukkan Angka : ";
	cin >> b;

	if(cin.fail()){
		cout << "ERROR!" << endl;
	}else{
		cout << "BERHASIL" << endl;
	}
}

 int main(){
	// Pilih Salah Satu Fungsi
    // validasi1();
	validasi2();
    return 0;
 }