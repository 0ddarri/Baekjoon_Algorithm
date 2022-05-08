#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool Comp(int A, int B)
{
	return A < B;
}

bool MapComp(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

bool Map2Comp(pair<int, int> a, pair<int, int> b)
{
	return a.first < b.first;
}

int main()
{
	int count;
	cin >> count;

	list<int> nums;
	for (int i = 0; i < count; i++)
	{
		int num;
		cin >> num;
		nums.push_back(num);
	}
	nums.sort(Comp);

	int j = 0;

	int average = 0;
	int middle = 0;
	int min = 0;
	int max = 0;
	int range = 0;

	map<int, int> counting;
	for (int i : nums)
	{
		counting.emplace(i, 0);
	}

	for (int i : nums)
	{
		if (j == 0)
			min = i;
		if (j == count - 1)
			max = i;
		if (j == (count / 2))
			middle = i;
		average += i;
		counting[i]++;
		j++;
	}

	vector<pair<int, int>> vec(counting.begin(), counting.end());
	vector<pair<int, int>> vec2;
	sort(vec.begin(), vec.end(), MapComp);
	int t = vec[vec.size() - 1].second;
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i].second == t)
			vec2.push_back(vec[i]);
	}

	sort(vec2.begin(), vec2.end(), Map2Comp);


	float av = (float)average / (float)count;
	if (av > 0)
		av += 0.5f;
	else
		av -= 0.5f;
	average = av;
	
	int most = 0;
	if(vec2.size() > 1)
		most = vec2[1].first;
	else
		most = vec2[0].first;
	range = max - min;

	printf("%d\n%d\n%d\n%d\n", average, middle, most, range);

	return 0;
}