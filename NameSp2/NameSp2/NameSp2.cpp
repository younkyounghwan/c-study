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
	cout << "BestcomImpl이 정의한 함수" << endl;
}

void ProgcomImpl::SimpleFunc()
{
	cout << "ProcomImpl이 정의한 함수" << endl;
}