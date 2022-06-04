#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int GCD(int A, int B)
{
	if (B == 0)
		return A;
	return GCD(B, A % B);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int count;
	cin >> count;

	int* nums = new int[count];
	for (int i = 0; i < count; i++)
		cin >> nums[i];

	sort(nums, nums + count);


	// nums[i] - nums[i - 1] = (k[i] - k[i - 1])*M
	// 모든 값에서 공통된 수 M을 구하는 것이다. -> 두 수를 뺀 값에 대한 최대공약수를 구해라!
	int gcd = nums[1] - nums[0];
	for (int i = 2; i < count; i++)
	{
		gcd = GCD(gcd, nums[i] - nums[i - 1]);
	}

	// 최대공약수의 약수를 출력하면 끝
	vector<int> results;
	for (int i = 2; i * i <= gcd; i++)
	{
		if (gcd % i == 0)
		{
			results.push_back(i);
			results.push_back(gcd / i);
		}
	}
	results.push_back(gcd);
	sort(results.begin(), results.end());
	results.erase(unique(results.begin(), results.end()), results.end());

	for (int i = 0; i < results.size(); i++)
	{
		cout << results[i] << " ";
	}

	return 0;
}