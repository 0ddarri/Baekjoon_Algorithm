#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>

using namespace std;

bool Comp(const pair<int, string> a, const pair<int, string> b)
{

	return a.first < b.first;
}

int main()
{
	int count;
	cin >> count;

	vector<pair<int, string>> people;
	for (int i = 0; i < count; i++)
	{
		int age;
		string name;
		cin >> age >> name;
		pair<int, string> a;
		a.first = age;
		a.second = name;
		people.push_back(a);
	}

	stable_sort(people.begin(), people.end(), Comp);
	for (int i = 0; i < count; i++)
	{
		cout << people[i].first << " " << people[i].second << "\n";
	}

	return 0;
}