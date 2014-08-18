#include <stdio.h>

int main(){
	int i = 11, n = 2, x = 0;

	while(!x){
		if(n%i == 0){
			i++;
		}
		else{
			n += 2;
			i = 11;
		}

		if(i > 20){
			x = 1;
		}
	} 

	printf("%d", n);
}