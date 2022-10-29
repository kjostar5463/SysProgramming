#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <utime.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char adm[1] = "0";
	if(strcmp(argv[1], "-m")==0){
		strcat(adm, argv[2]);
		int num_arg[4] = {0,};
		for(int i=0; i<4; i++)
			num_arg[i] = adm[i]-'0';

		int mode;
		mode = num_arg[3];
		mode = mode | (num_arg[2]<<3);
		mode = mode | (num_arg[1]<<6);
		mode = mode | (num_arg[0]<<9);
		mkdir(argv[3], mode);
	}
	else{
		if(argc == 2)
			mkdir(argv[1], 0755);
		else if(argc> 2 ){
			for(int i = 1; i<argc; i++)
				mkdir(argv[i], 0755);
		}	
	}
    exit(0);
}
