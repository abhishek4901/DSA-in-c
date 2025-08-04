#include <stdio.h>
#define SIZE 10  

int hashFunction(int key) {
    int m=SIZE;   
    return key % m;   
}      
   
void insert(int hashTable[], int key) {   
    int index = hashFunction(key);
    //linear probing if index collide
    int originalIndex = index;
    while (hashTable[index] != -1) { 
        index = (index + 1) % SIZE;
        if (index == originalIndex) {
            printf("Hash table is full!\n");
            return;
        }
    }
    hashTable[index] = key;
}

void display(int hashTable[]) {
    printf("\nHash Table:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("[%d] -> %d\n", i, hashTable[i]);
    }
}

int main() {
    int hashTable[SIZE];

    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = -1;
    }

    int n;
    printf("Enter number of keys value you want to insert (MAX SIZE%d): ",SIZE);
    scanf("%d",&n);
    int keys[n];
    printf("Enter key values:\n");
    for(int i=0;i<n;i++){
        printf("Enter values at %d position:",i+1);
        scanf("%d",&keys[i]);
    }


    for (int i = 0; i < n; i++) {
        insert(hashTable, keys[i]);
    }

    display(hashTable);
    return 0;
}
