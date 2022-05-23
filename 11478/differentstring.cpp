#include <iostream>
#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	set<string> set;

	string temp = "";
	for (int i = 0; i < str.size(); i++) {
		for (int j = i; j < str.size(); j++) {
			temp += str[j];
			set.insert(temp);
		}
		temp = "";
	}

	cout << set.size();

	return 0;
}