#include "pch.h"
#include <iostream>
//#include "..\HarryTest\stdafx.h"
//#define ROUND cout<<"\n--------------\n";main;

using namespace std;
int  program (long long floor, long long apartment, long long number){
	long long ans; 
	ans = 0;
	setlocale(LC_CTYPE, "rus");
	cout << "Введите кол-во этажей в доме: "; cin >> floor;
	cout << "Введите кол-во квартир на одном этаже: "; cin >> apartment;
	cout << "Введите номер квартиры: "; cin >> number;

	if ((apartment <= 0) || (floor <= 0) || (number <= 0))
		cout << "Данные неверны.";
	else
	{
		cout << "Подъезд № ";
		ans = number / (floor*apartment);
		if (number % (floor*apartment) != 0) ans++;
	}
	return ans;
}

int main() {
	cout << program(1,1,1);
	//ROUND	
	return 0;
}
