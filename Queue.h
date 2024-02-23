

// typedef struct {
// 	NodePtr headPtr,tailPtr;
// 	int size;
// }Queue;

typedef struct{
   order *headPtr,*tailPtr;
   int size;
}Queue;
;




void enqueue_struct(Queue* q,  int order_number , int qty){
  Node *new_node=(Node*) malloc(sizeof(Node));
  if(new_node){ 
    new_node->order_number = order_number;
    new_node->qty = qty;
    new_node->nextPtr = NULL;
    if (q->headPtr == NULL){
      q->headPtr= new_node;
      //printf("set new head is %d\n",q->headPtr->order_number);
    } 
    else
      q->tailPtr->nextPtr = new_node;
    q->tailPtr = new_node;
    /*Finish enqueue */
    q->size++;
    //printf("enq head %d \n",q->headPtr->order_number);
    //printf("enq tail %d \n\n",q->tailPtr->order_number);
  }
}


int dequeue_struct(Queue *q){
    NodePtr t=q->headPtr;
    int tmp = 0;
    //printf("heee\n");
    //printf("head %d\n",q->headPtr->order_number);
    if(t){
      int order_n= t->order_number;
      int qty = t->qty;
      /*Finish dequeue */
      switch (order_n){
          case 1 : tmp  += 100*qty; break; 
          case 2 : tmp  += 20*qty; break; 
          case 3 : tmp  += 50*qty; break; 
          default : tmp =- 1;break;
      }
      //printf("de order %d qty %d\n",order_n,qty);
      q->headPtr = t->nextPtr;
      q->size--;
      if (q->headPtr==NULL) {
        q->tailPtr = NULL;
      }
      free(t);
      return tmp;
    }
    
    printf("Empty queue\n");
    return 0;
}

