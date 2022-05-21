#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool Comp(string a, string b)
{
	return a < b;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int count1, count2;
	cin >> count1 >> count2;

	vector<string> namelist;
	for (int i = 0; i < count1; i++)
	{
		string temp;
		cin >> temp;
		namelist.push_back(temp);
	}

	sort(namelist.begin(), namelist.end());

	vector<string> inputlist;
	for (int i = 0; i < count2; i++)
	{
		string temp;
		cin >> temp;
		inputlist.push_back(temp);
	}

	int cnt = 0;
	vector<string> outputlist;
	for (int i = 0; i < count2; i++)
	{
		int start = 0;
		int end = count1 - 1;
		while (end >= start)
		{
			int middle = (start + end) / 2;
			if (namelist[middle] == inputlist[i])
			{
				cnt++;
				outputlist.push_back(namelist[middle]);
				break;
			}
			else if (namelist[middle] < inputlist[i])
			{
				start = middle + 1;
			}
			else
				end = middle - 1;

		}
	}

	cout << cnt << '\n';
	sort(outputlist.begin(), outputlist.end());
	for (int i = 0; i < cnt; i++)
	{
		cout << outputlist[i] << '\n';
	}

	return 0;
}