#include<stdio.h>
int main()
{
int  small=0,a[14],i,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(i=1;i<=n;i++)
{
if(small>a[i])
small=a[i];
}
printf("%d",small);
return 0;
}
