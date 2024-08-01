#include<stdio.h>
int main()
{
int n,i,sum=0,esum=0,ans=0;
printf("enter size of array");
scanf("%d",&n);
int a[n];
printf("enter array");
for(i=0;i<n-1;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
esum=(n*(n+1))/2;
ans=esum-sum;
printf("%d",ans);
}
