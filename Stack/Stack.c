#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int push();
int pop();
int traverse();
int overflow();
int top = -1;
int stack[MAX];
int main()
{
int choice;
    while (1)
    {
        printf("\nenter the 1 for  push(insert) data : ");
        printf("\nenter the 2 for pop(delete) data : ");
        printf("\nenter the 3 for traverse(dishplay) data : ");
        printf("\nEnter  4 to exit: ");
        printf("\n enter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if ( push() == 0)
            {
                printf("Stack overflow but can't data inserted more\n");
            }
            else
            {
                printf("Element pushed (inserted) data : %d\n" , stack[top]);
            }
            break;
        case 2: 
            if (pop() == 0)
            {
                printf("\n stack is underflow but can't data deleted\n");
            }
            else
            {
                printf("\n data poped (deleted) successfully\n");
            }
        
            break;
        case 3:
           
            if ( traverse() ==0){
                printf("\n  stack is underflow(empty)");
            
            }
            else{
                printf("\n data dishplay successfully");
            }
            break;
        case 4:
            exit(1);
        default:
            printf("Invalid choice\n");
        }
    }
}
    
        int overflow()
        {
            if (top >= MAX - 1)
                return 0;
            else 
                return 1;
        }
            
            int push(){
                int no;
                if(overflow() == 0)
                return 0 ;
                printf("\n enter a  number :");
                scanf("%d", &no);
                top++;
                stack[top] = no;
                return 1;
            }
    int underflow(){
        if(top == -1){
            return 0;
        }
        else{
            return 1;
        }
    }
        int traverse(){
            if(underflow () == 0 )
            return 0 ;
            
             else 
             printf("\n dishplay  data");
             for (int i=0 ;i<=top; i++){
                 printf("\n %d",stack[i]);
             }
              return 1;
        }
        int pop(){
             
            if(underflow() == 0)
                return 0;
            else
             top--;
                return 1;
           
        }
