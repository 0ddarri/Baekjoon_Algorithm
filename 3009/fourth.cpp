#include <iostream>
#include <cmath>

using namespace std;

int first[2]{ 0,0 };
int second[2]{ 0,0 };
int third[2]{ 0,0 };
int fourth[2]{ 0,0 };

void FindFourth()
{
	if (first[0] == second[0])
		fourth[0] = third[0];
	else if (first[0] == third[0])
		fourth[0] = second[0];
	else fourth[0] = first[0];

	if (first[1] == second[1])
		fourth[1] = third[1];
	else if (first[1] == third[1])
		fourth[1] = second[1];
	else fourth[1] = first[1];
}

int main(void)
{
	cin >> first[0] >> first[1] >> second[0] >> second[1] >> third[0] >> third[1];

	FindFourth();
	printf("%d %d", fourth[0], fourth[1]);

	return 0;
}