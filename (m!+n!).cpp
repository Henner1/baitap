#include<stdio.h>
int main()
{
	int n;
	float p = 1;
	do
	{
		printf("\nNhập vào số n: ");
		scanf("%d", &n);
		if (n < 1)
		{
			printf("\nSố n phải lớn hơn hoặc bằng 1, vui lòng nhập lại !");
		}
	} while (n < 1);
	//tính biểu thức bằng vòng lặp for
	for (int i = 1; i <= n; i++) {
		p = p * i;
	}

	printf("\nTích 1 x 2 x ... x %d là: %.1f", n, p);

	printf("\n-----------------------------------------------------\n");
	printf("Chương trình này được đăng tại Freetuts.net");
}