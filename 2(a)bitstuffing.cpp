//error detection adn correction - LRC

#include<stdio.h>

int main()
{
	int bit[100],i ,n, len ,count =0 , choice ;
	
	printf("Enter the lenth of the bit stream : ");
	scanf("%d" , &len);
	printf("Enter the bit stream");
	for(i=0 ; i < len ; i++)
	{
		scanf("%d" ,&bit[i]);
		
		//counting for number of 1's
		if(bit[i]==1)
		{
			count++;
		}
	}
	printf("The number of one's in bitstream : %d" , count);
	
	printf("\nEnter your choice \n1.Sender Side \n2.Receiver Side ");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			if (count % 2 == 0) //even number of one's
			{
				bit[len] = 0 ; //last 0
			}else{
				bit[len]= 1 ;
			}
			printf("The bitstream : ");
			for(i = 0 ; i<len;i++)
			{
				printf("%d" ,bit[i]);
			}
			break;
		case 2:
			if (count % 2 == 0)
			{
				printf("No Error ");
			 } 
		 	 else{
		 	 	printf("Error");
			  }
	}
	return 0 ;
}
