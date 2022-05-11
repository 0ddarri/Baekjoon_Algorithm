#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool Comp(const string a, const string b)
{
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}

int main()
{
	int count;
	cin >> count;

	vector<string> wordlist;
	for (int i = 0; i < count; i++)
	{
		string temp;
		cin >> temp;

		if (find(wordlist.begin(), wordlist.end(), temp) == wordlist.end())
		{
			wordlist.push_back(temp);
		}
	}

	sort(wordlist.begin(), wordlist.end(), Comp);

	for (int i = 0; i < wordlist.size(); i++)
	{
		cout << wordlist[i] << '\n';
	}

	return 0;
}