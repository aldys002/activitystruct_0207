#include <iostream>
using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main (){
mahasiswa mhs;
    cout << "Nomor Mahasiswa : "; 
    cin >>  mhs.nim;
    cout << "Nama Mahasiswa : ";
    cin >>  mhs.nama;

    cout << "alamat mahasiswa : "<< endl;
    cout << "\t nama Desa : ";
    cin >> mhs.alamat.desa;
    cout << "\t nama kota : ";
    cin >> mhs.alamat.kota;
    cout << "umur mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n Nama : " << mhs.nama;
    cout << "\n alamat : ";
    cout << "\n \t Desa : " << mhs.alamat.desa;
    cout << "\n \t Kota : " mhs.alamat.kota;
    cout << "\n Umur : " << mhs.umur;

    
}
