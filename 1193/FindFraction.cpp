#include <iostream>

using namespace std;

int boonmo = 0;
int boonja = 0;

void FindFrac(int num)
{
	int count = 1;

	int col = 1;
	
	int firstnum = 1;

	while (count < num)
	{
		col++;
		count += col;
		
		firstnum += (col - 1);
	}

	boonmo = (firstnum - num) + col;
	boonja = (num - firstnum) + 1;

	if (col % 2 != 0)
	{
		int c = boonmo;
		boonmo = boonja;
		boonja = c;
	}
}

int main()
{
	int n;
	cin >> n;

	FindFrac(n);
	cout << boonja << "/" << boonmo << endl;

	return 0;
}
