#include <stdio.h>
#include <fcntl.h>


#include "apue.h"
int
main() {
	printf("hello...\n");
    
    int fd;
    if ((fd = open("/sdcard/deviceid.txt", O_RDONLY)) < 0) err_sys("open err");
    
    char buf[4096];
    
    if (read(fd, buf, 4096) < 0) err_sys("read err");
    
    printf("%s\n", buf);
    
    
}
