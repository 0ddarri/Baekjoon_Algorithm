#include <iostream>

using namespace std;

int CheckSelfNumber(int n)
{
	int sum = n;
	while (n != 0)
	{
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}

int main()
{
	ios::sync_with_stdio(false);

	bool check[10001];
	fill_n(check, 10001, true);
	
	for (int i = 1; i < 10001; i++)
	{
		int num = CheckSelfNumber(i);
		if (num < 10001)
			check[num] = false;
	}

	for (int i = 1; i < 10001; i++)
	{
		if (check[i])
			cout << i << '\n';
	}
	
	return 0;
}