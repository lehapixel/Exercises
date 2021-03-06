/* Напишите программу, в которой создается массив и заполняется квадратами натуральных чисел. */

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	system("chcp 65001>nul"); // Команда для нормального отображения символов в командной строке Windows
	/*Вывод формулировки задания в консоль*/
	cout << "Задание:" << endl << "Напишите программу, в которой создается массив и заполняется квадратами натуральных чисел." << endl << endl;
	//
	const int n = 15; // Определение размера массива
	int arr[n + 1]; // Создание массива с натуральными числами
	int k = 0; // Индексная переменная
	arr[0] = 1;
	while (k < n) {
		arr[k] = (k+1)*(k+1);
		cout << " " << arr[k];
		k++;
	}
	cout << endl;
	system ("pause");
}