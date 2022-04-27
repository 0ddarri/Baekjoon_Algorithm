#include <iostream>
using namespace std;

int Factorial(int n)
{
	if (n <= 1) return 1;

	return n * Factorial(n - 1);
	// if n : 5, return 5 * 4 * 3 * 2 * 1
}

int main()
{
	int num;
	cin >> num;

	cout << Factorial(num) << endl;
	return 0;
}