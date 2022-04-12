#include <iostream>

using namespace std;

int main()
{
	int A;
	int B;
	int C;

	cin >> A;
	cin >> B;
	cin >> C;
	if (C <= B)
	{
		cout << -1 << endl;
	}
	else
	{
		int result = A / (C - B) + 1;
		cout << result << endl;
	}
	return 0;
}

// 하! 수학 열시미 해야겠다ㅋ
int FindBreakEvenPoint(int A, int B, int C)
{
	if (C < B) return -1;

	int resultPrice = A;
	int count = 0;
	int resultMoney = 0;

	while (resultPrice >= resultMoney)
	{
		resultPrice += B;
		resultMoney += C;
		count++;
	}
	return count;
}