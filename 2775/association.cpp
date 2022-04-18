#include <iostream>

using namespace std;

int people[14][14];

void SetPeople()
{
	for (int i = 0; i < 14; i++)
		people[0][i] = i + 1;

	for (int i = 0; i < 14; i++)
	{
		int sum = 0;
		for (int j = 0; j < 14; j++)
		{
			sum += people[i][j];
			if (i + 1 == 15) return;
			people[i + 1][j] = sum;
		}
	}
}

int FindPeopleCount(int K, int N)
{
	return people[K][N - 1];
}

int main()
{
	SetPeople();

	int count;

	cin >> count;
	int* K = new int[count];
	int* N = new int[count];

	for (int i = 0; i < count; i++)
	{
		cin >> K[i];
		cin >> N[i];
	}

	for (int i = 0; i < count; i++)
		cout << FindPeopleCount(K[i], N[i]) << endl;

	return 0;
}