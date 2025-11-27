#include <iostream>
using namespace std;

void satuan(int angka){
	int satu;
	string satua;
	satu = angka % 10;
	if(angka == 10){
		cout<<"Sepuluh"<<endl;
		return;
	}
	if(angka == 11){
		return;
	}
	if(angka >= 11 && angka < 20){
		return;
	}
	switch(satu){
	case 0 : satua = "Nol";
	break;
	case 1 : satua = "Satu";
	break;
	case 2 : satua = "Dua";
	break;
	case 3 : satua = "Tiga";
	break;
	case 4 : satua = "Empat";
	break;
	case 5 : satua = "Lima";
	break;
	case 6 : satua = "Enam";
	break;
	case 7 : satua = "Tujuh";
	break;
	case 8 : satua = "Delapan";
	break;
	case 9 : satua = "Sembilan";
	break;
	default : {
		cout<<""<<endl;
		}
	}
	if(satu != 0){
	cout<<satua<<" \n";
}
}

void puluhan(int angka){
	if(angka == 10){
		return;
		}
	if(angka == 11){
		cout<<"Sebelas"<<endl;
		return;
		}
	if(angka >= 12 && angka < 20){
	string belasan[8] = {"Dua Belas","Tiga Belas","Empat Belas","Lima Belas","Enam Belas","Tujuh Belas","Delapan Belas","Sembilan Belas"};
	cout << belasan[angka - 12] << endl;
	return;
		}
	string puluh[8] = {"Dua Puluh","Tiga Puluh","Empat Puluh","Lima Puluh","Enam Puluh","Tujuh Puluh","Delapan Puluh","Sembilan Puluh"};
	int cek = angka / 10;
	if(cek >= 2 && cek <= 9){
	cout<<puluh[cek-2]<<" ";
	}
}

int main(){
	char ulang;
	bool run = true;
	int angka;
	do{
	cout<<"Masukkan Angka :";
	cin>>angka;
	if(angka / 10 != 0){
	puluhan(angka);
    }
    if(angka != 11 && !(angka >= 12 && angka < 20)){
	satuan(angka);

	}
	cout<<"Ulangi (y/t) :";
	cin>>ulang;
	if(ulang == 'y'){
		continue;
		}else{
			run = false;
			}
	}while(run);
	
}
