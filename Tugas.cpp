#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "Playlist Lagu" << endl;
    cout << setfill('=') << setw(15) << "=" << endl;
    cout << setfill(' ') << setw(3) << "1. " << "Tambah lagu" << endl;
    cout << setfill(' ') << setw(3) << "2. " << "Cari Lagu" << endl;
    cout << setfill(' ') << setw(3) << "3. " << "Keluar" << endl;
    cout << "Pilih Menu: ";
    int menu;
    cin >> menu;
    switch (menu){
        case 1:
            cout << "Tambah lagu" << endl;
            cout << "Masukkan jumlah lagu yang ingin ditambahkan: ";
            int jumlahLagu;
            cin >> jumlahLagu;
            for(int i = 0; i < jumlahLagu; i++){
                cout << "Masukkan judul Lagu: ";
                string judulLagu, penyanyi, genre; 
                int tahun;
                cin >> judulLagu;
                cout << "Masukkan penyanyi: ";
                cin >> penyanyi;
                cout << "Masukkan genre: ";
                cin >> genre;
                cout << "Masukkan tahun: ";
                cin >> tahun; cout << endl << endl; 
            }
            break;

        case 2:
            cout << "Cari lagu" << endl;
            cout << "Masukkan judul lagu yang ingin dicari: ";
            string lagunya;
            cin >> lagunya;

            break;

        case 3:
            cout << "Keluar" << endl;
            break;

        default:
            cout << "Menu tidak tersedia" << endl;
            break;
    }
    return 0;
}