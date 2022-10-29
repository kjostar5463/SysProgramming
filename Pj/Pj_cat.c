#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	int c;
	if (argc < 2) 
		fp = stdin;
	else
		fp = fopen(argv[1],"r");
	c = getc(fp);
	while (c != EOF) { 
		putc(c, stdout); 
		c = getc(fp);
	if(argc > 0)
	}
	fclose(fp); 
	return 0;
}

