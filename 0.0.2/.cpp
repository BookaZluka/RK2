#include <iostream>
#include <string>

int main() {

	using namespace std;

	setlocale(LC_ALL, "Russian");

	string a;
	string b;
	string result;
	string count;
	string first, second;
	int length;
	int counter = 0;
	int c = 0;
	int d = 0;
	cout << "Введите размер последовательности: ";
	getline(cin, a);
	cout << "Введите элементы последовательности, согласно ее размеру: ";
	getline(cin, b);
	length = atoi(a.c_str());
	for (int i = 0; i < b.length(); i++)
	{
		if (b[i] == ' ') counter++;
	}
	if (length != (counter + 1))
		cout << "При чтении была обнаружена ошибка!" << endl;
	else
	{
		cout << "Введите количество элементов, на которое необходимо сдвинуть последовательнось: ";
		getline(cin, count);
		if (count == "")
		{
			cout << "При чтении была обнаружена ошибка!" << endl;
		}
		else
		{
			while (c != (length - atoi(count.c_str())))
			{
				second = second + b[d];
				if (b[d] == ' ') c++;
				d++;
			}
			for (int i = second.length(); i < b.length(); i++)
			{
				first = first + b[i];
			}

			result = first + ' ' + second;
			cout << "Результат: " << result << endl;
		}
	}
	cin.get();
}
