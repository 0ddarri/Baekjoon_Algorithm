#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N, M;
	bool *nums;

	cin >> N >> M;

	nums = new bool[M + 1];
	fill_n(nums, M + 1, 1);
	nums[1] = false;

	for (int i = 2; i <= sqrt(M); i++)
	{
		if (nums[i])
		{
			for (int j = i * 2; j <= M; j += i)
				nums[j] = false;
		}
	}

	for (int i = N; i <= M; i++)
	{
		if (nums[i])
			printf("%d\n", i);
	}

	return 0;
}