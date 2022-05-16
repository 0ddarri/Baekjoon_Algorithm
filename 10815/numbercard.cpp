#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	// https://velog.io/@matcha_/%EB%B0%B1%EC%A4%80-C-cin-cout-%EC%9E%85%EC%B6%9C%EB%A0%A5-%EC%86%8D%EB%8F%84-%EB%B9%A0%EB%A5%B4%EA%B2%8C-%ED%95%98%EB%8A%94-%EB%B2%95
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num1;
	cin >> num1;
	vector<int> nums1;
	for (int i = 0; i < num1; i++)
	{
		int temp;
		cin >> temp;
		nums1.push_back(temp);
	}
	sort(nums1.begin(), nums1.end());
	int num2;
	cin >> num2;
	vector<int> nums2;
	vector<int> result;
	for (int i = 0; i < num2; i++)
	{
		int temp;
		cin >> temp;
		nums2.push_back(temp);
		result.push_back(0);
	}

	for (int i = 0; i < num2; i++)
	{
		int start = 0;
		int end = nums1.size() - 1;

		while (end >= start)
		{
			int middle = (end + start) / 2;

			if (nums1[middle] == nums2[i])
			{
				result[i] = 1;
				break;
			}
			else if (nums1[middle] > nums2[i])
			{
				end = middle - 1;
			}
			else
			{
				start = middle + 1;
			}
		}
	}

	for (int i = 0; i < num2; i++)
	{
		printf("%d ", result[i]);
	}
	// ÀÌÁøÅ½»ö

	return 0;
}