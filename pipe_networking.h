#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define MESSAGE_BUFFER_SIZE 64
#define WKP "notouching"

int client_handshake(int *fd);
int server_handshake(int *fd);
