#include<stdio.h>
int main()
{
int  n,i,cnt=0,c,j;
printf("enter no of array");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
c=a[0]-a[1];
for(i=0,j=1;i<n-1;i++,j++)
{
if(a[i]-a[j]==c)
cnt++;
else
cnt=0;
}
if(cnt!=0)
printf("entered array is AP");
else
printf("entered array is NOT AP");
return 0;
}
