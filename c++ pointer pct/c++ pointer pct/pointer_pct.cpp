#include <iostream>
using namespace std;
void func(int* p, int*& pr)
{
	p++;
	pr++;
}
int main()
{
	int a[2];

	int* b = &a[0];
	int* c = &a[0];

	cout << "\n Before call to func" << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	func(b, c);

	cout << "\n After call to func" << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	getchar();
	return 0;
}