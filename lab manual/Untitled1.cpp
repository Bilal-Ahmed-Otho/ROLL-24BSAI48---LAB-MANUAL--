#include <stdio.h>

int main()
{

int numbers1,numbers2;
char operators;
int result;

printf (" Enter Two numbers:");
scanf ("%d %d",& numbers1,&numbers2);
printf ("select operators= ( +, -, *, / )  ");
scanf(" %c", & operators);

if ( operators == '+')
 
{
	 result=numbers1+numbers2;
	 printf ("%d+%d=%d", & numbers1+numbers2,result );
}

 if ( operators== '-')
  
{
	result=numbers1 - numbers2;
	printf ("%d-%d=%d", & numbers1,numbers2,result); 
}

if ( operators == '*')
 
{
	 result=numbers1*numbers2;
	 printf ("%d*%d=%d", & numbers1 ,numbers2,result );
}

if ( operators == '/')
 	if (numbers2 == '0'){
 		printf (" error, zero is not allowed ");
	 }else
{
	 result=numbers1/numbers2;
	 printf ("%d/%d=%d", & numbers1,numbers2,result );
}
  
	return 0;

}