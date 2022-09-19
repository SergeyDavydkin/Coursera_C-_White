/*
На вход вашей программе в стандартном вводе даны действительные коэффициенты 
A, B и C уравнения Ax² + Bx + C = 0. 
Выведите все его различные действительные корни в любом порядке. 
Гарантируется, что хотя бы один из коэффициентов не равен нулю.

stdin	stdout
2 5 2	-0.5 -2
2 4 2	-1
2 1 2
0 4 10	-2.5
Подсказка
Для вычисления квадратного корня используйте функцию sqrt из библиотеки cmath. 
Чтобы подключить библиотеку, в начале программы напишите
#include <cmath>
*/

//-----------------First----------------------------
#include <cmath>
#include <iostream>

int main() {
	double a = 0;
	std::cin >> a;

	double b = 0;
	std::cin >> b;

	double c = 0;
	std::cin >> c;

	double d = 0;
	d = (b * b) - (4 * a * c);	

	if (a == 0) {
		if (b != 0) {
			std::cout << "x = " << -c / b << std::endl;
		}
		else { std::cout << "Divide by 0 impossible" << std::endl; 
		}
	}

	else if (d == 0) {
		std::cout << "x = " << (-b / (2 * a)) << std::endl;
	}

	else if (d > 0) {
		std::cout << "x1 = " << (-b + std::sqrt(d)) / (2 * a) << std::endl;
		std::cout << "x2 = " << (-b - std::sqrt(d)) / (2 * a) << std::endl;
	}

	return 0;
}


//-----------------Second----------------------------
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double A, B, C;
	cin >> A >> B >> C;

	// найдём дискриминант
	double D = B * B - 4 * A * C;

	// если A равно нулю, то уравнение линейное: Bx + C = 0
	if (A == 0) {

		// Bx = -C => x = -C / B
		if (B != 0) {
			cout << -C / B << endl;
		}
		// если B равно нулю, корней нет

	}
	else if (D == 0) {  // случай с нулевым дискриминантом

   // корень ровно один
		cout << -B / (2 * A) << endl;

	}
	else if (D > 0) {  // в случае с положительным дискриминантом корня два

		double r1 = (-B + sqrt(D)) / (2 * A);
		double r2 = (-B - sqrt(D)) / (2 * A);

		cout << r1 << " " << r2 << endl;

	}
	// если дискриминант отрицателен, действительных корней нет

	return 0;
}


//-----------------Third----------------------------
#include <iostream>
#include <cmath>

int main()
{
	double a = 0;
	std::cin >> a;

	double b = 0;
	std::cin >> b;

	double c = 0;
	std::cin >> c;

	double D = pow(b, 2) - 4 * a * c;

	if (a == 0)
	{
		if (b != 0)
		{
			std::cout << -c / b << std::endl;
		}
	}
	else
		if (D == 0)
		{
			std::cout << -b / (2 * a) << std::endl;
		}
		else
			if (D > 0)
			{
				double x1 = (-b + sqrt(D)) / (2 * a);
				double x2 = (-b - sqrt(D)) / (2 * a);
				std::cout << x1 << " " << x2;
			}
	return 0;
}
