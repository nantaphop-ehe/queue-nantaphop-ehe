//for extra 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"
#include "Queue.h"

int main(int argc , char **argv) {
  //NodePtr headPtr=NULL;
  //NodePtr tailPtr=NULL;
  //For struct Queue
  Queue  q;
  q.headPtr=NULL;
  q.tailPtr=NULL;
  q.size=0;

  int i,x,j;
   

 for(i=1;i<argc;i++){
  //printf("string %s\n\n",argv[i]);
    if(strcmp(argv[i],"x")==0){
      x=dequeue_struct(&q);
      if(x==-1){
        printf("No Food\n");
        break;
      }
      if(x>0)
        printf("you have to pay %d\n",x);
    }
    else {
      enqueue_struct(&q, atoi(argv[i]) ,atoi(argv[i+1]));
      //printf("put %d %d\n", atoi(argv[i]) ,atoi(argv[i+1]));
      i+=1;
    }
 } 
  return 0;
}
