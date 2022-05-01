#include <iostream>

using namespace std;

int n;

void PrintUnderline(int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("_");
	}
}

void Text(int count)
{
	int num = n - count;
	if (num == n)
	{
		PrintUnderline(num * 4);
		printf("\"����Լ��� ������?\"\n");
		PrintUnderline(num * 4);
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		PrintUnderline(num * 4);
		printf("��� �亯�Ͽ���.\n");
		return;
	}
	PrintUnderline(num * 4);
	printf("\"����Լ��� ������?\"\n");
	PrintUnderline(num * 4);
	printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
	PrintUnderline(num * 4);
	printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
	PrintUnderline(num * 4);
	printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
	Text(count - 1);
	PrintUnderline(num * 4);
	printf("��� �亯�Ͽ���.\n");
}

int main()
{
	cin >> n;
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	Text(n);
	return 0;
}