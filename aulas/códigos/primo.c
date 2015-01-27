#include<stdio.h>
#include<math.h>

int main()
{
	int n;

	printf("Entre um número inteiro: ");
	scanf("%d",&n);

	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n%i==0)
		{
			printf("Não é primo\n");
			return 0;
		}
	}

	printf("É primo\n");
	return 0;
}