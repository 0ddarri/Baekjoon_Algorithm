#include <iostream>

using namespace std;

int CheckMinCount(int kg)
{
	int _kg = kg;

	int fiveCount = kg / 5;
	_kg -= fiveCount * 5;
	while (_kg % 3 != 0)
	{
		_kg += 5;
		fiveCount--;
		if (fiveCount < 0) return -1;
	}
	int threeCount = _kg / 3;

	int result = fiveCount + threeCount;

	return result;
}

int main()
{
	int kg;

	cin >> kg;

	cout << CheckMinCount(kg) << endl;
	return 0;
}