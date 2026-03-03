// library
#include <iostream>
using namespace std;

// deklarasi global
int p, l, luas;

// implementasi prosedur dan fungsi
void input() {
    cout << "Masukkan panjang = ";
    cin >> p;
    cout << "Masukkan lebar = ";
    cin >> 1;
}

int luaspersegi(){
    return p * l;
}

void output (){
    cout << "Hasilnya = " << luaspersegi () << endl;
    cout << "terima kasih";
}
