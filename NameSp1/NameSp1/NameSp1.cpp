#include <iostream>
using namespace std;
namespace BestcomImpl
{
	void SimpleFunc(void)
	{
		cout << "BestCom�� ������ �Լ�" << endl;
		
	}
}

namespace ProgcomImpl
{
	void SimpleFunc(void)
	{
		cout << "Progcom�� ������ �Լ�" << endl;
	}
}

int main()
{
	BestcomImpl::SimpleFunc();
	ProgcomImpl::SimpleFunc();
}