#include <iostream>

using namespace std;

int GCD(const int A, const int B)
{
	if (B == 0)
		return A;
	return GCD(B, A % B);
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int count;
	cin >> count;

	int firstring;
	cin >> firstring;

	int* rings = new int[count - 1];
	for (int i = 0; i < count - 1; i++)
	{
		cin >> rings[i];
	}
	for (int i = 0; i < count - 1; i++)
	{
		int temp1 = firstring;
		int temp2 = rings[i];
		int gcd = GCD(temp1, temp2);

		cout << temp1 / gcd << "/" << temp2 / gcd << '\n';
	}
	return 0;
}