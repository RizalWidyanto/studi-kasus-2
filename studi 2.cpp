#include <iostream>
using namespace std;
 
int main()
{
 cout << "##  Program Menghitung Slip Gaji Developer ##" << endl;
 cout << "=============================================" << endl;
 cout << endl;
 
 string nama;
 char golongan;
 
 int jam_kerja, upah_per_bulan, total_upah, bonus;
 
 // proses input
 cout << "Nama Developer: ";
 getline(cin,nama);
 
 cout << "Golongan: ";
 cin >> golongan;
 
 cout << "Jumlah jam kerja: ";
 cin >> jam_kerja;
 
 // tentukan jumlah upah per bulan berdasarkan golongan
 switch (golongan) {
  case 'a':
    upah_per_bulan = 15000000;
    break;
  case 'b' :
    upah_per_bulan = 13000000;
    break;
  case 'c':
    upah_per_bulan = 8000000;
    break;
  case 'd':
    upah_per_bulan = 18000000;
    break;
  case 'e':
    upah_per_bulan = 8000000;
    break;
  case 'f':
    upah_per_bulan = 18000000;
    break;
  }
 
  total_upah = jam_kerja * upah_per_bulan + bonus;
 
  // cek apakah jam kerja lebih dari 48 jam
  if ( (jam_kerja - 12) > 0 ) {
     total_upah = total_upah + ((jam_kerja - 12)*4);
  }
 
  // proses output
   cout << endl;
   cout << nama << " menerima upah Rp." << total_upah << " per bulan";
   cout << endl;
 
 
 return 0;
}
