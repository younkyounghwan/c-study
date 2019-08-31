#include <iostream>

using namespace std;

namespace BestcomImpl
{
	void SimpleFunc();
}

namespace BestcomImpl
{
	void PrettyFunc();
}
namespace ProgcomImpl
{
	void SimpleFunc();
}

int main()
{
	BestcomImpl::SimpleFunc();
}

void BestcomImpl::SimpleFunc()
{
	cout << "Bestcom이 정의한 함수" << endl;
	PrettyFunc();
	ProgcomImpl::SimpleFunc();
}

void BestcomImpl::PrettyFunc()
{
	cout << "so pretty!!" << endl;
}

void ProgcomImpl::SimpleFunc()
{
	cout << "Progcom이 정의한 함수" << endl;
}