#include <iostream>
#include <vector>
using namespace std;

// 선택정렬
vector<int> Sort(vector<int> vec)
{
	vector<int> v = vec;

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = i + 1; j < v.size(); j++)
		{
			if (v[i] >= v[j])
			{
				int tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
			}
		}
	}
	return v;
}

int main()
{
	int count = 0;
	cin >> count;

	vector<int> nums;
	for (int i = 0; i < count; i++)
	{
		int num = 0;
		cin >> num;
		nums.push_back(num);
	}
	nums = Sort(nums);

	for (int i = 0; i < count; i++)
	{
		cout << nums[i] << endl;
	}
	return 0;
}
