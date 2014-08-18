#include <stdio.h>
#include <math.h>

int main(){
	int max = 0, i = 3;
	long long n = 600851475143; //I didn't even know this was a thing

	while(1){
		//when there isn't any remainder
		while(!(n % i)){
			n /= i;
			max = i;
		}

		//if we've reached the end
		if(n == 1){
			break;
		}

		//skip, for efficiency's sake
		i += 2;
	}

	printf("Max Prime Factor: %d", max);

	return 0;
}