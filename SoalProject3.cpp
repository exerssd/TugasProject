#include <iostream>
using namespace std;


void rata(float &ratarata, float &jumlahTotal){
	int i = 0;
	int nilai[10] = {2,5,1,2,4,6,3,2,7,1};
	jumlahTotal = 0;
	for( i = 0; i < 10;i++){
		if(nilai[i] < 5 || nilai[i] >= 7){
		jumlahTotal = jumlahTotal + nilai[i];	
			}
		}
	ratarata = jumlahTotal/i;
	
	}

int main(){
	float rate, jumlah;
	 rata(rate, jumlah);
	cout<<"Jumlah Nilai    : "<<jumlah<<endl;
	cout<<"Rata Rata Nilai : "<<rate<<endl;
	}
