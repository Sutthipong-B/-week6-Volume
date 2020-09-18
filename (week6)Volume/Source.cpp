#include<stdio.h>
int main()
{
	double num[3];
	printf("Width : ");
	scanf_s("%lf", &num[0]);
	printf("Length : ");
	scanf_s("%lf", &num[1]);
	printf("Height : ");
	scanf_s("%lf", &num[2]);
	if (num[0] != 0 && num[1] != 0 && num[2] != 0)
	{
		for (int i = 0; i < 3; i++)
		{
			if (i == 0)
			{
				printf("Volume = %lf",num[i]);
			}
			else
			{
				printf(" x %lf", num[i]);
			}
		}
		printf(" = %lf", num[0] * num[1] * num[2]);
	}
	else
	{
		printf("- This case has NO VOLUME -");
	}
}