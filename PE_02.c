#import <stdio.h>

int main(){
	int sum = 0, last = 1, current = 1, tmp = 0;

	while(current < 4000000){
		tmp = current;
		current = tmp + last;
		last = tmp;

		if(current % 2 == 0){
			sum += current;
		}
	}

	printf("%i", sum);
}