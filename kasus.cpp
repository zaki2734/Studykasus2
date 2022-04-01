#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>

using namespace std;

int main(){

    int menu,jm,total, jarak;
    string menu2[7] = {"kosong","Ayam geprek","Ayam goreng","udang goreng","cumi goreng","Ayam Bakar"};

    cout << "=============Rumah Makan Drazak =============="<<endl;
    cout << "Menu :"<<endl;
    cout << "1. Ayam geprek\t: Rp 21.000,00"<<endl;
    cout << "2. Ayam goreng\t: Rp 17.000,00"<<endl;
    cout << "3. Udang goreng\t: Rp 19.000,00"<<endl;
    cout << "4. Cumi goreng\t: Rp 20.000,00"<<endl;
    cout << "5. Ayam bakar\t: Rp 25.000,00"<<endl;
    cout << "Pilih Pesanan : ";
    cin >> menu;

    if (menu==1){
            cout << "Jumlah ayam geprek yang dipesan"<<endl;
            cin >> jm ;
            total = jm * 21000;
    }else if (menu==2){
            cout << "Jumlah ayam goreng yang dipesan"<<endl;
            cin >>jm;
            total = jm * 17000;
    }else if (menu==3){
            cout << "Jumlah udang goreng yang dipesan"<<endl;
            cin >>jm;
            total = jm * 19000;
    }else if (menu==4){
            cout << "Jumlah cumi goreng yang dipesan"<<endl;
            cin >> jm;
            total = jm * 20000;
    }else if (menu==5){
            cout << "Jumlah ayam bakar yang dipesan"<<endl;
            cin >>jm;
            total = jm * 25000;
    }

    cout << "Masukan Jarak Rumahmu :"<<endl;
    cin >> jarak;

    if (jarak <= 3)
    {
        total = total + 15000;
    }
    else
    {
        total = total + 25000;
    }


    //menghitung diskon
    if (total > 25000 && total =< 50000)
    {
        total = total - 3000;
    }
    else if (total > 50000 && total < 150000)
    {
        total = total - 5000;
        total = total - (total * 15 / 100);
    }
    else
    {
        total = total - 8000;
        total = total - (total * 35 / 100);
    }

    //slip pembayaran
    ofstream myfile;
    myfile.open("rumahmakan.txt");

    myfile << "==============Slip Pembayaran============="<<endl<<endl<<endl;
    myfile << "pesanan : "<<menu2[menu]<<endl;
    myfile << "Jumlah pesanan "<<jm<<endl;
    myfile << "total bayar = "<<total<<endl;
    myfile << "===========selamat menikmati=============="<<endl;
    myfile << "=============Terima Kasih================="<<endl;

    myfile.close();



    return 0;
}
