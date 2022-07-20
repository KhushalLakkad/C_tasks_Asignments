#include<stdio.h>
int main()
{
	
	int a=967,b=716,c=1190;
	
	if(a>b)
	{
		if(a>c)
		{
			printf("%d",a);
		}
		
		else
		{
			printf("%d",c);
		}
		
	}
	
	else if(b>c)
	{
		printf("%d",b);
	}
	else
	{
		printf("%d",c);
	}
	
	return 0;
}
