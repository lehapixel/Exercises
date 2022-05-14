/* Напишите программу с функцией для вычисления суммы натуральных чисел. */

#include <iostream>
#include <cstdlib>

using namespace std;

int input() {
	int num;
	cin >> num;
	if (num > 0) {
		return num;
	}
	else {
		cout << endl << "Введено некоректное значение! Повторите ввод числа!" << endl << endl << endl;
		return input();
	}
}

int sum(const int num1, const int num2) {
	return num1 + num2;
}

int main() {
	system("chcp 65001>nul"); // Команда для нормального отображения символов в командной строке Windows
	/*Вывод формулировки задания в консоль*/
	cout << "Задание:" << endl << "Напишите программу с функцией для вычисления суммы натуральных чисел." << endl << endl;
	//
	cout << "Введите два натуральных числа: ";
	int s = sum(input(), input());
	cout << endl << "Сумма чисел равна: " << s << endl;
	system ("pause");
}