#include <iostream>

using namespace std;

int CheckPrime(int num)
{
	int cnt = 0;
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0) cnt++;
	}
	if (cnt == 2) return num;
	return 0;
}

int main()
{
	int result = 0;
	int firstnum = -1;
	int M, N;

	cin >> M >> N;
	for (int i = M; i <= N; i++)
	{
		if (CheckPrime(i) != 0)
		{
			result += i;
			if (firstnum == -1) firstnum = i;
		}
	}
	if (firstnum == -1) cout << -1 << endl;
	else cout << result << '\n' << firstnum << endl;

	return 0;
}