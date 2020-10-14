#include <iostream>

using namespace std;

int main()
{
    int harga, awalJam, awalMenit, awalDetik, akhirJam, akhirMenit, akhirDetik, selisihJam,
    selisihMenit, selisihDetik;

    cout <<"\nMasukkan Waktu Awal\n";
    cout <<"Jam : ";
    cin >> awalJam;
    cout <<"Menit : ";
    cin >> awalMenit;
    cout <<"Detik : ";
    cin >> awalDetik;

    cout <<"\nMasukkan Waktu Akhir\n";
    cout <<"Jam : ";
    cin >> akhirJam;
    cout <<"Menit : ";
    cin >> akhirMenit;
    cout <<"Detik : ";
    cin >> akhirDetik;

    if(akhirDetik - awalDetik < 0){
            selisihDetik = (60 + akhirDetik) - awalDetik;
            akhirMenit;
    } else {
            selisihDetik = akhirDetik - awalDetik;
    }

        //Menghitung Selisih Menit
    if(akhirMenit - awalMenit < 0){
            selisihMenit = (60 + akhirMenit) - awalMenit;
            akhirJam;
            selisihJam = akhirJam - awalJam - 1;
    } else {
            selisihMenit = akhirMenit - awalMenit;
            selisihJam = akhirJam - awalJam;
    }

    cout <<"\n-------Lama Penggunaan--------- \n";
    cout <<"Jam   : "<<selisihJam<<" Jam\n";
    cout <<"Menit : "<<selisihMenit<<" Menit\n";
    cout <<"Detik : "<<selisihDetik<<" Detik\n";

    int hargaPerjam = 5000;
    int hargaPermenit = 5000/60;
    int hargaPerDetik = 5000/3600;

    harga = (hargaPerjam * selisihJam) + (hargaPermenit * selisihMenit) + (hargaPerDetik * selisihDetik);

    cout <<"Total : Rp."<<harga<<"\n";
    cout <<endl;
}

