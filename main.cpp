#include <iostream>

using namespace std;

int pilihan;
void (int s){ //dengan parameter
     int luas = s*s; //pada prosedur int luas dan keliling bisa dijadiin satu karena tidak mereturn
     int keliling = 4*s;
     cout << "Keliling :" << keliling << endl;
     cout << "Luas :" << luas << endl;
}

int masukan;
int main () {
    cout << "Masukkan Panjang Sisi :";
    cin >> s;
    keliling_luas_persegi (s); //eksekusi dengan prosedur tinggal manggil namanya

    return 0;
}
