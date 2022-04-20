#include <iostream>
#include <string>

using namespace std;

string Fac(int num)
{
	int result = num;
	string res = "";

	for (int i = 2; i <= result; i++)
	{
		while (result % i == 0)
		{
			res += to_string(i) + '\n';
			result /= i;
		}
	}
	return res;
}

int main()
{
	int N;
	cin >> N;

	cout << Fac(N) << endl;
	return 0;
}