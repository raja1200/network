#include <stdio.h>
#include<string.h>


int main(){
	int i , length , choice;
	char str[100];
	
	printf("Enter the message : ");
	gets(str); //one line input for array(string) without using loop
	
	length = strlen(str);
	
	printf("Enter your option : ");
	printf("\n1.Encryption \n2.Decryption");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			for(i= 0 ; i<length && str[i] != '\0' ; i++)
			{
				str[i] = str[i] + 3 ;
			}
			printf("The Encrypted string : %s", str);
			break ;
	
	    case 2:
			for(i= 0 ; i<length && str[i] != '\0' ; i++)
			{
				str[i] = str[i] - 3 ;
			}
			printf("The Decypted string : %s", str);
	    	break;
  	    default :
  	    	printf("Invalid Choice");
}
return 0;
}
