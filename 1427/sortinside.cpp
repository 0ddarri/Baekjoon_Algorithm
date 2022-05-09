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
		//s[i] = atoi(&t); // atoi는 원래 배열을 받으려고 하는데 char 변수 하나를 넣었다. char는 끝에 뭐가 있는지 모른다(undefined) 그러니 확실한 방법인 temp[i] - '0'을 사용하자
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