#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int ACount, BCount;
	cin >> ACount >> BCount;

	vector<int> A;
	vector<int> B;
	for (int i = 0; i < ACount; i++)
	{
		int temp;
		cin >> temp;
		A.push_back(temp);
	}
	for (int i = 0; i < BCount; i++)
	{
		int temp;
		cin >> temp;
		B.push_back(temp);
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	int countB_A = BCount;
	for (int i = 0; i < ACount; i++)
	{
		int start = 0;
		int end = BCount - 1;
		while (start <= end)
		{
			int middle = (start + end) / 2;
			if (B[middle] == A[i])
			{
				countB_A--;
				break;
			}
			else if (B[middle] < A[i])
				start = middle + 1;
			else
				end = middle - 1;
		}
	}
	int countA_B = ACount;
	for (int i = 0; i < BCount; i++)
	{
		int start = 0;
		int end = ACount - 1;
		while (start <= end)
		{
			int middle = (start + end) / 2;
			if (A[middle] == B[i])
			{
				countA_B--;
				break;
			}
			else if (A[middle] < B[i])
				start = middle + 1;
			else
				end = middle - 1;
		}
	}
	cout << countA_B + countB_A << '\n';
	return 0;
}