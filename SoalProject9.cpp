#include <iostream>
using namespace std;
const float phi = 3.14;
void bangundatar(){
	float L;
	float a, b;
	int pilihan;
	cout<<"Menghitung Luas Bangun Datar : "<<endl;
	cout<<"1. Persegi"<<endl;
	cout<<"2. Persegi Panjang"<<endl;\
	cout<<"3. Segitiga"<<endl;
	cout<<"4. Lingkaran"<<endl;
	cout<<"5. Jajar Genjang"<<endl;
	cout<<"6. Belah Ketupat"<<endl;
	cout<<"7. Layang - layang"<<endl;
	cout<<"8. Trapesium"<<endl;
	cout<<"Pilihan :";
	cin>>pilihan;
	switch(pilihan){
		case 1: {
			cout<<"Masukkan Nilai Sisi = ";cin>>a;
			L = a*a;
			cout<<"Luas Persegi = "<<L;
			break;
			}
		case 2 : {
			cout<<"Masukkan Nilai Panjang = ";cin>>a;
			cout<<"Masukkan Nilai Lebar = ";cin>>b;
			L = a*b;
			cout<<"Luas Persegi Panjang = "<<L;
			break;}
		case 3 : {
			cout<<"Masukkan Nilai Alas 	= ";cin>>a;
			cout<<"Masukkan Nilai Tinggi = ";cin>>b;
			L = (a*b)/2;
			cout<<"Luas Segitiga = "<<L;
			break;}
		case 4 : {
			cout<<"Masukkan Nilai Jari - Jari = ";cin>>a;
			L = phi*a*a;
			cout<<"Luas Lingkaran = "<<L;
			break;}
		case 5 : {
			cout<<"Masukkan Nilai Alas 	= ";cin>>a;
			cout<<"Masukkan Nilai Tinggi = ";cin>>b;
			L = a*b;
			cout<<"Jajar Genjang = "<<L;
			break;}
		case 6 : {
			cout<<"Masukkan Nilai Diagonal 1 = ";cin>>a;
			cout<<"Masukkan Nilai Diagonal 2 = ";cin>>b;
			L = (a*b)/2;
			cout<<"Luas Belah Ketupat = "<<L;
			break;}
		case 7 : {
			cout<<"Masukkan Nilai Diagonal 1 = ";cin>>a;
			cout<<"Masukkan Nilai Diagonal 2 = ";cin>>b;
			L = (a*b)/2;
			cout<<"Luas Layang - Layang = "<<L;
			break;}
		case 8 : {
			int t;
			cout<<"Masukkan Nilai Sisi 1 = ";cin>>a;
			cout<<"Masukkan Nilai Sisi 2 = ";cin>>b;
			cout<<"Masukkan Nilai Tinggi = ";cin>>t;
			L = (t*(a+b))/2;
			cout<<"Luas Trapesium = "<<L;
			break;}
		default : {
			cout<<"Menu tidak valid"<<endl;
			}
		}
}
void bangunruang(){
	int pilihan;
	float a,b,c,t;
	float V;
	float L;
	cout<<"Menghitung Luas Bangun Datar : "<<endl;
	cout<<"1. Kubus"<<endl;
	cout<<"2. Balok"<<endl;\
	cout<<"3. Tabung"<<endl;
	cout<<"4. Bola"<<endl;
	cout<<"5. Kerucut"<<endl;
	cout<<"6. Limas Segitiga"<<endl;
	cout<<"7. Limas Segiempat"<<endl;
	cout<<"8. Prisma"<<endl;
	cout<<"Pilihan :";
	cin>>pilihan;
	switch(pilihan){
		case 1: {
			cout<<"Masukkan Nilai Sisi 	= ";cin>>a;
			V = a*a*a;
			cout<<"Volume Kubus = "<<V;
			break;
			}
		case 2 : {
			cout<<"Masukkan Nilai Panjang= ";cin>>a;
			cout<<"Masukkan Nilai Lebar = ";cin>>b;
			cout<<"Masukkan Nilai Tinggi = ";cin>>c;
			V= a*b*c;
			cout<<"Volume Balok = "<<V;
			break;}
		case 3 : {
			cout<<"Masukkan Nilai Jari - Jari = ";cin>>a;
			cout<<"Masukkan Nilai Tinggi = ";cin>>t;
			V = phi*a*a*t;
			cout<<"Volume Tabung  = "<<V;
			break;}
		case 4 : {
			cout<<"Masukkan Nilai Jari - Jari = ";cin>>a;
			V = (4*phi*a*a*a)/3;
			cout<<"Volume Bola = "<<V;
			break;}
		case 5 : {
			cout<<"Masukkan Nilai Jari - Jari = ";cin>>a;
			cout<<"Masukkan Nilai Tinggi = ";cin>>t;
			V = (phi*a*a*t)/3;
			cout<<"Volume Kerucut = "<<V;
			break;}
		case 6 : {
			cout<<"Masukkan Nilai alas segitiga	= ";cin>>a;
			cout<<"Masukkan Nilai Tinggi Segitiga = ";cin>>b;
			cout<<"Masukkan Nilai Tinggi Limas	= ";cin>>t;
			L = (a*b)/2;
			V = (L*t)/3;
			cout<<"Volume Limas Segitiga = "<<V;
			break;}
		case 7 : {
			cout<<"Masukkan Nilai Panjang = ";cin>>a;
			cout<<"Masukkan Nilai Lebar = ";cin>>b;
			cout<<"Masukkan Nilai Tinggi = ";cin>>c;
			V = (a*b*c)/3;
			cout<<"Volume Limas Segiempat = "<<V;
			break;}
		case 8 : {
			cout<<"Masukkan Nilai alas segitiga = ";cin>>a;
			cout<<"Masukkan Nilai Tinggi Segitiga = ";cin>>b;
			cout<<"Masukkan Nilai Tinggi Limas = ";cin>>t;
			L = (a*b)/2;
			V = (L*t)/3;
			cout<<"Volume Limas Segitiga = "<<V;
			break;}
		default : {
			cout<<"Menu tidak valid"<<endl;
			}
		}
	}



int main(){
	int menu;
	char kembali;
	bool run =  true;
	do{
	cout<<"Program Menghitung Luas Bangun datar atau Volume Bangun Ruang"<<endl;
	cout<<"Bangun Datar[1] /Ruang[2] :";
	cin>>menu;
	switch (menu){
		case 1 : {
			bangundatar();
			cout<<"\nKembali Ke menu awal ?(y/t)";
			cin>>kembali;
			if(kembali == 'y' || kembali == 'Y'){
				run = true;
			}else if(kembali == 't' || kembali == 'T'){
				run = false;
				}
			system("CLS");
			break;
			}
		case 2 : {
			bangunruang();
			cout<<"\nKembali Ke menu awal ?(y/t)";
			cin>>kembali;
			if(kembali == 'y' || kembali == 'Y'){
				run = true;
			}else if(kembali == 't' || kembali == 'T'){
				run = false;
				}system("CLS");
				break;
			}
		
		
		}
	}while(run);
}
