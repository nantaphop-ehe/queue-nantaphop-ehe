//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h

// struct node
// {
//     int data;
//     struct node *nextPtr;
// };

typedef struct node{
   struct node* nextPtr;
   int order_number;
   int qty;
}order;


typedef struct node Node;
typedef struct node* NodePtr;


// void enqueue(NodePtr * head, NodePtr* tail, int order_number , int qty){
//   NodePtr new_node=(NodePtr) malloc(sizeof(Node));
// if(new_node){ 
//     /* Finish queue*/
//     new_node->order_number = order_number;
//     new_node->qty = qty;
//     new_node->nextPtr = NULL;
//     if(*head == NULL)
//       *head = new_node;
//     else
//       (*tail)->nextPtr = new_node;
//     *tail = new_node;
//  }
// }


// int dequeue(NodePtr* head, NodePtr* tail){
//   NodePtr t=*head;
//     if(t){
//       int value= t->data;
//       /* Finish dequeue*/ 
//       *head=t->nextPtr;
//       free(t);
//       if(t==NULL)
//         tail=NULL;
//       printf ("deq %d\n",value);
//       //return value;
//     }
//     printf("Empty queue");
//     return 0;
// }



#endif
