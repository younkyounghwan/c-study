#include <iostream>
using namespace std;
int main()
{
	int money = 0;
	while (1) {
		cout << "�Ǹűݾ��� ���������� �Է�: ";
		cin >> money;

		if (money == -1)
		{
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		}
		else
		{
			
			cout << "�̹� �� �޿�: " << 50 + money*0.12 <<"����"<< endl;
		}
	}
	return 0;
}