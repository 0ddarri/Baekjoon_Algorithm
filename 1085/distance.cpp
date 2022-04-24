#include <iostream>

using namespace std;

int GetDistance(int x, int y, int w, int h)
{
	int dists[4]{ x, w - x, y, h - y };

	int val = x;
	for (int i = 1; i < 4; i++)
	{
		if (val > dists[i]) val = dists[i];
	}

	return val;
}

int main(void)
{
	int x, y, w, h;

	cin >> x >> y >> w >> h;

	cout << GetDistance(x, y, w, h) << endl;


	return 0;
}