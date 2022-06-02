#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int FindGCD(int A, int B)
{
	vector<int> Anums;
	for (int i = 1; i <= A; i++)
	{
		for (int j = i; j <= A; j++)
		{
			if (i * j == A)
			{
				Anums.push_back(i);
				Anums.push_back(j);
			}
		}
	}
	vector<int> Bnums;
	for (int i = 1; i <= B; i++)
	{
		for (int j = i; j <= B; j++)
		{
			if (i * j == B)
			{
				Bnums.push_back(i);
				Bnums.push_back(j);
			}
		}
	}

	int GCD = 0;
	for (int i = 0; i < Anums.size(); i++)
	{
		for (int j = 0; j < Bnums.size(); j++)
		{
			if (Anums[i] == Bnums[j])
			{
				if (GCD < Anums[i])
					GCD = Anums[i];
			}
		}
	}

	return GCD;
}

int FindLCM(int A, int B)
{
	int LCM = A * B;
	vector<int> AMaxNums;
	for (int i = 1; i <= LCM; i++)
	{
		int temp = A * i;
		if (temp > LCM)
			break;
		AMaxNums.push_back(temp);
	}

	vector<int> BMaxNums;
	for (int i = 1; i <= LCM; i++)
	{
		int temp = B * i;
		if (temp > LCM)
			break;
		BMaxNums.push_back(temp);
	}

	for (int i = 0; i < AMaxNums.size(); i++)
	{
		for (int j = 0; j < BMaxNums.size(); j++)
		{
			if (AMaxNums[i] == BMaxNums[j])
			{
				LCM = AMaxNums[i];
				break;
			}
		}
		if (LCM == AMaxNums[i])
			break;
	}

	return LCM;
}

int main()
{
	int A, B;
	cin >> A >> B;

	cout << FindGCD(A, B) << '\n' << FindLCM(A, B);
	return 0;
}