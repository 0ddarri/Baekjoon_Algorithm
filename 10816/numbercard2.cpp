#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int count;
	cin >> count;

	map<int, int> cards;
	for (int i = 0; i < count; i++)
	{
		int temp;
		cin >> temp;

		auto find = cards.find(temp);
		if(find != cards.end())
		{
			find->second++;
		}
		else
		{
			cards.emplace(temp, 1);
		}
	}

	cin >> count;
	int* nums = new int[count];
	for (int i = 0; i < count; i++)
	{
		int temp;
		cin >> temp;
		auto find = cards.find(temp);
		if (find == cards.end())
			nums[i] = 0;
		else
			nums[i] = find->second;
	}

	for (int i = 0; i < count; i++)
	{
		cout << nums[i] << ' ';
	}

	return 0;
}