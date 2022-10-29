#include<stdio.h>
#include<unistd.h>

int main(void){
    char buf[BUFSIZ];
    int bufsize = BUFSIZ;

    getcwd(buf,bufsize);

    printf("%s\n",buf);

    return 0;
}
