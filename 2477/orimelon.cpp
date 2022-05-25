#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int k;
	cin >> k;
	int lines[6];

	int Max_X = 0;
	int Max_X_Value = 0;
	int Max_Y = 0;
	int Max_Y_Value = 0;

	for (int i = 0; i < 6; i++)
	{
		int way, length;
		cin >> way >> length;
		lines[i] = length;
		if (way <= 2)
		{
			if (length > Max_X_Value)
			{
				Max_X_Value = length;
				Max_X = i;
			}
		}
		else
		{
			if (length > Max_Y_Value)
			{
				Max_Y_Value = length;
				Max_Y = i;
			}
		}
	}

	int MaxSize = Max_X_Value * Max_Y_Value;

	int pos = Max_X;
	if (Max_X + 1 == Max_Y || (Max_X == 5 && Max_Y == 0))
		pos = Max_Y;
	
	int outBoxSize = lines[(pos + 2) % 6] * lines[(pos + 3) % 6];

	cout << (MaxSize - outBoxSize) * k;

	return 0;
}