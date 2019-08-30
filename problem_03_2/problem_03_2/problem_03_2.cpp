#include <iostream>
using namespace std;
int SimpleFunc(int a)
{
	return a + 1;
}
int SimpleFunc(void)
{
	return 10;
}

int main()
{
	SimpleFunc(10);
	SimpleFunc();
}