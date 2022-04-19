#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;

string Reverse(string a)
{
	char* r = new char[a.length()];
	sprintf(r, &a[0], a.length());

	string rev;
	for (int i = a.length() - 1; i >= 0; i--)
	{
		rev += r[i];
	}

	return rev;
}

string Push_Front(string a, string front)
{
	string r = front;
	r += a;

	return r;
}

string Plus(string A, string B)
{
	string _a = A;
	string _b = B;

	int size = _a.length() > _b.length() ? _a.length() : _b.length();

	int offset = abs((int)(_a.length() - _b.length()));

	if (_a.length() < _b.length())
	{
		for (int i = 0; i < offset; i++)
		{
			_a = Push_Front(_a, "0");
		}
	}
	else
	{
		for (int i = 0; i < offset; i++)
		{
			_b = Push_Front(_b, "0");
		}
	}

	string end;
	string r;

	int up = 0;

	char* _A = new char[size];
	char* _B = new char[size];
	sprintf(_A, &_a[0], size);
	sprintf(_B, &_b[0], size);

	for (int i = size - 1; i >= 0; i--)
	{
		char a = _A[i];
		if (a == '\0') a = '0';

		char b = _B[i];
		if (b == '\0') b = '0';

		int numA = a - '0';
		int numB = b - '0';

		int p = numA + numB + up;
		if (i != 0)
		{
			up = 0;
			while (p >= 10)
			{
				p -= 10;
				up++;
			}
			string s = to_string(p);
			r += s;
		}
		else
		{
			string s = to_string(p);
			end = s;
		}

	}

	r = Reverse(r);
	string result = end + r;

	return result;
}

int main()
{
	string A, B;
	
	cin >> A >> B;
	
	cout << Plus(A, B) << endl;

	return 0;
}