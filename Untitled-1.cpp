#include <iostream>
using namespace std;

// Prosedur untuk menghitung jumlah bilangan ganjil
void jumlahGanjil(int *x, int y) {
    *x = 0;  
    for (int i = 1; i <= y; i++) {
        if (i % 2 != 0) { 
            *x += i;
        }
    }
}

int main() {
    int hasil;
    int y;

    cout << "Masukkan nilai y: ";
    cin >> y;

    jumlahGanjil(&hasil, y);

    cout << "Jumlah bilangan ganjil dari 1 sampai " << y << " adalah: " << hasil << endl;

    return 0;
}
