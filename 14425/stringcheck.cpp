#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<string> stringlist1;
	for (int i = 0; i < n; i++)
	{
		string temp;
		cin >> temp;
		stringlist1.push_back(temp);
	}

	vector<string> stringlist2;
	for (int i = 0; i < m; i++)
	{
		string temp;
		cin >> temp;
		stringlist2.push_back(temp);
	}

	sort(stringlist1.begin(), stringlist1.end());

	int count = 0;
	for (int i = 0; i < m; i++)
	{
		int start = 0;
		int end = n - 1;

		while (end >= start)
		{
			int middle = (start + end) / 2;

			if (stringlist1[middle] == stringlist2[i])
			{
				count++;
				break;
			}
			else if (stringlist1[middle] < stringlist2[i])
			{
				start = middle + 1;
			}
			else
				end = middle - 1;

		}
	}

	cout << count;

	return 0;
}