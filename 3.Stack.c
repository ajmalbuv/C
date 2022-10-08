#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX_SIZE 5
int main()
{
	int item,choice,i;
	int arr_stack[MAX_SIZE];
	int top=0;
	int exit=1;
	printf("\n sample stack example-array");
	do
	{
		printf("\n \nstack main menu ");
		printf("\n 1.Push\n2.Pop\n3.Display\n others to exit");
		printf("\n enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				if(top==MAX_SIZE)
				printf("\n ##stack is full!(overflow)");
				else
				{
					printf("\n enter the value to be pushed:");
					scanf("%d",&item);
					printf("\n ##position:%d,pushed value:%d",top,item);
					arr_stack[top++]=item;
				}
				break;
				case 2:
					if(top==0)
					printf("\n ##stack is empty(underflow)!");
					else
					{
						--top;
						printf("\n ##position:%d,popped value:%d",top,arr_stack[top]);
					}
		      break;
		      case 3:
		            	printf("\n##stack:%d",top);
		            	for(i=top-1;i>=0;i--)
		            	printf("\n##position:%d,value:%d",i,arr_stack[i]);
		            	break;
		            	default:
		            	exit=0;
		            	break;
		 }
	 }
	 while(exit);
	 return 0;
}
