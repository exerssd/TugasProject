#include <iostream>
using namespace std;

int main(){
    char petaKursi[5][8];
    string namaPemesan[5][8];
    char barisLabel[5] = {'A','B','C','D','E'};
    char kolomLabel[8] = {'1','2','3','4','5','6','7','8'};
    int menu;
    int hargaTiket = 50000;
    string search;
    bool kondisi = true;

    for(int i = 0;i<5;i++){
        for(int j=0;j<8;j++){
            
            petaKursi[i][j] = 'O';
            namaPemesan[i][j] = "-";

        }
    }
	do{
    cout<<" === MENU UTAMA ==="<<endl;
    cout<<" 1. Tampilkan Peta Kursi"<<endl;
    cout<<" 2. Pesan Tiket"<<endl;
    cout<<" 3. Cek Pelanggan"<<endl;
    cout<<" 4. Laporan Penjualan Tiket"<<endl;
    cout<<" 5. Keluar"<<endl;
    cout<<"Pilih Menu:(1-5) :";
    cin>>menu;
    
    switch(menu){
		case 1 : {
			cout<<"--- LAYAR BIOSKOP ADA DISINI ---"<<endl;
			cout<<"   ";
    for(int i = 0; i <8;i++){
		cout<<" "<<kolomLabel[i];
		}
		cout<<"\n";
     for(int i = 0; i < 5; i++){
        cout << barisLabel[i] << " [ ";
        for(int j = 0; j < 8; j++){
            cout << petaKursi[i][j] << " ";
        }
        cout << "] \n"<<endl;
	}
		
	break;
}		
			
		case 2 : {
			
			string nama;
			char baris, kolom;
			cout<<" === PEMESANAN === "<<endl;
			cout<<"Masukkan Nama Pemesanan : ";
			cin.ignore();
			getline(cin, nama);
			cout<<"Nomor Kursi"<<endl;
			cout<<"Baris(A-E) : ";
			cin>>baris;
			cout<<"Kolom(1-8) : ";
			cin>>kolom;
			int b = baris - 'A';
			int k = kolom - '1';
			if (b < 0 || b >= 5 || k < 0 || k >= 8) {
                cout << "Kursi tidak valid!\n";
                break;
			}
			if(namaPemesan[b][k] != "-" && petaKursi[b][k]  !='O'){
				cout<<"\nSeat sudah terisi\n "<<endl;
				break;
				} else{ 
					cout<<"Pesanan Berhasil !!\n"<<endl;
			namaPemesan[baris - 'A'][kolom - '1'] = nama;
			petaKursi[baris - 'A'][kolom - '1'] = 'X';
		}
		
		break;
		}
		case 3 : {
			bool cek = false;
			cout<<"=== CEK PELANGGAN ==="<<endl;
			cout<<"\nInput nama pelanggan yg dicari : ";
			cin.ignore();
			getline(cin, search);
			for(int i = 0; i < 5; i++){
				for(int j = 0; j < 8; j++){
					if(namaPemesan[i][j] == search){
						char x ='A'+i;
						cout<<"Pelanggan "<<search<<" ditemukan di "<< x <<j+1<<endl;
						cek = true;
						}
					}
				}
			if(!cek){
				cout<<"Pelanggan Tidak Ditemukan"<<endl;
				}
				break;
				}
		case 4 : {
			int tiketTerjual = 0;
			int tiketSisa = 0;
			for(int i = 0; i < 5; i++){
				for(int j = 0; j < 8; j++){
					if(petaKursi[i][j] == 'O'){
						tiketSisa += 1;
					}
					if(petaKursi[i][j] == 'X'){
						tiketTerjual += 1;
						}
					}
				}
			cout<<"=== LAPORAN PENJUALAN ==="<<endl;
			cout<<"Tiket Tersisa    = "<<tiketSisa<<endl;
			cout<<"Tiket Terjual 	= "<<tiketTerjual<<endl;
			cout<<"Hasil Penjualan  = Rp "<<tiketTerjual * hargaTiket<<endl;
			break;
			}
		case 5 : {
			kondisi = false;
			break;
			}
		default: {
            cout << "\nInput menu tidak valid! Silakan pilih 1-5.\n";
            break;
		}
	}
}while(kondisi);




}
