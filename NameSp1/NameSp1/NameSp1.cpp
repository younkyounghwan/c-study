#include <iostream>
using namespace std;
namespace BestcomImpl
{
	void SimpleFunc(void)
	{
		cout << "BestCom이 정의한 함수" << endl;
		
	}
}

namespace ProgcomImpl
{
	void SimpleFunc(void)
	{
		cout << "Progcom이 정의한 함수" << endl;
	}
}

int main()
{
	BestcomImpl::SimpleFunc();
	ProgcomImpl::SimpleFunc();
}