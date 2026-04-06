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
    mahasiswa mhs[3];
    for(int i = 0; i <=2; i++){
    // mengisi data
    cout << "Isikan data nama : ";
    getline(cin, mhs[i].nama);
    cout << "Isikan data desa : ";
    getline(cin, mhs[i].alamat.desa);
    cout << "Isikan data kota : ";
    getline(cin, mhs[i].alamat.kota);
    cout << "Isikan data usia : ";
    cin >> mhs[i].umur;
    cin.ignore();
    }
}