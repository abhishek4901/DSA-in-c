#include<stdio.h>
#include<stdlib.h>
 struct Node {
    int data;
    struct Node* next;
};
    void LinkedlistTraverse(struct Node * head){
        struct Node * current = head;
        while (current != NULL) {
            printf("%d ", current->data);
            current = current->next;
        }
    
    }

  int main (){
     struct Node* head;
     struct Node* first;
     struct Node* second;
     struct Node* third;
     head = (struct Node* )malloc(sizeof(struct Node));
     first = (struct Node*) malloc (sizeof(struct Node));
     second = (struct Node*)malloc (sizeof(struct Node)); 
     third= (struct Node*)malloc(sizeof(struct Node));
     head -> data =20;
     head->next= first;
     first -> data =40;
     first ->next =second;
     second->data = 120;
     second -> next =third;
     third ->data = 160;
     third -> next =NULL;
     LinkedlistTraverse(head);
     return 0;
  }