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
	cout << "Bestcom�� ������ �Լ�" << endl;
	PrettyFunc();
	ProgcomImpl::SimpleFunc();
}

void BestcomImpl::PrettyFunc()
{
	cout << "so pretty!!" << endl;
}

void ProgcomImpl::SimpleFunc()
{
	cout << "Progcom�� ������ �Լ�" << endl;
}