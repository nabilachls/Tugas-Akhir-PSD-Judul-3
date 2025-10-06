#include <iostream>
using namespace std;

int main() {
    int n, target;
    int data[100];

    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    cout << "Masukkan angka yang ingin dicari: ";
    cin >> target;

    for (int i = 0; i < n; i++) {
        if (data[i] == target) {
            cout << "Angka ditemukan pada indeks ke-" << i << endl;
            return 0; 
        }
    }

    cout << "Angka tidak ditemukan." << endl;
    return 0;
}
