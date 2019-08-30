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
	
	cout << SQUARE1(3.15) << endl; // int형
	cout << (3.15) * (3.15) << endl; // double형이지만, 8행으로 인해 int형

	return 0;
}

