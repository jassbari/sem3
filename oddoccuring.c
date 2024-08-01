#include<stdio.h>
int main()
{
int n,i,c=0,ans;
printf("enter size of array");
scanf("%d",&n);
int a[n];
printf("enter array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
ans=a[i]^a[i+1];
}
printf("%d",a[ans]);
}
