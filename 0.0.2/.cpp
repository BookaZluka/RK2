#include <iostream>

int main() {
    using namespace std;
    int i, n, x;
    cout << "Введите размер последовательности: " << endl;
    cin >> n;
    if (n <= 0) {
        cout << "error" << endl;
        return 1;
    }
    int *a = new int [n];
    cout << "Введите элементы последовательности: " << endl;
    for (i = 0; i < n; i++) {   
        cin >> a[i];
    }
    cout << "После какого элемента разделить последовательность?" << endl;
    cin >> x;
    if ( x <= 0) {
        cout << "error" << endl;
        return 1;
    }
    if ( x > n ) {
        cout << "error" << endl;
        return 1;
    }
    int b[x - 1], c[n - x - 1];
    for (i = 0; i < x; i++) {
        b[i] = a[i];
    }
    for (i = 0; i < n - x; i++) {
        c[i] = a[i + x];
    }
    for (i = 0; i < n - x; i++) {
        cout << c[i] << " ";
    }
    for (i = 0; i < x; i++) {
        cout << b[i] << " ";
    }
    delete [] a;
    return 0;
}
