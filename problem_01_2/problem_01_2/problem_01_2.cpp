#include <iostream>

int main()
{
	char name[100];
	char phone[100];
	std::cout << "�̸�: ";
	std::cin >> name;
	std::cout << "��ȭ��ȣ: ";
	std::cin >> phone;
	std::cout << "�̸��� " << name << " ��ȭ��ȣ�� " << phone << std::endl;
	return 0;
}