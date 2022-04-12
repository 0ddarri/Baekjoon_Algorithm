#include <iostream>

using namespace std;

int FindNearPath(int num)
{
	int depth = 1;

	int number = 1;

	while (true)
	{
		if (number >= num) break;

		number += 6 * depth;
		depth++;
	}

	return depth;
}

int main()
{
	int n;
	cin >> n;

	cout << FindNearPath(n) << endl;

	return 0;
}