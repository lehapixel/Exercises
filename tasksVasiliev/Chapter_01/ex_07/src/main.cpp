/* Напишите программу для перевода расстояния,
указанного в километрах и метрах, в мили и футы. */

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

double getDistKmM() {	// Функция считывания расстояния в километрах
	double distKm, distM;
	cout << "Для перевода велечин, укажите расстояние" << endl << endl << "Количество километров: ";
	cin >> distKm;
	cout << "Количество метров: ";
	cin >> distM;
	if ((distKm > 0) && (distM >= 0)) {
		return distKm + distM * 0.01;
	}
	else {
		cout << endl << "Введено некоректное значение!" << endl << endl << endl;
		return getDistKmM();
	}
}

double getDistMile(const double dist) {	// Функция перевода километров в мили
	const double kmInMile = 1.609344;
	return dist / kmInMile;
}
double getDistFt(const double dist) { // Функция перевода миль в футы 
	const double ftInMile = 5280;
	return dist * ftInMile;
}

double Mile(const double dist) { // Функция вычленения целой части от милей     	
	double rem, fractpart, intpart;
	rem = getDistMile(dist);
	fractpart = modf(rem, &intpart);
	return intpart;
}
double Ft(const double dist) { //функция вычленения остатка от милей
	double rem, fractpart, intpart;
	rem = getDistMile(dist);
	fractpart = modf(rem, &intpart);
	return fractpart;
}
int main() {
	system("chcp 65001>nul"); // Команда для нормального отображения символов в командной строке Windows
	/*Вывод формулировки задания в консоль*/
	cout << "Задание:" << endl << "Напишите программу для перевода расстояния," << endl << "указанного в километрах и метрах, в мили и футы." << endl << endl;
	//
	const double distKm = getDistKmM();
	cout << endl << "Расстояние равняется: " << Mile(distKm) << " милям и " << getDistFt(Ft(distKm)) << " футам" <<endl << endl;
	system ("pause");
}