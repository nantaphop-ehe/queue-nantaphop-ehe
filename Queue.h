

typedef struct {
	NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
  Node *new_node=(Node*) malloc(sizeof(Node));
  if(new_node){ 
    new_node->data = x;
    new_node->nextPtr = NULL;
    if (q->headPtr == NULL){
      q->headPtr= new_node;
      //printf("set new head is\n",q->headPtr->data);
    } 
    else
      q->tailPtr->nextPtr = new_node;
    q->tailPtr = new_node;
    /*Finish enqueue */
    q->size++;
    //printf("enq head %d \n",q->headPtr->data);
    //printf("enq tail %d \n",q->tailPtr->data);
  }
}


int dequeue_struct(Queue *q){
    NodePtr t=q->headPtr;
    //printf("\n\nhead is %d\n",t->data) ; 
    if(t){
      int value= t->data;
      /*Finish dequeue */
      q->headPtr = t->nextPtr;
      q->size--;
      //printf("\n\nhead is %d\n",q->headPtr->data) ; 
      if (q->headPtr==NULL) {
        q->tailPtr = NULL;
        //printf("NULL\n");
      }
      
      //printf ("deq %d\n",value);
      //printf("next q %d\n",q->headPtr->data);
      free(t);
      return value;
    }
    printf("Empty queue\n");
    return -1;
}

