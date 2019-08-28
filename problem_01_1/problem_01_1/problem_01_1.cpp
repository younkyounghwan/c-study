#include <iostream>
#include <string>
using namespace std;

int main()
{
	int sum = 0;
	int num = 0;
	int num1;
	

	for (int i=0;i<5;i++)
	{

		cout << (i + 1) << "번째 정수 입력: ";
		cin >> num;
		num1 = num;
		sum += num1;
		cout << endl;
	}


	cout << "합계: " << sum << endl;
	return 0;
}