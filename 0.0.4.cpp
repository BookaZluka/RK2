#include <iostream>

using namespace std;

int main() {
    int n, m;
    cout << "Введите размер матрицы: ";
    cin >> n >> m;
    int matrix[n][m];
    int i = 1, j, k, p = n / 2;
    for (k = 1; k <= p; k++) {
        for (j = k - 1; j < n - k + 1; j++) matrix[k - 1][j] = i++;
        for (j = k; j < n - k + 1; j++) matrix[j][n - k] = i++;
        for (j = n - k - 1; j >= k - 1; --j) matrix[n - k][j] = i++;
        for (j = n - k - 1; j >= k; j--) matrix[j][k - 1] = i++;
    }
    if (n % 2 == 1) matrix[p][p] = n * m;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++) {
            cout << matrix[i][j] << "\t";
            if (j == n - 1) cout << "\n";
        }
}
