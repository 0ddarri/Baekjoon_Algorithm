#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> origin; // ���� ����
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		origin.push_back(t);
	}
	vector<int> copy(origin); // ������ ����
	sort(copy.begin(), copy.end()); // ���纤�� ����
	copy.erase(unique(copy.begin(), copy.end()), copy.end()); // �ߺ��Ǵ� ���� �ڷ� ����, ����
	for (int i = 0; i < n; i++)
	{
		// ã������ key������ ���ų� ū ���ڰ� �迭���� �ܹ�°�� �����ϴ��� ã�´�
		// Ž���� ���ʹ� ���ĵǾ��־�� ��
		auto it = lower_bound(copy.begin(), copy.end(), origin[i]);
		cout << it - copy.begin() << ' ';
	}

	return 0;
}