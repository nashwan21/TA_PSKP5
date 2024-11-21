#include <iostream>

using namespace std;

struct data{
	string nama_pengunjung;
	string noID;
	int noHP;
	string alamat;
	string jenis_kelamin;
	string email_pengunjung1;
	string email_pengunjung2;
	string password1;
	string password2;
};

struct order{
	int hotel;
	int jumlah_pengunjung;
	int jumlah_kamar;
	int checkIN;
	int checkOUT;
	int jenis_kamar;
	int total_harga;
	string hari;
};

data customer1;
order customer2;

void pilih_hotel(){
	Begin:
    system("cls");
    cout << "===============================================================" << endl;
    cout << "|                                                             |" << endl;
    cout << "|              ---- SELAMAT DATANG DI TRIVAGO----             |" << endl;
    cout << "|                                                             |" << endl;
    cout << "===============================================================" << endl;
    cout << "|                        1. Hotel 88                          |" << endl;
    cout << "|                        2. Hotel Aston                       |" << endl;
    cout << "|                        3. Hotel Santika                     |" << endl;
    cout << "===============================================================" << endl;
	
	cout << "Choose Your Favourite Hotel: ";
	cin >> customer2.hotel;
	
    switch (customer2.hotel) {
        case 1:
            cout << "Hotel 88" << endl;
            break;
        case 2:
            cout << "Hotel Aston" << endl;
            break;
        case 3:
            cout << "Hotel Santika" << endl;
            break;
        default:
            cout << "Your Hotel is Invalid" << endl;
			goto Begin;
    }
	
	cout << "" << endl;
}

void isi_data(){	
    cout << "============================\33[1m Fill Your Form \33[0m===================================" << endl;
	cout << "email         : ";
	cin >> customer1.email_pengunjung1;	
	cout << "Password      : ";
	cin >> customer1.password1;
    cout << "Customer Name : ";
	cin >> customer1.nama_pengunjung;    
	cout << "ID Number     : ";
	cin >> customer1.noID;	
	cout << "Phone Number  : ";
	cin >> customer1.noHP;    
	cout << "Addres        : ";
	cin >> customer1.alamat;    
	cout << "Gender        : ";
	cin >> customer1.jenis_kelamin;
	cout << "===========================================================================================" << endl;
}

void login_order(){
	bool benar;
	int count = 1;
	
	system("cls");
	cout << "============================\33[1m Login Page \33[0m=================================" << endl;
	cout << "================== Enter Your Email and Password ========================" << endl;
	while(!benar && count <= 3){
		cout << "email         : ";
		cin >> customer1.email_pengunjung2;	
		cout << "Password      : ";
		cin >> customer1.password2;
		cout << "" << endl;
		
		if((customer1.email_pengunjung1 == customer1.email_pengunjung2) && (customer1.password1 == customer1.password2)){
			benar = true;
			cout << "Welcome to Hotel" << endl;
			goto Menu1;
		}else{
			count = count + 1;
			if(count == 4)
			cout << "Your Account is Blocked" << endl;
		}
	}
	cout << "=========================================================================" << endl;
	cout << "Email 1: " << customer1.email_pengunjung1 << endl;
	cout << "Email 2: " << customer1.email_pengunjung2 << endl;
	cout << "PW    1: " << customer1.password1 << endl;
	cout << "PW    2: " << customer1.password2 << endl;
	
// ============================================================================================================================================================
// ============================================================================================================================================================

	Menu1:
	system("cls");
    cout << "======================================================================" << endl;
	cout << "|                       1. Standard     | Rp300000                    |" << endl;
    cout << "|                       2. Premium      | Rp600000                    |" << endl;
    cout << "|                       3. Deluxe       | Rp900000                    |" << endl;
    cout << "|                       4. Suite        | Rp1200000                   |" << endl;
    cout << "|                       5. Presidential | Rp1500000                   |" << endl;
    cout << "======================================================================" << endl << endl;
	
	// cout << "=============Customer Identity=============" << endl;
    // cout << "Customer Name : " << customer1.nama_pengunjung << endl;
	// cout << "ID Number     : " << customer1.noID << endl;
	// cout << "Phone Number  : " << customer1.noHP << endl;
	// cout << "Addres        : " << customer1.alamat << endl;
	// cout << "Gender        : " << customer1.jenis_kelamin << endl << endl;
	
	cout << "Choose Your Room Type : ";
	cin >> customer2.jenis_kamar;
	
    switch (customer2.jenis_kamar) {
        case 1:
            cout << "Room Type     : Standard" << endl;
            break;
        case 2:
            cout << "Room Type     : Premium" << endl;
            break;
        case 3:
            cout << "Room Type     : Deluxe" << endl;
            break;
        case 4:
            cout << "Room Type     : Suite" << endl;
            break;
        case 5:
            cout << "Room Type     : Presidential" << endl;
            break;
		default:
			goto Menu1;
    }
	
	Menu2:
	cout << "Amount Customers      : ";
	cin >> customer2.jumlah_pengunjung;
	
	if(customer2.jumlah_pengunjung <= 0){
		cout << "Invalid!" << endl;
		cout << "" << endl;
		goto Menu2;
	}else if(customer2.jumlah_pengunjung >= 4){
		cout << "Full" << endl;
		cout << "" << endl;
		goto Menu2;
	}
	
}

int main(){
	pilih_hotel();
	isi_data();
	login_order();
}
