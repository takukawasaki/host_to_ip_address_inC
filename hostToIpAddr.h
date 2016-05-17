#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>


void usage(char *prog, char *filename);
void fatal(char *message);
void *ec_malloc(unsigned int size);
void dump(const unsigned char *data_buffer, const unsigned int length);

