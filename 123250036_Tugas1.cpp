#include <iostream>
#include <iomanip>

using namespace std;
int main(){
string namaLengkap, nim, plug;

cout << "Input Data"<< endl;
cout << "Masukkan Nama :";
getline(cin, namaLengkap);

cout <<"Masukkan NIM :";
getline(cin, nim);

cout <<"Masukkan Plug :";
getline(cin, plug);

cout <<"\nInilah data anda"<< endl;
cout <<"Nama :" << namaLengkap <<endl;
cout <<"Nim :" << nim <<endl;
cout <<"Plug :" << plug <<endl;

cout << "\nDalam Tabel"<<endl;
cout<< "============================================="<<endl;
cout << left <<setw (12) <<" NIM "
     <<" | " << setw (20) << " NAMA "
     <<" | " << setw (4) << " PLUG "<<endl;
cout<< "============================================="<<endl;
cout << left << setw (12) << nim
     << " | "<< setw (20) <<namaLengkap
     << " | "<< setw (4) << plug <<endl;
cout << "---------------------------------------------"<<endl;

}
