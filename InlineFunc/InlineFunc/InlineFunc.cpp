#include <iostream>
using namespace std;
inline int SQUARE1(int x) // inline func
{
	return x * x;
}

#define SQUARE(x) ((x)*(x)) // mecro func


int main()
{
	cout << SQUARE1(5) << endl;

	cout << SQUARE1(12) << endl;
	cout << (12) * (12) << endl;
	
	cout << SQUARE1(3.15) << endl; // int��
	cout << (3.15) * (3.15) << endl; // double��������, 8������ ���� int��

	return 0;
}

