#include <iostream>
#include <vector>

using namespace std;

long long sum(std::vector<int>& a)
{
	long long result = 0;
	for (auto n : a)
	{
		result += n;
	}
	return result;
}