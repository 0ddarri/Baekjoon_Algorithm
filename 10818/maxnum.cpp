#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;
	vector<int> numlist;

	for (int i = 0; i < num; i++)
	{
		int tmp;
		cin >> tmp;
		numlist.push_back(tmp);
	}

	int maxnum = *max_element(numlist.begin(), numlist.end());
	int minnum = *min_element(numlist.begin(), numlist.end());
	cout << minnum << " " << maxnum << "\n";

	return 0;
}