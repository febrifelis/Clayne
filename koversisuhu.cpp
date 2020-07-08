#include <iostream>
using namespace std;

int main(){

  int menu;
  float c, r, f, k;
  
 while(1) {
    
    cout<<"\n------- Menu Konversi Suhu -------\n";
    cout<<"1. Konversi Celcius (c) \n";
    cout<<"2. Konversi Reamur (r) \n";
    cout<<"3. Konversi Fahrenheit (F) \n";
    cout<<"4. Konversi Kelvin (K) \n";
    cout<<"5. Keluar program \n";
    cout<<"------------------------------\n";

    cout<<"Pilih nomor menu: ";
    cin>>menu;

    if(menu == 1){

      cout<<"Masukkan nilai Celcius: ";
      cin>>c;

      r = c*4/5;
      f = (c*9/5)+32;
      k = c+273.16;

      cout<<"Celsius dalam Reamur adalah "<<r<<endl;
      cout<<"Celcius dalam Fahrenheit adalah "<<f<<endl;
      cout<<"Celcius dalam Kelvin adalah "<<k<<endl;
      cout<<"\n";

    } else if (menu == 2){

      cout<<"Masukkan nilai Reamur: ";
      cin>>r;

      c = r*5/4;
      f = (r*9/4)+32;
      k = (r*5/4)+273.16;

      cout<<"Nilai Reamur dalam Celcius adalah "<<c<<endl;
      cout<<"Nilai Reamur dalam Fahrenheit adalah "<<f<<endl;
      cout<<"Nilai Reamur dalam Kelvin adalah "<<k<<endl;
      cout<<"\n";

    } else if (menu == 3){

      cout<<"Masukkan nilai Fahrenheit: ";
      cin>>f;

      c = (f*5/9)-32;
      r = (f*4/9)-32;
      k = (f-32)*5/9+273.16;

      cout<<"Nilai Fahrenheit dalam Celcius adalah "<<c<<endl;
      cout<<"Nilai Fahrenheit dalam Reamur adalah "<<r<<endl;
      cout<<"Nilai Fahrenheit dalam Kelvin adalah "<<k<<endl;
      cout<<"\n";

    } else if(menu == 4) {

      cout<<"Masukkan nilai Kelvin: ";
      cin>>k;

      c = k-273.16;
      r = (k-273.16)*4/5;
      f = (k-273.16)*9/5+32;
      
      cout<<"Nilai Kelvin dalam Celcius adalah "<<c<<endl;
      cout<<"Nilai Kelvin dalam Reamur adalah "<<r<<endl;
      cout<<"Nilai Kelvin dalam Fahrenheit adalah "<<f<<endl;
      cout<<"\n";

    } else if(menu == 5){
      cout<<"Makasih sudah menggunakan program ini ^^\n";
      exit(0);
    } else {
      cout<<"Yahh, input yang dimasukan ga terdaftar :(\n";
    }

  }
  return 0;
}
