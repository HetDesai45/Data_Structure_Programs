#include<stdio.h>
#include<stdlib.h>

struct node {
  int data;
  struct node *next;
};

typedef struct node node;
node *head;

void insertbeginning();
void insertgiven();
void insertlast();
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
        insertbeginning();
        break;
      
      case 2:
        insertlast();
        break;

      case 3:
        insertgiven();
        break;
      
      case 4:
        display();
        break;

      case 5:
        break;
    }    
  }while(ch != 5);
}

void insertbeginning(){
  int n;
  node *newNode;
  newNode = malloc(sizeof(struct node));
  printf("Enter data = ");
  scanf("%d",&n);
  newNode->data = n;
  newNode->next = head;
  head = newNode;
}

void insertlast(){
  int n;
  node *newNode;
  newNode = malloc(sizeof(struct node));
  printf("Enter data = ");
  scanf("%d",&n);
  newNode->data = n;
  newNode->next = NULL;

  node *temp = head;
  while(temp->next != NULL){
    temp = temp->next;
  }

  temp->next = newNode;
}

void insertgiven(){
  int n,position;
  node *newNode;
  newNode = malloc(sizeof(struct node));
  printf("Enter Position = ");
  scanf("%d",&position);
  

  node *temp = head;

  if(position == 1){
    insertbeginning();
  }else{
    printf("Enter data = ");
    scanf("%d",&n);
    newNode->data = n;
    for(int i=2; i < position; i++) {
      if(temp->next != NULL) {
        temp = temp->next;
      }
    }
    newNode->next = temp->next;
    temp->next = newNode;
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