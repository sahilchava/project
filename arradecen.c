#include<stdio.h>
main()
{
	int a[5],i,j,p,n;
	printf("\n enter the range ");
	scanf("%d",&n);
	printf ("\n enter the elemnet");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					p=a[i];
					a[i]=a[j];
					a[j]=p;
				}
			}
		}
		print("\n display array element");
		for(i=0;i<n;i++)
	{
	printf("\n %d",a[i]);
}
}
