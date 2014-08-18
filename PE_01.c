#import <stdio.h>

int main(){
	int sum = 0, i = 0;

	for(; i < 1000; i++){
		if(i % 3 == 0 || i % 5 == 0){
			sum += i;
		}
	}

	printf("%i\n", sum);
}