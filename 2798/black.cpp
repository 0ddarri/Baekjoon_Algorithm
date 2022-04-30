#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int count;
	int near;
	cin >> count >> near;

	int* nums = new int[count];
	for (int i = 0; i < count; i++)
	{
		cin >> nums[i];
	}

	int result = 0;
	int curResult = 0;

	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			for (int k = j + 1; k < count; k++)
			{
				curResult = nums[i] + nums[j] + nums[k];
				if (curResult <= near && curResult > result)
				{
					result = curResult;
				}
			}
		}
	}
	cout << result << endl;

	return 0;
}