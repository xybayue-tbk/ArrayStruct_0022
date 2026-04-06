#include <iostream>
#include <string>
using namespace std;

struct AlamatDetail
{
    string desa;
    string kota;
    
};

struct mahasiswa
{
    string nama;
    AlamatDetail alamat;
    int umur;
};

int main(){
        // deklarasi variable struct
    mahasiswa mhs;

    // mengisi data
    cout << "Isikan data nama : ";
    cin >> mhs.nama;
    cout << "Isikan data desa : ";
    cin >> mhs.alamat.desa;
    cout << "Isikan data kota : ";
    cin >> mhs.alamat.kota;
    cout << "Isikan data usia : ";
    cin >> mhs.umur;

    cout << "Data Mahasiswa" << endl;
    cout << "Nama" << mhs.nama << endl;
    cout << "desa" << mhs.alamat.desa << endl;
    cout << "kota" << mhs.alamat.kota << endl;
    cout << "Usia" << mhs.umur << endl;
}
