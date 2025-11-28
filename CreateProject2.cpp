#include <iostream>
using namespace std;

int main(){
    float a, b;
    float hasil = 0;
    string op;

    cout << " === KALKULATOR VIRTUAL SEDERHANA ==="<<endl;
    cout << "Gunakan + Untuk Penjumlahan"<<endl;
    cout << "Gunakan - Untuk Pengurangan"<<endl;
    cout << "Gunakan x Untuk Perkalian"<<endl;
    cout << "Gunakan : Untuk Pembagian"<<endl;

    while(true){
        cout << "====== MENGHITUNG ======" << endl;
        
        cin >> a >> op >> b;
        if(op != "+" && op != "-" && op != "x" && op != ":"){
            cout << "Invalid! Operator tidak dikenali" << endl << endl;
            continue;  
        }
        if(op == ":" && b == 0){
            cout << "Invalid! tidak Bisa dibagi 0" << endl << endl;
            continue;   
        }
        if(op == "+"){ hasil = a + b;
			}else if(op == "-"){ hasil = a - b;
				}else if(op == "x"){ hasil = a * b;
					}else if(op == ":"){ hasil = a / b;
						}

        cout << a << " " << op << " " << b << " = " << hasil << endl << endl;
    }
}
