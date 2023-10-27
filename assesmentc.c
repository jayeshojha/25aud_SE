#include<stdio.h>
#include<string.h>
main()
{
	int i=1,n;
	while (i)
	{
		printf("main menu\n");
		
	printf("\t1 equality\n"); 
	
	printf("\t2 string copy\n"); 
	
    printf("\t3 concate\n"); 
	
    printf("\t4 show\n"); 
	
	printf("\t5 reverse\n"); 
	
	printf("\t6 palindrome\n"); 
	
	printf("\t7 sub string\n"); 
	
	printf("\t8 exit\n");
	
	
	
	
	int num,n;
		
	char str1[20];
	char str2[20];
	
	printf("enter your choice = ");
	scanf("\n%d",&num);

	
	if(num==1)
	{
	
	int value;
	printf("\nenter the first string = ");
	scanf("%s",&str1);
	printf("\nenter the second string = ");
	scanf("%s",&str2);
	
		value=strcmp(str1,str2);
	 if(value==1)
		{
		printf("string is not equal");
		}
		else
		{
			printf("string is equal");
		}
	}
	else if(num==2)
	{
	char str3[20];
	char str4[20];
	printf("enter str3=");
	scanf("%s",&str3);
	strcpy(str4,str3);
	printf("str4=%s",str4);
   
	
	
	}else if(num==3)
	{ 
		
		printf("enter str1=\n");
		scanf("%s",&str1);
		printf("enter str2=\n");
		scanf("%s",&str2);
		strcat(str1,str2);
		printf("concantend strin %s",str1,str2);
	}
	else if(num==4)
		{
			printf("enter str1 =\n ");
			scanf("%s",&str1);
			printf("show=%s",str1);
			
		
			
		
		}
	
	else if(num==5)
		{
			printf("enter the str1=\n");
			scanf("%s",&str1);	
			strrev(str1);
			printf("reverse=%s",str1);
		}
	
	else if(num==6)
		{ 	
		    
			printf("enter the str1=\n");
			scanf("%s",&str1);	
			strcpy(str2,str1);
			strrev(str1);
			printf("reverse = %s\n",str1);
			
			if(!strcmp(str2,str1))
			{
				printf("it is palendrom");
			}
			else 
			{
				printf("not an palendrom");
			}
				
			
			
		}
		
	else if(num==7)
		{
		
			char string[1000], sub[1000];
   			int position, length, c = 0;
 
   			printf("Input a string\n");
   			scanf("%s",&string);
 
   			printf("Enter the position and length of substring\n");
   			scanf("%d%d", &position, &length);
 
   			while (c < length)
			{
      		sub[c] = string[position+c-1];
      		c++;
   			}
   			sub[c] = '\0';
 
   			printf("Required substring is \"%s\"\n", sub);	
		}
	
	else if(num==8)	
	{
			printf("thanks for attempt");
					}
		
		else
		{
			printf("wrong input");
		}
		
			printf("\ndo you want to continue <presss 1 to continue>");
	scanf("%d",&n);
	}
	
		
}
