#include <iostream>
#include <list>

using namespace std;

bool Compare(int A, int B)
{
	return A < B;
}

int main()
{
	list<int> nums;

	int count = 0;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		int num;
		cin >> num;
		nums.push_back(num);
	}
	nums.sort(Compare);

	for (int i : nums)
	{
		printf("%d\n", i);
	}
	return 0;
}