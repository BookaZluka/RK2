#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k, l, t;
    cout<<"Введите размер матрицы: ";
    cin >> k >> l;
    int a[k][l];
    cout<<"Введите элементы массива: ";
    for (i = 0; i < k; i++)
        for (j = 0; j < l; j++)
            cin >> a[i][j];
    for (int i=0;i<k;i++) {
        for (int j = 0; j < l; j++) {
            cout <<a[i][j]<<" ";
        }
        cout << endl;
    }
    i = j = 0;
    cout<<"Введите число, на основании которого будет производиться сдвиг: ";
    cin >> n;
    for (t = 0; t < n; t++)
        while (true) {
            swap(a[0][0], a[i][j]);
            if (i == 0 && j == l - 1)
            {
                i++;
                continue;
            }
            else if (i == 0)
            {
                j++;
                continue;
            }
            if (i == k - 1 && j == l - 1)
            {
                j--;
                continue;
            }
            else if (j == l - 1)
            {
                i++;
continue;
}
if (i == k - 1 && j == 0)
{
i--;
continue;
}
else if (i == k - 1)
{
j--;
continue;
}
if (i == 1 && j == 0)
{
i = j = 0;
break;
}
else if (j == 0)
{
i--;
continue;
}
}
for (i = 0; i < k; i++)
{
for (j = 0; j < l; j++)
cout << a[i][j] << " ";
cout << endl;
}
return 0;
}
