#include <iostream>
#include <string>

using namespace std;

int FindS(int n)
{
	int num = n;
	int result = 0;
	for (int i = 1; i <= 1000000; i++)
	{
		if (i > n) break;
		int count = 0; // ÀÚ¸´¼ö
		int sNum = i;
		result = sNum;
		while (sNum != 0)
		{
			sNum /= 10;
			count++;
		}
		string temp = to_string(i);
		for (int i = 0; i < count; i++)
		{
			char t = temp[i];
			int add = atoi(&t);
			result += add;
		}
		if (result == num) return i;
	}
	return 0;
}

int main()
{
	int n;
	cin >> n;
	printf("%d", FindS(n));

	return 0;
}