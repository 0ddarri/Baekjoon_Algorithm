#include <iostream>

using namespace std;

// ó������ ������ Ư�� ������ 1���� �� Ȯ���� ��°����� �ƴ��� Ȯ��

namespace Origin
{
	void Star(int i, int j, int num)
	{
		if ((i / num) % 3 == 1 && (j / num) % 3 == 1)
		{
			cout << " ";
		}
		else
		{
			if (num / 3 == 0)
				cout << "*";
			else Star(i, j, num / 3);
		}
	}

	void Output()
	{
		int num = 0;
		cin >> num;

		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j < num; j++)
			{
				Star(i, j, num);
			}
			printf("\n");
		}
	}
}

namespace Test1
{
	void Star(int i, int j, int num)
	{
		if ((i / num) % 3 == 1 && (j / num) % 3 == 1)
		{
			printf(" ");
		}
		else
		{
			if(num / 3 == 0) printf("*");
			else Star(i, j, num / 3);
		}
	}

	void Output()
	{
		int num;
		cin >> num;

		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j < num; j++)
			{
				Star(i, j, num);
			}
			printf("\n");
		}
	}
}


int main()
{
	Test1::Output();

	return 0;
}