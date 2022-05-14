/* Напишите программу для перевода километров в мили. */

#include <iostream>
#include <cstdlib>

using namespace std;

double getDistKm() {	// Функция считывания расстояния в километрах
	double dist;
	cout << "Для перевода велечины, укажите расстояние в километрах: ";
	cin >> dist;
	if (dist > 0) {
		return dist;
	}
	else {
		cout << endl << "Введено некоректное значение (расстояние должно быть больше 0)!" << endl << endl << endl;
		return getDistKm();
	}

}

double getDistMile(const double dist) {	// Функция перевода километров в мили
	const double kmInMile = 1.609344;
	return dist / kmInMile;
}
int main() {
	system("chcp 65001>nul"); // Команда для нормального отображения символов в командной строке Windows
	/*Вывод формулировки задания в консоль*/
	cout << "Задание:" << endl << "Напишите программу для перевода километров в мили." << endl << endl;
	//
	const double distKm = getDistKm();
	cout << endl << "Расстояние равняется: " << getDistMile(distKm) << " милям" << endl << endl;
	system ("pause");
}