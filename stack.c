#include<stdio.h>
#include<stdlib.h>
#define max 100
int a[max];
int top=-1;


void push()
{
int n;
printf("enter array to be inserted");
scanf("%d",&n);
if(top==max-1)
printf("stack overflow");
else
a[top++]=n;
}


void pop()
{
if(top==-1)
printf("stack underflow");
else
top--;
}


void peak()
{
printf("%d",a[top]);
}


void isempty()
{
if(top==-1)
printf("stack empty");
}



int main()
{
int ch,c;
do
{
printf("\n1. for push\n2. for pop\n3. for top\n4. for isempty\n5. end\n");
scanf("%d ",&ch);
switch(ch)
{
case 1:{
push();
break;}
case 2:{
pop();
break;}
case 3:{
peak();
break;}
case 4:{
isempty();
break;}
case 5:{
exit(0);}
default:{
printf("\nINVALID CHOICE\n");}
}
printf("\nif you want of cont. enter 1\n");
scanf("%d",&c);
}
while(c==1);
}



