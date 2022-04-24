#include <iostream>
#include <cmath>
#include <list>

using namespace std;

int CheckPrime(int num)
{
	bool* nums;

	int min = num + 1;
	int max = num * 2;

	nums = new bool[max + 1];
	fill_n(nums, max + 1, 1);
	nums[0] = false;
	nums[1] = false;

	for (int i = 2; i <= sqrt(max); i++)
	{
		if (nums[i])
		{
			for (int j = i * 2; j <= max; j += i)
			{
				nums[j] = false;
			}
		}
	}

	int cnt = 0;
	for (int i = min; i <= max; i++)
	{
		if (nums[i]) cnt++;
	}
	return cnt;
}

int main()
{
	list<int> inputList;
	int input = 0;
	while (true)
	{
		cin >> input;
		if (input == 0) break;
		inputList.push_back(input);
	}

	for (int num : inputList)
	{
		cout << CheckPrime(num) << endl;
	}
	return 0;
}