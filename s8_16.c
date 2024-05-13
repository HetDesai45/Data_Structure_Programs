#include <stdio.h>
#define size 5
int cq[size], ch, front = -1, rear = -1, ele;

void enqueue();
void dequeue();
void display();

void main()
{

  do
  {
    printf("\n 1. Enqueue Element");
    printf("\n 2. Dequeue Element");
    printf("\n 3. Display Element");
    printf("\n 4. Exit");

    printf("\n------------------------");
    printf("\n Enter Your Choice = ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
      enqueue();
      break;

    case 2:
      dequeue();
      break;

    case 3:
      display();
      break;

    case 4:
      break;
    }
  } while (ch != 4);
}

void enqueue()
{
  int n;
  printf("Enter Element = ");
  scanf("%d", &n);
  if (front == -1)
  {
    front=0;
    rear=0;
    cq[rear]=n;
  }
  else
  {
    int next = (rear%size) + 1;
    if(next != front){
      rear=next;
      cq[rear] = n;
    }else{
      printf("Queue is full!");
    }
  }
}

void dequeue()
{
  int item;
  if (front == -1)
    printf("Queue is empty!");
  else
  {
    item = cq[front];
    printf("Deleted item = %d", item);

    if (front == rear)
    {
      front = -1;
      rear = -1;
    }else{
      front = (front%size)+1;
    }
  }
}

void display()
{
  if (front == -1)
    printf("Queue is empty!");
  else
  {
    int i = front;
    while (i <= rear)
    {
      printf("%d  ", cq[i]);
      i=(i+1)%size;
    }
    
  }
}