#include <iostream>
using namespace std;
int main()
{
	int money = 0;
	while (1)
		if (money == -1)
		{
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		}
		else
		{
			cout << "�Ǹűݾ��� ���������� �Է�: ";
			cin >> money;
			cout << "�̹� �� �޿�: " << money << endl;
		}
		return 0;
}