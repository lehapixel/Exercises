/* Напишите программу для вычисления суммы нечётных натуральных чисел с использованием оператора for. */

#include <iostream>
#include <cstdlib>

using namespace std;

int input() {
	for (int num = 1; ;) {
		cin >> num;
		if (num % 2 > 0) {
		return num;
		}
		else {		
		cout << endl << "Введено некоректное значение! Повторите ввод числа!" << endl << endl << endl;
		}
	}
}

int sum(const int num1, const int num2) {
	return num1 + num2;
}

int main() {
	system("chcp 65001>nul"); // Команда для нормального отображения символов в командной строке Windows
	/*Вывод формулировки задания в консоль*/
	cout << "Задание:" << endl << "Напишите программу для вычисления суммы нечётных натуральных чисел с использованием оператора for." << endl << endl;
	//
	cout << "Введите два нечётных натуральных числа: ";
	int s = sum(input(), input());
	cout << endl << "Сумма чисел равна: " << s << endl;
	system ("pause");
}