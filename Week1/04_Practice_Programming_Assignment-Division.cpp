/*
Тренировочное задание по программированию: Деление
Дано два натуральных числа A и B, не превышающих 1 000 000. 
Напишите программу, которая вычисляет целую часть частного от деления A на B.

Если B = 0, выведите "Impossible".

stdin	stdout
10 2	5
3 5		0
11 0	Impossible
*/

#include <iostream>

int main() {

	int a = 0;
	std::cin >> a;

	int b = 0;
	std::cin >> b;

	if (b != 0) {
		std::cout << a / b << std::endl;
	}
	else {
		std::cout << "Impossible" << std::endl;
	}

	return 0;
}
