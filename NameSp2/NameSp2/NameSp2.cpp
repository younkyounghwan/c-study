#include <iostream>
using namespace std;

namespace BestcomImpl
{
	void SimpleFunc();
}

namespace ProgcomImpl
{
	void SimpleFunc();
}

int main()
{
	BestcomImpl::SimpleFunc();
	ProgcomImpl::SimpleFunc();
	return 0;
}

void BestcomImpl::SimpleFunc()
{
	cout << "BestcomImpl�� ������ �Լ�" << endl;
}

void ProgcomImpl::SimpleFunc()
{
	cout << "ProcomImpl�� ������ �Լ�" << endl;
}