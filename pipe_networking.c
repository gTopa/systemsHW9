#include "pipe_networking.h"

//returns from_server fd
int client_handshake(int *to_server){
  //2. create private pipe
  int x=getpid();
  char *buff;
  sprintf(buff, "%d", x);
  mkfifo(buff,0644);
  int from_server = open(buff, O_RDONLY);
  
  //3. write name of private pipe to server
  *to_server = open(WKP, O_WRONLY);
  write(*to_server, buff, sizeof(buff));

  //4. wait for confirm from server
  char* output;
  if (strcmp(read(fd_priv, output, strlen(SERVER_CONFIRM)))) printf(ouptut);
  else printf("Recieved from server: %s\nConfirmation failed.", output);

  //8. Write

  return from_server;
}

//returns to_client
int server_handshake(int *from_client){
  //1. server creates well known pipe and opens to read
  mkfifo(WKP,0644);
  from_client = open(WKP, O_RDONLY);

  //5. Open private pipe from client.
  char* buff;
  read(from_client,buff,sizeof(buff));

  //6. Remove the WKP
  close(from_client);

  //7. Write confirm through the private pipe
  int to_client = open(buff, O_WRONLY);
  char* confirm = SERVER_CONFIRM;
  write(to_client, confirm, strlen(confirm);
  
}
