#include <sys/msg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct mymsgbug {
    long mtype;
    char mtext[80];   
};

int main(){
    key_t key;
    int msgid;
    struct mymsgbug mesg;

    key = ftok("keyfile",1);
    msgid = msgget(key, IPC_CREAT|0644);
    if (msgid == -1){
        perror("msgget");
        exit(1);
    }
    mesg.mtype = 1;
    strcpy(mesg.mtext,"Message Q Test");

    if (msgsnd(msgid,(void *)&mesg,80,IPC_NOWAIT)== -1){
        perror("msgsnd");
        exit(1);
    }

}