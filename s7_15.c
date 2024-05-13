#include <stdio.h>
#define size 5
int queue[size], ch, front = -1, rear = -1, ele;

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
  if (rear >= size - 1)
  {
    printf("Queue is full!");
  }
  else
  {
    printf("Enter Element = ");
    scanf("%d", &n);
    if (front == -1)
      front = 0;

    rear = rear + 1;
    queue[rear] = n;
  }
}

void dequeue()
{
  int item;
  if (front == -1 || front > rear)
    printf("Queue is empty!");
  else
  {
    item = queue[front];
    front = front + 1;
    printf("Deleted item = %d", item);

    if (front > rear)
    {
      front = -1;
      rear = -1;
    }
  }
}

void display()
{
  if (front == -1 || front > rear)
    printf("Queue is empty!");
  else
  {
    for (int i = front; i <= rear; i++)
    {
      printf("%d   ", queue[i]);
    }
  }
}