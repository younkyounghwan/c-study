#include <iostream>
using namespace std;
int BoxVolume(int length, int width = 1, int height = 1); // default 값은 오른쪽부터 채운다.

int main()
{
	cout << "[3,3,3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[3,3,3] : " << BoxVolume(5, 5) << endl;
	cout << "[3,3,3] : " << BoxVolume(7) << endl;
//	cout << "[3,3,3] : " << BoxVolume() << endl;
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}