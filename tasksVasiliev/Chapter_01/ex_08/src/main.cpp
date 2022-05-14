/* Напишите программу для перевода расстояния, указанного в саженях 
(1 сажень равняется 2,16 метра), в метры. */

#include <iostream>
#include <cstdlib>

using namespace std;

double getDistKm() {	// Функция считывания расстояния в саженях
	double dist;
	cout << "Для перевода велечины, укажите расстояние в саженях: ";
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
	const double kmInMile = 2.16;
	return dist * kmInMile;
}
int main() {
	system("chcp 65001>nul"); // Команда для нормального отображения символов в командной строке Windows
	/*Вывод формулировки задания в консоль*/
	cout << "Задание:" << endl << "Напишите программу для перевода расстояния, указанного в саженях" << endl << "(1 сажень равняется 2,16 метра), в метры." << endl << endl;
	//
	const double distKm = getDistKm();
	cout << endl << "Расcтояние равняется: " << getDistMile(distKm) <<" метрам"  << endl << endl;
	system ("pause");
}