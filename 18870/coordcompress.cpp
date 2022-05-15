#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> origin; // 원래 벡터
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		origin.push_back(t);
	}
	vector<int> copy(origin); // 복사한 벡터
	sort(copy.begin(), copy.end()); // 복사벡터 정렬
	copy.erase(unique(copy.begin(), copy.end()), copy.end()); // 중복되는 값을 뒤로 빼고, 없앰
	for (int i = 0; i < n; i++)
	{
		// 찾으려는 key값보다 같거나 큰 숫자가 배열에서 볓번째에 등장하는지 찾는다
		// 탐색할 벡터는 정렬되어있어야 함
		auto it = lower_bound(copy.begin(), copy.end(), origin[i]);
		cout << it - copy.begin() << ' ';
	}

	return 0;
}