#include <iostream>
#include <cmath>
//#include <ctime>

using namespace std;

int prime[2] = {0, 0};

bool CheckPrime(int n)
{
	int num = n;
	if (num == 0 || num == 1) return 0;
	for (int i = 2; i <= sqrt(num); i++)
		if (num % i == 0) return 0;
	return true;
}

void Find(int num)
{
	int n = num;

	int middle = n / 2;

	for (int i = middle; i >= 2; i--) // 2가 최소 소수이니까 2까지만
	{
		int min = i;
		int max = n - i;

		if (CheckPrime(min) && CheckPrime(max))
		{
			prime[0] = min;
			prime[1] = max;
			return;
		}
	}
}


int main()
{
	//time_t start, end;

	int cnt = 0;
	cin >> cnt;
	
	int* inputs = new int[cnt];

	for (int i = 0; i < cnt; i++)
	{
		cin >> inputs[i];
	}

	//start = time(NULL);

	for (int i = 0; i < cnt; i++)
	{
		Find(inputs[i]);
		printf("%d %d\n", prime[0], prime[1]);
	}

	//end = time(NULL);
	//double result = (double)(end - start);
	//printf("%f", result);

	return 0;
}