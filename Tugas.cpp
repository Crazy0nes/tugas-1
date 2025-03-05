#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    struct Lagu{
        string judulLagu;
        string penyanyi;
        string genre;
        int tahun;
    };Lagu song[100];

    cout << "Playlist Lagu" << endl;
    cout << setfill('=') << setw(15) << "=" << endl;
    cout << setfill(' ') << setw(3) << "1. " << "Tambah lagu" << endl;
    cout << setfill(' ') << setw(3) << "2. " << "Cari Lagu" << endl;
    cout << setfill(' ') << setw(3) << "3. " << "Keluar" << endl;
    cout << "Pilih Menu: ";
    int menu;
    cin >> menu;
    
    do{
    switch (menu){
        case 1:
            cout << "Tambah lagu" << endl;
            cout << "Masukkan jumlah lagu yang ingin ditambahkan: ";
            int jumlahLagu;
            cin >> jumlahLagu;
            for(int i = 0; i < jumlahLagu; i++){
                cout << "Masukkan judul Lagu: ";
                cin >> song[i].judulLagu;
                cout << "Masukkan penyanyi: ";
                cin >> song[i].penyanyi;
                cout << "Masukkan genre: ";
                cin >> song[i].genre;
                cout << "Masukkan tahun: ";
                cin >> song[i].tahun ; cout << endl << endl; 
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
        
    }while(menu != 3);
    return 0;
}