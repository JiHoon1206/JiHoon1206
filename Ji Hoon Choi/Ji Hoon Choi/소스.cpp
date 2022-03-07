#include <iostream>
using namespace std;
int main()
{
	int arr[4][4];
	int a = 1;
	for (int y = 3; y >= 0; y--)
	{
		for (int x = 0; x < 4; x++)
		{
			arr[x][y] = a;
			a++;
		}
	}
	for (int q = 0; q < 4; q++)
	{
		for (int z = 0; z < 4; z++)
		{
			cout << arr[q][z] << " ";
		}
		cout << endl;
	}
	return 0;
}