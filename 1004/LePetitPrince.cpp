#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int testCase;
	cin >> testCase;
	int* result = new int[testCase];
	fill_n(result, testCase, 0);

	for(int i = 0; i < testCase; i++)
	{

		int StartPosX, StartPosY;
		int EndPosX, EndPosY;
		cin >> StartPosX >> StartPosY >> EndPosX >> EndPosY;
		int worldCount;
		cin >> worldCount;
		for (int j = 0; j < worldCount; j++)
		{
			int WorldPosX, WorldPosY, radius;
			cin >> WorldPosX >> WorldPosY >> radius;

			int distX = abs(WorldPosX - StartPosX);
			int distY = abs(WorldPosY - StartPosY);
			distX *= distX;
			distY *= distY;;
			int dist = distX + distY;

			int EnddistX = abs(WorldPosX - EndPosX);
			int EnddistY = abs(WorldPosY - EndPosY);
			EnddistX *= EnddistX;
			EnddistY *= EnddistY;
			int Enddist = EnddistX + EnddistY;

			if (dist <= radius * radius && Enddist <= radius * radius)
				continue;

			if (dist <= radius * radius)
				result[i]++;

			if (Enddist <= radius * radius)
				result[i]++;
		}
	}

	for (int i = 0; i < testCase; i++)
	{
		cout << result[i] << '\n';
	}

	return 0;
}