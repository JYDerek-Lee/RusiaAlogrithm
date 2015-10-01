#include <stdio.h>
#define INPUT1 19
#define INPUT2 22
//새로운 실험
int RusiaAlgorithm(int input1, int input2) {
	int sum=0;
	while (input1 > 0) {
		sum += (input1 % 2 ? input2 : 0);
		input1 /= 2;
		input2 *= 2;
	}
	return sum;
}

void main() {
	printf("%d\n", ((INPUT1 == 0 || INPUT2 == 0) ? exit(1) : RusiaAlgorithm(INPUT1, INPUT2)));
}