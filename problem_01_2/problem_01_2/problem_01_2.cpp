#include <iostream>

int main()
{
	char name[100];
	char phone[100];
	std::cout << "이름: ";
	std::cin >> name;
	std::cout << "전화번호: ";
	std::cin >> phone;
	std::cout << "이름은 " << name << " 전화번호는 " << phone << std::endl;
	return 0;
}