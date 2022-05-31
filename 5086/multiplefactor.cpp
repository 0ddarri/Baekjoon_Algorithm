#include <iostream>
#include <list>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B;

	list<string> results;

	while (true)
	{
		cin >> A >> B;
		if (A == 0 && B == 0)
			break;

		int state = 0;

		if (A < B)
		{
			for (int i = 0; i < B; i++)
			{
				if (A * i == B)
				{
					results.push_back("factor");
					state = 1;
					break;
				}
			}
		}
		else
		{
			for (int i = 0; i < A; i++)
			{
				if (B * i == A)
				{
					results.push_back("multiple");
					state = 2;
					break;
				}
			}
		}

		if (state == 0)
		{
			results.push_back("neither");
		}
	}

	for (string it : results)
	{
		cout << it << '\n';
	}

	return 0;
}