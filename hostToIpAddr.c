#include "hostToIpAddr.h"

int
main(int argc, char *argv[])
{
     struct hostent *info;
     struct in_addr *address;

     if (argc < 2) {
          fprintf(stderr, "usage: %s <host name>\n", argv[0]);
          exit(-1);
     }

     info = gethostbyname(argv[1]);
     if (info == NULL) {
          fprintf(stderr, "cannot find hostname %s", argv[1]);
     }else{
          address = (struct in_addr *)(info->h_addr);
          printf("%s: %s\n", argv[1], inet_ntoa(*address));
     }
     
     return 0;
}



