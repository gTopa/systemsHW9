#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

#define MESSAGE_BUFFER_SIZE 1024
#define WKP "notouching"
#define SERVER_CONFIRM "You have connected to the server."
#define CLIENT_CONFIRM "You have connected to client %d"

int client_handshake(int *fd);
int server_handshake(int *fd);
