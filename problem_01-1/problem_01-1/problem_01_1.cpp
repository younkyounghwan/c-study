#include <iostream>

int main()
{
	int sum = 0;
	int num;
	int num1;

	for (int i = 0; i < 5; i++)

		std::cout << (i + 1) << "번째 정수 입력: ";
		std::cin >> num;
		num1 = num; 
		sum += num1;
		std::cout << "\n";
		
		
	std::cout << "합계: " << sum << std::endl;
	return 0;
}