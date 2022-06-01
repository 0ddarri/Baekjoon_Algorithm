#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

bool Comp(const pair<int, int> A, const pair<int, int> B)
{
	return A.second > B.second;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int count;
	cin >> count;
	
	int* input = new int[count];
	for (int i = 0; i < count; i++)
	{
		cin >> input[i];
	}

	map<int, int> nums;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			int result = input[i] * input[j];
			auto f = nums.find(result);
			if (f != nums.end())
			{
				f->second++;
				continue;
			}
			nums.emplace(result, 1);
		}
	}

	vector<pair<int, int>> numlist(nums.begin(), nums.end());
	sort(numlist.begin(), numlist.end(), Comp);
	cout << numlist[0].first;

	return 0;
}