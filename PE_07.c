#import <stdio.h>
#import <math.h>
#import <stdbool.h>

bool prime(int n);

int main(){
	int counter = 1, n = 1;

	while(counter < 10001){
		n += 2;
		if(prime(n)){
			counter++;
		}
	}

	printf("%d", n);
}

bool prime(int n){
	if(n <= 1){
		return false;
	}

	if(n == 2){
		return true;
	}

	if(n % 2 == 0){
		return false;
	}

	int i = 3;
	// only need to check up to sqrt(n)
	while((i*i) <= n){
		if(n % i == 0){
			return false;
		}
		else{
			i += 2;
		}
	}

	return true;
}