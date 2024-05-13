#include<stdio.h>

void main(){

  char str1[100]="Hello ";
  char str2[]="Het";
  int i,length=0;

  while (str1[length] != '\0')
  {
    ++length;
  }

  for(i=0; str2[i] != '\0'; ++i,++length){
    str1[length] =str2[i];
  }

  str1[length] = '\0';
  
  printf("Final String : ");
  puts(str1);
}