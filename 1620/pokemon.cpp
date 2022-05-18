#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

string name[100001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int count, findcount;
	cin >> count >> findcount;

	map<string, int> pokemons;
	for (int i = 0; i < count; i++)
	{
		string temp;
		cin >> temp;
		name[i] = temp;
		pokemons.emplace(temp, i);
	}
	vector<string> input;
	for (int i = 0; i < findcount; i++)
	{
		string temp;
		cin >> temp;
		input.push_back(temp);
	}

	for (int i = 0; i < findcount; i++)
	{
		if (isdigit(input[i][0]))
		{
			int n = stoi(input[i]);
			cout << name[n - 1] << '\n';
		}
		else
		{
			auto f = pokemons.find(input[i]);
			cout << f->second + 1 << '\n';
		}
	}
	return 0;
}