//library
#include <iostream>
using namespace std;

// deklarasi global
int p, l;

// Implementasi prosedur dan fungsi
void input() {
    cout << "Masukkan panjang = ";
    cin >> p;
    cout << "Masukkan lebar = ";
    cin >> l;
}

float jumlah(float a, float b, float c){
    return a + b +c;
}

int luaspersegip(int a, int b){
    return a * b;
}

void output(){
    cout << "Hasilnya = " << luaspersegip(p, l) << endl;
    cout << "terima kasih" << endl;
}

int main() { //mulai
    input();
    output();
    cout << "hasil penjumlahan= " << jumlah(15.1, 24.9, 67);
} //selesai