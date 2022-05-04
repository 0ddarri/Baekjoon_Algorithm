#include <iostream>

#define MAXINT 2147483647

using namespace std;

char board[50][50];

int CheckFillCount(int startN, int startM)
{
	int count1 = 0;
	int count2 = 0;

	for (int i = startN; i < startN + 8; i++)
	{
		for (int j = startM; j < startM + 8; j++)
		{
			if (i % 2 == 0)
			{
				if (j % 2 == 0)
				{
					if (board[i][j] == 'B')
						count1++;
				}
				else
				{
					if (board[i][j] == 'W')
						count1++;
				}
			}
			else
			{
				if (j % 2 == 0)
				{
					if (board[i][j] == 'W')
						count1++;
				}
				else
				{
					if (board[i][j] == 'B')
						count1++;
				}
			}
		}
	}

	for (int i = startN; i < startN + 8; i++)
	{
		for (int j = startM; j < startM + 8; j++)
		{
			if (i % 2 == 0)
			{
				if (j % 2 == 0)
				{
					if (board[i][j] == 'W')
						count2++;
				}
				else
				{
					if (board[i][j] == 'B')
						count2++;
				}
			}
			else
			{
				if (j % 2 == 0)
				{
					if (board[i][j] == 'B')
						count2++;
				}
				else
				{
					if (board[i][j] == 'W')
						count2++;
				}
			}
		}
	}

	return count1 > count2 ? count2 : count1;
}

int SetChessBoard(int N, int M)
{
	int result = MAXINT;

	int maxN = N - 8;
	int maxM = M - 8;

	for (int i = 0; i <= maxN; i++)
	{
		for (int j = 0; j <= maxM; j++)
		{
			int n = CheckFillCount(i, j);
			if (n < result)
				result = n;
		}
	}
	return result;
}

int main()
{
	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> board[i][j];
		}
	}

	cout << SetChessBoard(N, M) << endl;

	return 0;
}