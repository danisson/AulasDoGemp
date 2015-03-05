#include <stdio.h>

double absoluto(double n) {
	return n>0?n:-n;
}

int main() {
	double n,r;
	scanf("%lf",&n);

	r=1;
	while (absoluto((r*r)-n) > 0.00001) {
		r = (r + n/r)/2;
	}

	printf("A raiz de %lf é aproximadamente %lf\n", n,r);
	return 0;
}