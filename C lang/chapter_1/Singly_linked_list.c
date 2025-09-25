#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

int contains(struct Node** head, int value){
    struct Node *temp = (*head);
    while(temp != NULL){
        if(temp->data == value){
            return 1;
            break;
        }
        temp = temp->next;
    }
    return 0;
}
void insertAtBegin( struct Node** head, int value){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    if(*head == NULL){
        newnode->data = value;
        (*head) = newnode;
        newnode->next = NULL;
        printf("value %d is sucessfully added at the first place\n\n",value);
    }
    else if(!contains(head, value)){
        newnode->next = (*head);
        newnode->data = value;
        (*head) = newnode; 
        printf("value %d is sucessfully added\n",value);
    }else 
        printf("\nAlloction is failed, this value = %d already exist\n", value);
}

void insertAtLast(struct Node** head, int value){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    struct Node *temp = (*head);
    if(*head == NULL){
       newnode->data = value;
        (*head) = newnode; 
        newnode->next= NULL;
        printf("value %d is sucessfully added to the first place\n\n",value);
    }
    else {
        while(temp->next != NULL){
            temp = temp->next;
        }
        if(!contains(head, value)){
            temp->next = newnode;
            newnode->data = value;
            newnode->next = NULL; 
            printf("value %d is sucessfully added\n",value);
        }else 
            printf("\nAlloction is failed, Due to value = %d is already exist\n", value);
    }
}

void insertAtMiddle(struct Node** head, int value, int pos){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    struct Node *temp = (*head);
    if(*head == NULL){
        newnode->data = value;
        (*head) = newnode;
        newnode->next = NULL;
        printf("value %d is sucessfully added to the first place\n",value);
    }
    else if(!contains(head,value)){
        int i =1;
        while(i < pos-1 && temp != NULL){
            temp = temp->next;
            i++;
        }
        newnode->data = value;
        newnode->next = temp->next;
        temp->next = newnode;
        printf("value %d is sucessfully added\n",value);
    }else 
        printf("\nAlloction is failed, Due to value = %d is already exist\n", value);
}
int main() 
{
    struct Node *head = NULL;

    // insertAtBegin(&head,10);
    // insertAtBegin(&head,20);
    // insertAtBegin(&head,10);// this will not be added because we restrict repeatation

    // insertAtLast(&head, 10);
    // insertAtLast(&head, 20);
    // insertAtLast(&head, 20);
    // insertAtLast(&head, 40);

    insertAtBegin(&head,0);
    insertAtMiddle(&head, 10,1);
    insertAtMiddle(&head, 20,1);
    insertAtBegin(&head,30);
    insertAtMiddle(&head, 40,3);
    insertAtMiddle(&head, 50,3);
    // insertAtMiddle(&head, 50,5);
    struct Node *temp = head;
    //to display
    printf("\nHead->");
    while(temp != NULL){
        if(temp==NULL)
            printf("List is empty");
        printf("%d, ",temp->data);
        temp = temp->next;
    }
    printf("->End");
    return 0;
}