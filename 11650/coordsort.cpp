#include <iostream>
#include <list>

using namespace std;

class Point
{
public:
	Point() { X = 0; Y = 0; };
	Point(int x, int y)
	{
		X = x;
		Y = y;
	}
	int X;
	int Y;
};

bool Comp(Point* A, Point* B)
{
	if (A->X == B->X)
		return A->Y < B->Y;
	return A->X < B->X;
}

int main()
{
	int count;
	cin >> count;

	list<Point*> pointlist;
	for (int i = 0; i < count; i++)
	{
		int x, y;
		cin >> x >> y;
		Point* point = new Point(x, y);
		pointlist.push_back(point);
	}

	pointlist.sort(Comp);

	for (Point* p : pointlist)
	{
		printf("%d %d\n", p->X, p->Y);
	}
	return 0;
}