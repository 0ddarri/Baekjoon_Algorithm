#include <iostream>
#include <vector>

using namespace std;

class Info
{
public:
	Info(int l, int w)
	{
		length = l;
		weight = w;
	}

	int length;
	int weight;
};

int main()
{
	int count;
	cin >> count;

	vector<Info*> infolist;

	for (int i = 0; i < count; i++)
	{
		int length, weight;
		cin >> length >> weight;
		Info* info = new Info(length, weight);
		infolist.push_back(info);
	}
	int rank = 1;
	for (int i = 0; i < infolist.size(); i++) // 하나하나의 요소를 다 비교해 등수를 확인
	{
		for (int j = 0; j < infolist.size(); j++)
		{
			if (infolist[i]->length < infolist[j]->length && infolist[i]->weight < infolist[j]->weight) // 둘다 클 때만 랭크 증가(더 큰놈이 있는거니까)
			{
				rank++;
			}
		}
		cout << rank << endl;
		rank = 1;
	}


	return 0;
}