#include <iostream>

using namespace std;

#define MAX 10001

int main()
{
	int count = 0;
	cin >> count;

	int counting[MAX];
	for (int i = 0; i < MAX; i++)
		counting[i] = 0;

	for (int i = 0; i < count; i++)
	{
		int temp = 0;
		scanf_s("%d", &temp);
		counting[temp]++;
	}

	for (int i = 0; i < MAX; i++)
	{
		for (int j = 0; j < counting[i]; j++)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}