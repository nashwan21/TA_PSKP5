#include <iostream>

using namespace std;

int main(){
	string a, b, c, d;

	cout << "Masukkan A: ";
	cin >> a;
	cout << "Masukkan B: ";
	cin >> b;
	cout << "Masukkan C: ";
	cin >> c;
	cout << "Masukkan D: ";
	cin >> d;

	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	cout << "C: " << c << endl;
	cout << "D: " << d << endl;

	if((a == b) && (c == d)){
		cout << "Benar\n";
	}else{
		cout << "Salah\n";
	}
}
