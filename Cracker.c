#include<stdio.h>
#include<math.h> //used for pow() and sqrt() function

int main() 
{
	
	
	char operation;
	float toatal, num1,num2,result;
	printf("\t\t\tHACKER ISRAR CALCULATOR\n");
	printf("\t\t\t=======================\n");
	printf("\nenter 1st number: ");
	scanf("%f",&num1);
	printf("\n\nentter the operation: ");
	operation= getchar();
	printf("\nenter 2nd number: ");
	scanf("%f",&num2);
	switch (operation)
	{
	
	case'+':
	result=num1+num2;
	printf("\nresult = %3f",result);
	break;
	case'-':
	result=num1-num2;
	printf("result=%3f",result);
	break;
	case'*':
	result=num1*num2;
	printf("result=%3f",result);
	break;
	case'/':
	result=num1/num2;
	printf("result=%3f",result);
	break;
		case'%':
			result=(num1*100)/toatal;
			printf("result = %3f",result);
			
			break;
			

	
	default:
		printf("\ninvalid operation"); 
}
	
	getchar();
}

 
