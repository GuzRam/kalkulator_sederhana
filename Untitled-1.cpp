#include<iostream>

using namespace std;

int main(){
    int a,b,hasil;
    int pil;

    cout << "selamat datang di program kakulator sederhana" << endl;
    cout << "masukan pilihan : " << endl;
    cout << "1. Penjumlahan " << endl;
    cout << "2. Pengurangan " << endl;
    cout << "3. Perkalian "<< endl;
    cout << "4. Pembagian" << endl;
cin >> pil;
if (pil == 1){
    cout << "anda memilih opsi penjumlahan" << endl;
    cout << "Masukan dua buah digit angka yang ingin anda hitung ! " << endl;
    cout << "angka pertama : ";
    cin >> a;
    cout << "angka kedua   : ";
    cin >> b;
    cout << "angka yang anda pilih adalah angka " << a << " dan " << b << endl;
    hasil = a + b;
    cout << "hasil penjumlahan dua buah digit tersebut adalah : " << hasil << endl;
} else if (pil == 2){
    cout << "anda memilih opsi pengurangan" << endl;
    cout << "Masukan dua buah digit angka yang ingin anda hitung ! " << endl;
    cout << "angka pertama : ";
    cin >> a;
    cout << "angka kedua   : ";
    cin >> b;
    cout << "angka yang anda pilih adalah angka " << a << " dan " << b << endl;
    hasil = a - b;
    cout << "hasil pengurangan dua buah digit tersebut adalah : " << hasil << endl;
} else if (pil == 3){
    cout << "anda memilih opsi perkalian "<< endl;
    cout << "Masukan dua buah digit angka yang ingin anda hitung ! " << endl;
    cout << "angka pertama : ";
    cin >> a;
    cout << "angka kedua   : ";
    cin >> b;
    cout << "angka yang anda pilih adalah angka " << a << " dan " << b << endl;
    hasil = a * b;
    cout << "hasil Perkalian dua buah digit tersebut adalah : " << hasil << endl;
} else if (pil == 4){
    cout << "anda memilih opsi Pembagian "<< endl;
    cout << "Masukan dua buah digit angka yang ingin anda hitung ! " << endl;
    cout << "angka pertama : ";
    cin >> a;
    cout << "angka kedua   : ";
    cin >> b;
    cout << "angka yang anda pilih adalah angka " << a << " dan " << b << endl;
    hasil = a - b;
    cout << "hasil pembagian dua buah digit tersebut adalah : " << hasil << endl;
    cout << endl;
}
else{
    cout << "maaf input anda tidak valid";
    cout << endl; 
}

return 0;
}