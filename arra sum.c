#include<stdio.h>
main()
{
	int i,a[5],esum=0,osum=0,n;
	printf("\n enter 5 element");
	for(i=0;i<=1;i++)
	{
		scanf("%d",a[i]);
	}
	for(i=0;i<=4;i++)
	{
	if(n%2==0)
	{
		esum=esum+a[i];
	}
	else
	{
		osum=osum+a[i];
	}
	printf("\n even sum %d",esum);
	printf("\n odd sum %d",osum);
}
}
