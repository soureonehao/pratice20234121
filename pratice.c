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
	printf("����һ��ֵ��");
	while (scanf_s("%d", &n))//��%d��������ʱ��Ҫʹscanf����2����Ȼ�����ѭ��
	{

		if (PRI(n))
			printf("%dΪ������", n);
		else
			printf("%d��Ϊ����.", n);
		printf("\n����һ��ֵ��");

	}
	
	
	
}