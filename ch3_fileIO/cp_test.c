#include "apue.h"
#include "apue_error.h"

#define BUFSIZE 4096

int main(int argc, char const *argv[])
{
        char buf[BUFSIZE];
        int num_read;
        while((num_read=read(STDIN_FILENO,buf,BUFSIZE))>0){
                if(write(STDOUT_FILENO,buf,num_read)!=num_read){
                        err_sys("write error");
                }
        }
        if(num_read<0){
                err_sys("read error");
        }
        return 0;
}
