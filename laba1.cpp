#include <stdio.h>
#include <cmath>

long func(long* arr, int length);
float func(float* arr, int length);

int main()
{
	long arr[10]{ 1, 4 , 3, 5 ,22, 1 , 3 ,2 ,4 ,5, };
	long min = func(arr, 10);
	printf("Minimal int pair number is %ld", min);
	printf("\n");
	float ara[10]{ 1.1, 3.2 , 55.4 , 4.4, 22.2 , 9.2 , 4.5 , 7.9, 21.2, 5.4 };
	float min1 = func(ara, 10);
	printf("Minimal float pair number is %lf", min1);
	return 0;
}

long func(long* arr, int length)
{
	long min = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			min = arr[i];
			break;
		}
	}

	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			if (arr[i] < min) {
				min = arr[i];
			}
		}
	}
	return min;
}
float func(float* arr, int length)
{
	float min = 0;
	for (int i = 0; i < 10; i++) {
		if ((int)arr[i] % 2 == 0) {
			min = (int)arr[i];
			break;
		}
	}

	for (int i = 0; i < 10; i++) {
		if ((int)arr[i] % 2 == 0) {
			if (arr[i] < min) {
				min = (int)arr[i];
			}
		}
	}
	return min;
}
