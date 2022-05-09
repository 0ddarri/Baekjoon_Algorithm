#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num;
	cin >> num;

	int count = 0;
	int n = num;
	while (n > 0)
	{
		n /= 10;
		count++;
	}

	string temp = to_string(num);

	int* s = new int[count];
	fill_n(s, count, 0);
	for (int i = 0; i < count; i++)
	{
		//char t = temp[i];
		s[i] = temp[i] - '0';
		//s[i] = atoi(&t); // atoi�� ���� �迭�� �������� �ϴµ� char ���� �ϳ��� �־���. char�� ���� ���� �ִ��� �𸥴�(undefined) �׷��� Ȯ���� ����� temp[i] - '0'�� �������
	}

	for (int i = 0; i < count; i++)
	{
		for (int j = i; j < count; j++)
		{
			if (s[i] <= s[j])
			{
				int temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}

	for (int i = 0; i < count; i++)
	{
		printf("%d", s[i]);
	}
	return 0;
}