#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main(){
    int nilai_maks = 0;
    int hp = 5;
    int tebak = 0;
    int tebakan = 0;

    while((nilai_maks > 100) || (nilai_maks < 10)){
        cout << "Masukkan nilai [10-100] : "; cin >> nilai_maks;
        if(nilai_maks > 100){
            cout << "Nilai anda lebih dari [100]" << endl;
        }else if(nilai_maks < 10){
            cout << "Nilai anda kurang dari [10]" << endl;
        }
        cout << "Silahkan tebak nilai antara 0 - " << nilai_maks << "?" << endl;
        srand((unsigned)time(0));
        tebak = (rand()%nilai_maks)+1;
        cout << "HP[" << hp << "]" << endl;
        //cout << "[CHEAT]: " << tebak << endl;

        while(hp > 0 && tebakan != tebak){
            cout << "\nMasukkan tebakan Anda : "; cin >> tebakan;
            if(tebakan == tebak){
                cout << "Tebakan anda benar !" << endl;
                break;
            }else{
                hp--;
                if(tebakan > tebak){
                    cout << "Tebakan terlalu besar ! coba nilai lebih kecil dari " << tebakan  << endl;
                }else if(tebakan < tebak){
                    cout << "Tebakan terlalu kecil ! coba nilai lebih besar dari " << tebakan << endl;
                }
                cout << "Tebakan anda salah, HP[-1] HP: " << hp << endl;
                if(hp == 0){
                    cout << "Game OVER" << endl;
                }
            }
        }
    }
}
