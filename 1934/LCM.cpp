#include <iostream>
#include <vector>

using namespace std;

int GCD(int A, int B)
{
	if (B == 0)
		return A;
	return GCD(B, A % B);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int count;
	cin >> count;

	int *results = new int[count];

	for (int i = 0; i < count; i++)
	{
		int A, B;
		cin >> A >> B;
		
		results[i] = A * B / GCD(A, B);
	}

	for (int i = 0; i < count; i++)
	{
		cout << results[i] << '\n';
	}
	return 0;
}
