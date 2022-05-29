#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int Box_Width, Box_Height, Box_X, Box_Y;
	int PersonCount;
	cin >> Box_Width >> Box_Height >> Box_X >> Box_Y >> PersonCount;

	int result = 0;
	for (int i = 0; i < PersonCount; i++)
	{
		int X, Y;
		cin >> X >> Y;

		if ((X >= Box_X && X <= Box_X + Box_Width) && (Y >= Box_Y && Y <= Box_Y + Box_Height))
		{
			result++;
			continue;
		}

		int Circle_1_PosX = Box_X;
		float Circle_1_PosY = Box_Y + Box_Height / 2;
		float Radius = Box_Height / 2;

		float distX = Circle_1_PosX - X;
		float distY = Circle_1_PosY - Y;
		float dist = distX * distX + distY * distY;

		if (dist <= Radius * Radius)
		{
			result++;
			continue;
		}

		int Circle_2_PosX = Box_X + Box_Width;
		float Circle_2_PosY = Circle_1_PosY;
		distX = Circle_2_PosX - X;
		distY = Circle_2_PosY - Y;
		dist = distX * distX + distY * distY;

		if (dist <= Radius * Radius)
		{
			result++;
		}
	}
	cout << result << '\n';
	return 0;
}
