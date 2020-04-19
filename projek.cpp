#include <iostream>
#include <windows.h>
using namespace std;
void menu();

int main(){
	menu();
	/*DETAIL
	  pesan/sewa kamar harian, mingguan, bulanan
	  isi, kosong
	  login admin?
	  pembayaran
	  
	  array 2d, struct : data pemesan +kamar, booking kamar
	  rekursi
	  searching : check in & out
	  sorting : mengurutkan data kamar yg terisi
	  pointer
	  operasi file*/
}

void menu(){
	cout<<"- BLUE HOUSE -\n";
	cout<<"1. Booking\n";
	cout<<"2. Check-In\n"
	cout<<"3. Check-Out\n";
	int p;
	cout<<"Pilih: "; cin>>p;
	
	switch(p){
		case 1 : break;
		case 2 : break;
		case 3 : break;
		default : cout<<"Pilihan tidak ada ...";
				  system("pause"); menu();
	}
}
