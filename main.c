#include <stdio.h>
#include <stdlib.h>

int CheckInput(int time, int sum)
{
	if ((time >= 0) && (time <=365) && (sum >= 10000))
		return 1;
	return 0;
}

int main()
{
	int time, sum, percent;
	printf("������� ���� �����:");
	scanf("%d", &time);
	printf("������� ����� ������:");
	scanf("%d", &sum);

	return 0;
}
