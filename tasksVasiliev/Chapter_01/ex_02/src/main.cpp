 /* Напишите программу, при выполнении которой 
отображаются пять первых нечетных чисел. */

#include <iostream>

using namespace std;

int main() {
	system("chcp 65001>nul"); // Команда для нормального отображения символов в командной строке Windows
	/*Вывод формулировки задания в консоль*/
	cout << "Задание:" << endl << "Напишите программу, при выполнении которой" << endl << "отображаются пять первых нечетных чисел." << endl << endl;
	//
	int const num = 5;
	int k = 0;
	int n = 1;

	while (k < num) {
		if (n % 2 > 0)
		{
			cout << n << " ";
			k++;
			n++;
		}
		else
		{
			n++;
		}
	}
	cout << endl;
	system ("pause");
}