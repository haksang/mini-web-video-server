#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>

int main(int argc, char *argv[])
{
    struct hostent *host_entry;
    int             ndx;

    host_entry = gethostbyname(argv[1]);

    if ( !host_entry)
    {
        printf( "gethostbyname() 실행 실패/n");
        exit( 1);
    }
    for ( ndx = 0; NULL != host_entry->h_addr_list[ndx]; ndx++)
        printf( "%s\n", inet_ntoa( *(struct in_addr*)host_entry->h_addr_list[ndx]));

    return 0;
}
