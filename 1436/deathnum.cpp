#include <iostream>
#include <string>

#define MAXINT 2147483647

using namespace std;

int FindMovieName(int num)
{
	int count = 0;
	for (int i = 1; i < MAXINT; i++)
	{
		int sixCount = 0;
		string temp = to_string(i);
		int tmp = i;
		int number = 0;
		while (tmp != 0)
		{
			tmp /= 10;
			number++;
		}
		for (int j = 0; j < number; j++)
		{
			char t = temp[j];
			if (t == '6')
				sixCount++;
			else
			{
				if (sixCount < 3)
					sixCount = 0;
			}
		}
		if (sixCount >= 3)
		{
			count++;
			if (count == num)
				return i;
		}
	}
}

int main()
{
	int num;
	cin >> num;

	cout << FindMovieName(num) << endl;

	return 0;
}