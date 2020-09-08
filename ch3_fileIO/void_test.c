#include "apue.h"
#include "apue_error.h"
#include <fcntl.h>

char buf1[]="abcdefghij";
char buf2[]="ABCDEFGHIJ";


int main(int argc, char const *argv[])
{
        int fd;
        if( (fd=open("file.hole",O_WRONLY|O_CREAT|O_TRUNC,FILE_MODE))<0){
                err_sys("creat error");
        }
        if((write(fd,buf1,10))!=10){
                err_sys("buf1 write error");
        }
        if((lseek(fd,100,SEEK_SET))==-1){
                err_sys("lseek error");
        }
        if((write(fd,buf2,10))!=10){
                err_sys("buf2 write error");
        }
        return 0;
}

