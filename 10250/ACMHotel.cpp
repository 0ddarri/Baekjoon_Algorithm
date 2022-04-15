#include <iostream>

using namespace std;

int FindBestRoom(int H, int W, int N)
{
	int checkCol = H;
	int col = 1;
	while (checkCol < N)
	{
		checkCol += H;
		col++;
	}

	int num = H - (checkCol - N);

	int result = num * 100 + col;
	
	return result;
}


int main(void)
{
	int num;

	cin >> num;

	int* H = new int[num];
	int* W = new int[num];
	int* N = new int[num];

	for (int i = 0; i < num; i++)
	{
		cin >> H[i] >> W[i] >> N[i];
	}

	for (int i = 0; i < num; i++)
	{
		cout << FindBestRoom(H[i], W[i], N[i]) << endl;
	}
	return 0;
}