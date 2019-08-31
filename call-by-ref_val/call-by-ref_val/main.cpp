#include <iostream>
using namespace std;

void SwapByValue(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
} // call-by-value

void SwapbyRef(int * ptr1, int *ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
} //call-by-reference


int main()
{
	int num1 = 20;
	int num2 = 30;

	cout << num1 << num2 << endl;
	cout << &num1 << &num2 << endl;

	SwapByValue(num1,num2);
	SwapbyRef(&num1,&num2);

	cout << num1 << num2 << endl;
	cout << &num1 << &num2 << endl;

	return 0;
}