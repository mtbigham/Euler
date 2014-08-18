#import <stdio.h>
#import <math.h>

int main(){
	int sum1 = 0, sum2 = 0, i;

	for(i = 1; i < 101; i++){
		sum1 += i;
		sum2 += pow(i, 2);
	}

	sum1 = pow(sum1, 2);

	printf("%d", sum1-sum2);
}