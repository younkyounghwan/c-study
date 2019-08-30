#include <iostream>

using namespace std;
int BoxVolume(int length, int width, int height);
int BoxVolume(int length, int width);
int BoxVolume(int length);
int BoxVolume();

int main()
{
	cout << "[3,3,3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[3,3,3] : " << BoxVolume(5, 5) << endl;
	cout << "[3,3,3] : " << BoxVolume(7) << endl;
	cout << "[3,3,3] : " << BoxVolume() << endl;
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}
int BoxVolume(int length, int width)
{
	return length * width *1;
}
int BoxVolume(int length)
{
	return length;
}
int BoxVolume()
{
	return 0;
}

