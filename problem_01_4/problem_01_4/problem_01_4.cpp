#include <iostream>
using namespace std;
int main()
{
	int money = 0;
	while (1)
		if (money == -1)
		{
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
		else
		{
			cout << "판매금액을 만원단위로 입력: ";
			cin >> money;
			cout << "이번 달 급여: " << money << endl;
		}
		return 0;
}