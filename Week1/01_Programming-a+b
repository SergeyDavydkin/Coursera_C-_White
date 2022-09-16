/*
На вход программе через стандартный ввод передаются два целых числа, 
по модулю не превышающие 100000. Выведите в стандартный вывод их сумму
stdin		stdout
2 3		5
-4 -9		-13
-1 2		1
*/

//-----------------First----------------------------
#include <iostream>

int main() {
	int a = 0, b = 0;
	std::cin >> a >> b;
	
	std::cout << a + b << std::endl;
	
	return 0;
}


//-----------------Second----------------------------
#include <iostream>

int Sum(const int& numb1, const int& numb2) {
	int r = numb1 + numb2;
	return r;
}

int main() {
	int a = 0, b = 0;
	std::cin >> a >> b;
	
	std::cout << Sum(a, b);

	return 0;
}


//-----------------Third----------------------------
#include <iostream>
#include <string>

int Sum(const int& numb1, const int& numb2) {
	int r = numb1 + numb2;
	return r;
}

int main() {
	
	std::string operation = "No";	
	
	
	do {
		std::cout << "Enter number one: ";
		int a = 0;
		std::cin >> a;

		std::cout << "Enter number two: ";
		int b = 0;
		std::cin >> b;

		std::cout << Sum(a, b) << std::endl;
		std::cout << std::endl;

		std::cout << "Enter No to exite, otherwise continue : ";
		std::cin >> operation;
	} while (operation != "No");
		
	
	return 0;
}


//-----------------Forth----------------------------
#include <iostream>
#include <string>

int Sum(const int& numb1, const int& numb2) {
	int r = numb1 + numb2;
	return r;
}

int main() {

	std::string operation = "Y";


	while (operation != "No") {
		std::cout << "Enter number one: ";
		int a = 0;
		std::cin >> a;

		std::cout << "Enter number two: ";
		int b = 0;
		std::cin >> b;

		std::cout << Sum(a, b) << std::endl;
		std::cout << std::endl;

		std::cout << "Enter No to exite, otherwise continue : ";
		std::cin >> operation;
	}


	return 0;
}
