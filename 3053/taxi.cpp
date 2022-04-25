#include <iostream>
#include <cmath>

#define PI 3.141592653589793238462643383279502884197169399375105820974944

using namespace std;

double GetEuclid(int r)
{
	double circle = PI * (r * r);

	return circle;
}

double GetTaxi(int r)
{
	double circle = 2 * (r * r);
	return circle;
}

int main()
{
	int n;
	cin >> n;

	printf("%f\n", GetEuclid(n));
	printf("%f", GetTaxi(n));
	return 0;
}