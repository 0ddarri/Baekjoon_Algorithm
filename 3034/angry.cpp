#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int count, X, Y;

	cin >> count >> X >> Y;

	float diag = X * X + Y * Y;
	int* numbers = new int[count];
	for (int i = 0; i < count; i++)
	{
		cin >> numbers[i];
		numbers[i] *= numbers[i];
	}

	for (int i = 0; i < count; i++)
	{
		if (numbers[i] <= diag)
			cout << "DA" << '\n';
		else
			cout << "NE" << '\n';
	}
}