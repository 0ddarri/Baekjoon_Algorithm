#include <stdio.h>

int main(void)
{
	int count; // for을 돌릴 개수
	scanf("%d", &count); // scanf를 통해 입력받은 숫자를 count에 넣는다

	for (int i = 1; i <= count; i++) // count만큼 for문을 돌린다
	{
		printf("%d\n", i); // for문의 i 값을 printf를 통해 출력
	}
	return 0;
}
