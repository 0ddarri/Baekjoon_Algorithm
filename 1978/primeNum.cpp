#include <iostream>

using namespace std;

int CheckPrime(int num) // 소수인지 확인하는 함수
{
	int count = 0;
	for (int i = 1; i <= num; i++) // 1부터 자기자신의 수까지 쭉 나눠서 나머지 확인
	{
		if (num % i == 0) count++;
	}
	if (count == 2) return 1; // 2이면 1이랑 자기자신밖에 나눠떨어지는게 없다는 뜻
	return 0;
}

int main()
{
	int cnt = 0;
	cin >> cnt;

	int N = 0;
	int result = 0;
	for (int i = 0; i < cnt; i++)
	{
		cin >> N;
		result += CheckPrime(N);
	}
	cout << result << endl;
	return 0;
}