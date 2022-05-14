/* Напишите программу для перевода расстояния, указанного в саженях и аршинах 
(1 сажень равняется 2,16 метра, а 3 аршина равны 1 сажени), 
в метры и сантиметры (в 1 метре 100 сантиметров). */

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

double getDistSajAr() {	// Функция считывания расстояния в саженях
	double distSaj, distAr;
	cout << "Для перевода велечин, укажите расстояние" << endl << endl << "Количество саженей: ";
	cin >> distSaj;
	cout << "Количество аршин: ";
	cin >> distAr;
	if ((distSaj > 0) && (distAr >= 0)) {
		return distSaj + distAr / 3;
	}
	else {
		cout << endl << "Введено некоректное значение!" << endl << endl << endl;
		return getDistSajAr();
	}
}

double getDistMeter(const double dist) {	// Функция перевода саженей в метры
	const double meterInSaj = 2.16;
	return dist * meterInSaj;
}
double getDistCentimeter(const double dist) { // Функция перевода метров в сантиметры 
	const double CentimeterInMeter = 100;
	return dist * CentimeterInMeter;
}

double Meter(const double dist) { // Функция вычленения целой части от метров     	
	double rem, fractpart, intpart;
	rem = getDistMeter(dist);
	fractpart = modf(rem, &intpart);
	return intpart;
}
double Centimeter(const double dist) { // Функция вычленения остатка от метров
	double rem, fractpart, intpart;
	rem = getDistMeter(dist);
	fractpart = modf(rem, &intpart);
	return fractpart;
}
int main() {
	system("chcp 65001>nul"); // Команда для нормального отображения символов в командной строке Windows
	/*Вывод формулировки задания в консоль*/
	cout << "Задание:" << endl << "Напишите программу для перевода расстояния, указанного в саженях и аршинах" << endl << "(1 сажень равняется 2,16 метра, а 3 аршина равны 1 сажени)," << endl << "в метры и сантиметры (в 1 метре 100 сантиметров)." << endl << endl;
	//
	const double distSaj = getDistSajAr();
	cout << endl << "Расстояние равняется: " << Meter(distSaj) << " метрам и " << getDistCentimeter(Centimeter(distSaj)) <<" сантиметрам" << endl << endl;
	system ("pause");
}