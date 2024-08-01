#include<stdio.h>
int main()
{
int n,i,j,flag=0;
printf("enter size of array");
scanf("%d",&n);
int a[n];
printf("enter array");
for(i=0;i<n-1;i++)
{
scanf("%d",&a[i]);
}
for(j=1;j<=n;j++)
{
for(i=0;i<n-1;i++)
{
if(a[i]!=j)
{
flag=1;
continue;
}
else
{
flag=0;
break;
}}
if(flag==1)
printf("\n%d",j);
}
}

