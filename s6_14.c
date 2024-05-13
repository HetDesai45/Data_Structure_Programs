#include<stdio.h>
#define size 5
int stack[size],ch,top=-1,ele;

void push();
void pop();
void display();

void main(){
  
  do{
    printf("\n 1. Push Element");
    printf("\n 2. Pop Element");
    printf("\n 3. Display Element");
    printf("\n 4. Exit");

    printf("\n------------------------");
    printf("\n Enter Your Choice = ");
    scanf("%d",&ch);

    switch (ch)
    {
      case 1:
        push();
        break;
      
      case 2:
        pop();
        break;

      case 3:
        display();
        break;
      
      case 4:
        break;
    }    
  }while(ch != 4);
}

void push(){
  int n;
  

  if(top >= size-1){
    printf("Stack is full!");
  }else{
    printf("Enter Element = ");
    scanf("%d",&n);
    top=top+1;
    stack[top] = n;
  }
}

void pop(){
  int item;
  if(top<0)
    printf("Stack is empty!");
  else{
    item=stack[top];
    top=top-1;
    printf("Deleted item = %d",item);
  }
}

void display(){
  for(int i=top; i>=0; i--){
    printf("%d \n",stack[i]);
  }
}