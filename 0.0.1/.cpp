#include <iostream>
#include <string>

int main() {

	using namespace std;

	setlocale(LC_ALL, "Russian");
	string a;
	string b;
	string integer_str;
	string result;
	int length;
	int counter = 0;
	int с = 0;
	cout << "Введите количество элементов последовательности: ";
	getline(cin, a);
	cout << "Введите последовательность для реверса, согласно ее разеру: ";
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
		for (int i = 0; i < (b.length() / 2); i++)
		{
			swap(b[i], b[(b.length()) - i - 1]);
		}
		while (true)
		{
			for (int i = с; i < b.length(); i++) {
				if (b[i] == ' ') {
					с++;
					break;
				}
				integer_str = integer_str + b[i];
				с++;
			}
			if (integer_str == "") break;
			for (int j = 0; j < ((integer_str.length()) / 2); j++)
			{
				swap(integer_str[j], integer_str[integer_str.length() - j - 1]);
			}
			result = result + integer_str + " ";
			integer_str = "";
		}
		cout << "Результат: " << result << endl;
	}
	cin.get();
}
