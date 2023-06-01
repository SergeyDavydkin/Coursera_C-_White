//*******************************************************************
//*******************************************************************
/*
Задание по программированию: Факториал
Напишите функцию, которая называется Factorial
возвращает int принимает int и возвращает факториал своего аргумента. 
Гарантируется, что аргумент функции по модулю не превышает 10. 
Для отрицательных аргументов функция должна возвращать 1.
Аргумент функции	Результат
1						1
-2						1
4						24
5						120
10						3628800

*/
//*******************************************************************
//*******************************************************************

#include <iostream>
using namespace std;
 
int Factorial(int x) {
    int res = 1;
    if (x > 1) {
        for (int i = 1; i <= x; i++) {
            res = res * i;
        }
    }   
    return res;
}
 
int main() {
 
    int n = 0;
    cin >> n;
    cout << Factorial(n);
 
    return 0;
}


//#include <iostream>

//-------------------------------------------------------------------------------------------------
int Factorial(int n)
{
	if (n <= 0)
	{
		return 1;
	}
	return n * Factorial(n - 1);
}
//-------------------------------------------------------------------------------------------------
//int main()
//{
//	std::cout << Factorial(1) << std::endl;
//	std::cout << Factorial(-2) << std::endl;
//	std::cout << Factorial(4) << std::endl;
//	return 0;
//}
//-------------------------------------------------------------------------------------------------