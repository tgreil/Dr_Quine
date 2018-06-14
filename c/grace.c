#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/*
	My comment
*/
#define FILE_KID "Grace_kid.c"
#define MY_STRING "#include <stdio.h>%c#include <fcntl.h>%c#include <sys/types.h>%c#include <sys/stat.h>%c/*%c%cMy comment%c*/%c#define FILE_KID %c%s%c%c#define MY_STRING %c%s%c%c#define FT()int main(){int fd=open(FILE_KID,O_RDWR|O_CREAT|O_TRUNC);chmod(FILE_KID, S_IRWXU);dprintf(fd,MY_STRING,10,10,10,10,10,9,10,10,34,FILE_KID,34,10,34,MY_STRING,34,10,10,10);}%cFT()%c"
#define FT()int main(){int fd=open(FILE_KID,O_RDWR|O_CREAT|O_TRUNC);chmod(FILE_KID, S_IRWXU);dprintf(fd,MY_STRING,10,10,10,10,10,9,10,10,34,FILE_KID,34,10,34,MY_STRING,34,10,10,10);}
FT()
