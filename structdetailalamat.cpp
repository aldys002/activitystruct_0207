#include <iostream>
using namespace std;

struct DetailAlamat {
    string desa
    string kota;
};

struct mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main(){
    mahasiswa mhs;
    cout << "nomor mahasiswa : ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;

    cout << "alamat mahasiswa : ";
    cout << "\t nama Desa : ";
    cin >> mhs.alamat.desa;
    cout << "\t Nama kota : ";
    cin >> mhs.alamat.kota;

    cout << "umur mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n NIM : " << mhs.nim;
    cout << "\n Nama : " << mhs.nama;
    cout << "\n alamat : ";
    cout << "\n Desa : " << mhs.alamat.desa;
    cout << "\n Kota : " << mhs.alamat.kota;
    cout << "\n Umur : " << mhs.umur;
}