//****************************************************************
//****************************************************************
/*
Тренировочное задание по программированию: Чётные числа
Дано два целых числа A и B (A <= B, A >= 1, B <= 30000). 
Выведите через пробел все чётные числа от A до B (включительно).

Для проверки целого числа x на чётность используется операция взятия остатка 
от деления на 2, которая в C++ оформляется с помощью символа "%". Например,

int x;
cin >> x;
if (x % 2 == 0) {
  // x - чётное число
} else {
  // x - нечётное число
}
stdin	stdout
1 10	2 4 6 8 10
2 3		2
9 11	10
*/
//****************************************************************
//****************************************************************
#include <iostream>
using namespace std;

int main() {

	int a = 0;
	cin >> a;

	int b = 0;
	cin >> b;

	for (int i = a; i <= b; i++) {
		if (i % 2 == 0) {
			cout << i << " ";
		}
	}

	return 0;
}
