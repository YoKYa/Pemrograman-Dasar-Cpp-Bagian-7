#include <iostream>

using namespace std;

int main(){
    system("cls");
    // cin atau C in adalah memasukkan data dari standar input
    // cout atau C out adalah mengeluarkan data dari standar output

    //Variabel
    int Angka;

    // Mengeluarkan pada console
    cout << "Hello World"; 
    cout << endl; // endline atau akhir dari baris

    // Memasukkan pada console
    cout << "Masukkan Sebuah Angka : ";
    cin >> Angka;

    // Mengeluarkan Angka pada Variabel
    cout << "Angka yang kamu masukkan adalah : " << Angka;

    cin.get();
    return 0;
}