#include <stdio.h>

int main(void)
{
	int count; // for�� ���� ����
	scanf("%d", &count); // scanf�� ���� �Է¹��� ���ڸ� count�� �ִ´�

	for (int i = 1; i <= count; i++) // count��ŭ for���� ������
	{
		printf("%d\n", i); // for���� i ���� printf�� ���� ���
	}
	return 0;
}
