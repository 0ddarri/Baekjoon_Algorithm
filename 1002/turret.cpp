#include <iostream>
#include <cmath>
#include <list>

using namespace std;

int Getd(int x1, int y1, int r1, int x2, int y2, int r2)
{
	int dist = ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	int case1 = (r2 - r1) * (r2 - r1);
	int case2 = (r1 + r2) * (r1 + r2);
	if (dist == 0)
	{
		if (case1 == 0) return -1;
		else return 0;
	}
	else
	{
		if (case1 < dist && dist < case2) return 2;
		if (case2 == dist || case1 == dist) return 1;
	}
	return 0;
}

int main()
{
	list<int> results;

	int num;
	cin >> num;

	int x1, y1, x2, y2, r1, r2;
	for (int i = 0; i < num; i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		results.push_back(Getd(x1, y1, r1, x2, y2, r2));
	}

	for (int i : results)
	{
		cout << i << endl;
	}

	return 0;
}