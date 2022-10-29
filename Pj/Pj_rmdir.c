#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <utime.h>

int main(int argc, char *argv[]) {

    if (rmdir(argv[1]) < 0) {
        fprintf(stderr, "rmdir error\n");
    }
    exit(0);
}
