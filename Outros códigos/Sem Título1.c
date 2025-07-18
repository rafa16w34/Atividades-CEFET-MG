#include <stdio.h>

int main(){
	int i=0,n=0;
	
	while(i<=30){
		n+=i;
		i++;
	}
	
	printf("a media eh:%d",n/30);
	return 0;
}
