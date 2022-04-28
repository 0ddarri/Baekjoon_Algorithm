#include <iostream>

using namespace std;

// 처음부터 끝까지 특정 수부터 1까지 다 확인해 비는값인지 아닌지 확인

void Star(int i, int j, int num)
{
	if ((i / num) % 3 == 1 && (j / num) % 3 == 1)
	{
		cout << " ";
	}
	else
	{
		if (num / 3 == 0)
			cout << "*";
		else Star(i, j, num / 3);
	}
}

int main()
{
	int num = 0;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			Star(i, j, num);
		}
		printf("\n");
	}

	return 0;
}