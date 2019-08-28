#include <iostream>
using namespace std;
int main()
{
	int money = 0;
	while (1) {
		cout << "판매금액을 만원단위로 입력: ";
		cin >> money;

		if (money == -1)
		{
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
		else
		{
			
			cout << "이번 달 급여: " << 50 + money*0.12 <<"만원"<< endl;
		}
	}
	return 0;
}