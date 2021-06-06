#include <stdio.h>

int main(void)
{
	int kor, eng, mat;
	scanf("%d %d %d", &kor, &eng, &mat);
	
	int sum;
	double avg;
	sum = kor + eng + mat;
	//avg = sum / 3.0;
	avg = static_cast<double>(sum) / 3;
	
	printf("sum: %d\navg: %.2f\n", sum, avg);
	return 0;
}
