#include <iostream>

using namespace std;

int CheckPrime(int num) // �Ҽ����� Ȯ���ϴ� �Լ�
{
	int count = 0;
	for (int i = 1; i <= num; i++) // 1���� �ڱ��ڽ��� ������ �� ������ ������ Ȯ��
	{
		if (num % i == 0) count++;
	}
	if (count == 2) return 1; // 2�̸� 1�̶� �ڱ��ڽŹۿ� �����������°� ���ٴ� ��
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