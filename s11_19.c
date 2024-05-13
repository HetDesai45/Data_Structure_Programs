#include<stdio.h>
#include<stdlib.h>

struct node {
  int data;
  struct node *next;
};

typedef struct node node;
node *head;

void deletebeginning();
void deletegiven();
void deletelast();
void display();

void main(){
  int ch;
  do{
    printf("\n 1. Insert node at first position");
    printf("\n 2. Insert node at last position");
    printf("\n 3. Insert node at given position");
    printf("\n 4. Display");
    printf("\n 5. Exit");

    printf("\n------------------------");
    printf("\n Enter Your Choice = ");
    scanf("%d",&ch);

    switch (ch)
    {
      case 1:
        deletebeginning();
        break;
      
      case 2:
        deletelast();
        break;

      case 3:
        deletegiven();
        break;
      
      case 4:
        display();
        break;

      case 5:
        break;
    }    
  }while(ch != 5);
}

void deletebeginning(){
  if(head == NULL){
    printf("Linked list is empty!");
  }else{
    node *temp;
    temp=head;
    head=temp->next;
    printf("Deleted Node = %d",temp->data);
  }
}

void deletelast(){
  node *prev;
  if(head == NULL){
    printf("Linked list is empty!");
  }else{
    node *temp = head;
    while(temp->next != NULL){
      prev=temp;
      temp = temp->next;
    }
    prev->next=NULL;
    printf("Deleted Node = %d",temp->data);
  }
  
}

void deletegiven(){
  int position;
  printf("Enter Position = ");
  scanf("%d",&position);
  

  node *temp = head;
  node *prev;
  if(position == 1){
    deletebeginning();
  }else{
    for(int i=2; i < position; i++) {
      if(temp->next != NULL) {
        prev=temp;
        temp = temp->next;
      }
    }
    prev->next = temp->next;
    temp->next = NULL;
    printf("Deleted Node = %d",temp->data);
  }
  
}

void display(){
  node *temp = head;

  while (temp->data != NULL)
  {
    printf("%d--->",temp->data);
    temp=temp->next;
  }
  
}