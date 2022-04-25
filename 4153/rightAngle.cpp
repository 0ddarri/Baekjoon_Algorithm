#include <iostream>
#include <vector>

using namespace std;

bool CheckRightAngle(int A, int B, int C)
{
	if (A * A + B * B == C * C) return true;
	if (A * A + C * C == B * B) return true;
	if (C * C + B * B == A * A) return true;

	return false;
}

int main(void)
{
	vector<int> A;
	vector<int> B;
	vector<int> C;

	int a, b, c;
	while (true)
	{
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;
		A.push_back(a);
		B.push_back(b);
		C.push_back(c);
	}

	for (int i = 0; i < A.size(); i++)
	{
		if (CheckRightAngle(A[i], B[i], C[i]))
		{
			printf("right\n");
		}
		else printf("wrong\n");
	}

	return 0;
}