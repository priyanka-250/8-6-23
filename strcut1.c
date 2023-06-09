#include<stdio.h>
 struct distances{
 	int inch;
 	int feet;
}s,s1,sum;

main()
{
	printf("enter 1st distance\n");
	printf("enter feet=");
	scanf("%d",&s.feet);
	printf("enter inch=");
	scanf("%d",&s.inch);
	
	printf("enter 2st distance\n");
	printf("enter feet=");
	scanf("%d",&s1.feet);
	printf("enter inch=");
	scanf("%d",&s1.inch);
	
	sum.feet=s.feet+s1.feet;
	sum.inch=s.inch+s1.inch;
	
	while(sum.inch>=12)
	{
		sum.feet++;
		sum.inch-=12;
	}
	printf("\n sum of distance feet=%d  inch=%d",sum.feet,sum.inch);
}
