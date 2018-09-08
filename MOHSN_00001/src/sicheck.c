#include <libcgc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	
	char *buf;
	char c;
	size_t rx;
	size_t total=0;
	
	if(!(buf = malloc(256))) return -1;
/*	
	if (argc < 2) {
		printf("Usage: binary password\n");
		return -1;
	}
*/
	printf("Please enter secret: ");
	while(1){
		if (receive(0, &c, 1, &rx)!=0 || rx == 0) return(0);
		if (c == '\n') break;
		buf[total++] = c;
	}

	if(buf[0]==83){
		if(buf[1]==69){
			if(buf[2]==67){
				if(buf[3]==82){
					if(buf[4]==69){
						if(buf[5]==84){
							printf("Good Job!\n");
						} else exit(0);
					} else exit(0);
				} else exit(0);                                                                             
		       	} else exit(0);
		} else exit(0);
	} else exit(0);

	return 0;

}
