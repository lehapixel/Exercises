/* Напишите программу для вычисления суммы чётных натуральных чисел с использованием оператора do-while. */

#include <iostream>
#include <cstdlib>

using namespace std;

int input() {
	int num = 0;
	
	do {
		cin >> num;
	} while ((num % 2 != 0) || (num <= 0));
	
	return num;
}

int sum(const int num1, const int num2) {
	return num1 + num2;
}

int main() {
	system("chcp 65001>nul"); // Команда для нормального отображения символов в командной строке Windows
	/*Вывод формулировки задания в консоль*/
	cout << "Задание:" << endl << "Напишите программу для вычисления суммы чётных натуральных чисел с использованием оператора do-while." << endl << endl;
	//
	cout << "Введите два чётных натуральных числа: ";
	int s = sum(input(), input());
	cout << endl << "Сумма чисел равна: " << s << endl;
	system ("pause");
}