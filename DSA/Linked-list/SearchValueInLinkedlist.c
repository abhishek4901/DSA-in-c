#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
} list;

list *newnode = NULL, *head = NULL, *temp = NULL, *tail = NULL;
int n, value;
void insertlinkedlist()
{
    printf("enter the number of node ");
    scanf("%d", &n);
    temp = head;

    for (int i = 1; i <= n; i++)
    {
        printf("\n enter the  value of node %d:  ", i);
        scanf("%d", &value);

        newnode = (list *)malloc(sizeof(list));
        
        if(newnode == NULL){
            printf("Memory allocation failed");
        }
        newnode->data = value;
        newnode->next = NULL;
            if (head == NULL)
            {
                head = newnode;
                tail = newnode;
            }
            else
            {
                tail->next = newnode;
                tail = newnode;
            }
        }
    }

 void dishplay(){
     printf("linkedlist");
     temp = head;
     while(temp !=NULL){
        printf("  %d  " , temp->data);
        temp = temp->next;
     }

 }
 void searching(){
    int searchvalue, position =1,found =0;
    printf("\n enter the value you want to search ");
    scanf("%d", &searchvalue);
    temp = head;
    for(int i =1 ; i<=n; i++){
        if(temp->data == searchvalue){
printf("The position :%d of node :%d " , position, searchvalue);
       found = 1;
       break;
}  
temp = temp->next; 
position++;
}
if(found ==0)
            printf("\n the search vale is not find ");
 }

int main()
{
    insertlinkedlist();
    dishplay();
    searching();

    return 0;
}