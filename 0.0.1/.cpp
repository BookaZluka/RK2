#include <iostream>

int main() {
    using namespace std;
    int n, m;
    cout << "Введите размер массива" << endl;
    cin >> n;
    if ( n <= 0 ) {
        cout << "error" << endl;
        return 1;
    }
    cout << "Введите элементы массива" << endl;
    int *a = new int [n];
    for (m=0; m<n; m++){
        cin >> a[m];
    }
    for (m=0; m<n/2; m++){
        swap (a[m], a[n-m-1]);
    }
    for (m=0; m<n; m++){
        cout << a[m] << "\t";
    }
    delete [] a;
}
