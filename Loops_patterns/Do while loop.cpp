#include<stdio.h>
int main()
{
	int num,x;
	printf("enter number.\n");
	scanf("%d", &num);

 do{ 
      x=num%10;
     num=num/10;
     switch(x){
     	case 0:
     		printf("zero");
     		break;
     	case 1:
		    printf("one");
			break;
		case 2:
		    printf("two");
			break;
		case 3:
		    printf("three");
			break;
		case 4:
		    printf("four");
		    break;
		case 5:
			printf("five");
			break;
		case 6:
		    printf("six");
			break;
		case 7:
		    printf("seven");
			break;
		case 8:
		    printf("eight");
			break;
		default:
		    printf("nine");					 			
	 }
      
 }
   while(num<0);
}
