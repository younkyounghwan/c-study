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

		cout << (i + 1) << "��° ���� �Է�: ";
		cin >> num;
		num1 = num;
		sum += num1;
		cout << endl;
	}


	cout << "�հ�: " << sum << endl;
	return 0;
}