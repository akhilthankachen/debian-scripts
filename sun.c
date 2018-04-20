#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	if(argc != 2) {
		printf("Usage: %s [parameter]\n",argv[0]);
		printf("[parameter] night - warmer color\n[parameter] day - bluer\n");
		return 1;
	}else{
		if(!strcmp(argv[1],"night")){
			system("redshift -O 4000");	
		}else if(!strcmp(argv[1],"day")){
			system("redshift -x");
		}
	}
	return 0;
}
