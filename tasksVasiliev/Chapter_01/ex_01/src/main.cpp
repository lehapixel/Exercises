/* Напишите программу, при выполнении которой 
в консольное окно выводятся натуральные числа от 1 до 10. */

#include <iostream>

using namespace std;

int main() {
    system("chcp 65001>nul"); // Команда для нормального отображения символов в командной строке Windows
	/*Вывод формулировки задания в консоль*/
    cout << "Задание:" << endl << "Напишите программу, при выполнении которой" << endl << "в консольное окно выводятся натуральные числа от 1 до 10." << endl << endl;
	//
	int n = 0;
	while (n < 10) {
		++n;
		cout << " " << n;
	}
	cout << endl;
	system ("pause");
}