#include "pipe_networking.h"

int client_handshake(int *fd){
  open(WKP);
  char buff[12]="yestouching";
  mkfifo(buff,0644);//change name maybe
  write(WKP, buff, sizeof(buff));
}

int server_handshake(int *fd){
  mkfifo(WKP,0644);

  open(WKP);
  
  char buff[12];
  read(WKP,buff,sizeof(buff));

  buff[11]=0;
  write(buff,
  
}
