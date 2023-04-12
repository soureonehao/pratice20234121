#include<stdio.h>
int PRI(int n) {
	int M = 1, i;
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			M = 0;
			break;
			}
	}
	return M;
}
void main() {
	int n;
	printf("输入一个值：");
	while (scanf_s("%d", &n))//当%d有两个的时候，要使scanf等于2，不然会继续循环
	{

		if (PRI(n))
			printf("%d为素数。", n);
		else
			printf("%d不为素数.", n);
		printf("\n输入一个值：");

	}
	
	
	
}