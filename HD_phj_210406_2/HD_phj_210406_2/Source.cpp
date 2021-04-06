#include <stdio.h>

void main()
{
	float PI = 3.141592, area = 0, circ = 0, d = 10;

	float r = d / 2;

	printf("원의 넓이=%f,원의 둘레=%f", PI * d, PI * 2* r);
	fgetc(stdin);
}