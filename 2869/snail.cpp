#include <iostream>

using namespace std;

int CheckDay(int A, int B, int V)
{
	int dayCount = 0;

	int isDay = 0; // 0 : ³·, 1 : ¹ã

	int climbCount = 0;

	while (climbCount < V)
	{
		if (isDay == 0)
		{
			climbCount += A;
			if (climbCount >= V) return ++dayCount;
		}
		else
		{
			climbCount -= B;
		}

		isDay++;
		if (isDay % 2 == 0)
		{
			dayCount++;
			isDay = 0;
		}
	}
	return dayCount;
}

int CheckDay2(int A, int B, int V)
{
	int dayCount = (V - B) / (A - B);
	if ((V - B) % (A - B) != 0) dayCount += 1;
	return dayCount;
}


int main()
{
	int A, B, V;

	cin >> A;
	cin >> B;
	cin >> V;

	cout << CheckDay2(A, B, V) << endl;

	return 0;
}