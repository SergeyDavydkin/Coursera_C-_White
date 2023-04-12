/*
* Задание по программированию: Минимальная строка
В стандартном потоке даны три строки, разделённые пробелом. 
Каждая строка состоит из строчных латинских букв и 
имеет длину не более 30 символов. 
Выведите в стандартный вывод лексикографически минимальную из них.

stdin					stdout
milk milkshake month	milk
c a b					a
fog wood fire			fire
*/

//-----------------First----------------------------
#include <iostream>

int main() {

	std::string str1, str2, str3;
	std::cin >> str1 >> str2 >> str3;

	if (str1 <= str2 && str1 <=str3)
		std::cout << str1;
	else if (str2 <= str1 && str2 <= str3)
		std::cout << str2;
	else
		std::cout << str3;

	return 0;
}

//-----------------Second----------------------------
#include <algorithm>
#include <iostream>
#include <vector>

int main() {

	std::cout << "Enter string number one:" << std::endl;
	std::string str1;
	std::cin >> str1;

	std::cout << "Enter string number two:" << std::endl;
	std::string str2;
	std::cin >> str2;

	std::cout << "Enter string number three:" << std::endl;
	std::string str3;
	std::cin >> str3;

	std::vector<std::string> temp = { str1, str2, str3 };
	sort(temp.begin(), temp.end());

	std::cout << temp[0] << std::endl;

	return 0;
}

//-----------------Third----------------------------
#include <iostream>
#include <string>
using namespace std;

string minFrom3Str(string str1, string str2, string str3) {
	if (str1 <= str2 && str1 <= str3) {
		return str1;
	}

	else if (str2 <= str1 && str2 <= str3) {
		return str2;
	}

	else {
		return str3;
	}
}

int main() {

	std::string str1, str2, str3;
	std::cin >> str1 >> str2 >> str3;

	cout << minFrom3Str(str1, str2, str3) << endl;

	return 0;
}
