#include <iostream>
using namespace std;

string username[10];
string password[10];
int pengguna = 0;

bool loginPage() {
    int menuL;
    int attempt = 3;

    for(int i = 0; i < 10; i++){
        username[i] = "X";
        password[i] = "X";
    }

    while(true){
        cout << " === Menu Login ===" << endl;
        cout << "1. Login" << endl;
        cout << "2. Registrasi" << endl;
        cout << " ==================" << endl;
        cout << "Pilih Menu : ";
        cin >> menuL;
        system("cls");

        switch(menuL){
        case 1: {
            while(true){
                string user, pass;
                cout << "=== LOGIN ===" << endl;
                cout << "Username : ";
                cin >> user;
                cout << "Password : ";
                cin >> pass;

                for(int i = 0; i < pengguna; i++){
                    if(user == username[i] && pass == password[i]){
                        cout << "Login Berhasil !" << endl;
                        return true; 
                    }
                }

                attempt--;
                cout << "Username / Password Salah. Sisa: " << attempt << endl;

                if(attempt == 0){
                    cout << "Anda Terblokir." << endl;
                    return false; 
                }
            }
        }

        case 2: {
            if(pengguna >= 10){
                cout << "User penuh!" << endl;
                break;
            }

            string userBaru, passBaru;
            bool duplikat;

            do {
                duplikat = false;
                cout << "=== REGIST ===" << endl;
                cout << "Buat Username : ";
                cin >> userBaru;

                for(int i = 0; i < pengguna; i++){
                    if(userBaru == username[i]){
                        cout << "Username telah terpakai!" << endl;
                        duplikat = true;
                        break;
                    }
                }
            } while (duplikat);

            cout << "Buat Password : ";
            cin >> passBaru;

            username[pengguna] = userBaru;
            password[pengguna] = passBaru;
            pengguna++;
            cout << "Registrasi Berhasil!" << endl;
            system("pause");
            system("cls");

            break;
        }

        default:
            cout << "Menu tidak diketahui!" << endl;
        }
    }
}

void menuPage(int &menuP, int &saldo) {
    int transfer, saldoNew;

    switch(menuP){
    case 1:
        cout << "=== ISI SALDO ===" << endl;
        cout << "Input : ";
        cin >> saldoNew;
        saldo += saldoNew;
        cout << "Saldo terisi!" << endl;
        system("pause");
        break;

    case 2:
        cout << "=== SALDO ===" << endl;
        cout << "Saldo Anda Rp." << saldo << endl;
        system("pause");
        break;

    case 3:
        cout << "=== TRANSFER ===" << endl;
        cout << "Nilai Transfer : ";
        cin >> transfer;

        if(transfer > saldo){
            cout << "Transfer gagal, saldo tidak cukup." << endl;
        } else {
            saldo -= transfer;
            cout << "Transfer berhasil!" << endl;
        }
        system("pause");
        break;

    default:
        cout << "Menu Tidak Tersedia" << endl;
    }
}

int main() {
    int saldo = 0;
    int menuP;

    bool cond = loginPage(); 

    if(cond == false){
        return 0; 
    }

    while(true){
        system("cls");
        cout << "== E-Wallet ==" << endl;
        cout << "1. Isi Saldo" << endl;
        cout << "2. Cek Saldo" << endl;
        cout << "3. Transfer" << endl;
        cout << "4. Keluar" << endl;
        cout << "==============" << endl;
        cout << "Pilih Menu : ";
        cin >> menuP;

        if(menuP == 4){
            cout << "Anda Keluar" << endl;
            return 0;
        }

        menuPage(menuP, saldo);
    }
}
