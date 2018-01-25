#include<stdio.h>
int main()
{
int  largest=0,a[14],i,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(i=1;i<=n;i++)
{
if(largest<a[i])
largest=a[i];
}
printf("%d",largest);
return 0;
}
