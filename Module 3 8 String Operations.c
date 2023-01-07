//8 String Operations
#include<stdio.h>
#include<string.h>
int main()
{
    int op,c,co,i,ch,count=0,consonent=0,vowel=0,space=0;
	char str[50],str1[50],str2[50];
	menu:                                           
	printf("   Main Menu\n");                    //Menu
	printf("1.String Reverse\n");
	printf("2.String Concatenation\n");
	printf("3.String Palindrom\n");
	printf("4.String Copy\n");
	printf("5.Length of String\n");
	printf("6.Find frequency of Character\n");
	printf("7.Find number of Vowels and Consonants in a String\n");
	printf("8.Find Number of Blank Space and digits in a string\n");
	printf("9.Exit\n");
	
	printf("Enter any option number from above: ");
	scanf("%d",&op);
	switch(op)
	{
		case 1:                                 //Option 1 for string reverse
		fflush(stdin);
	    puts("Enter a string: ");                     
	    gets(str);
	    printf("Reversed String is: ");
	    puts(strrev(str));                    //string reverse using strrev() function
	    printf("Do you want to continue (Press 1 to continue or 9 to exit) ");
	    scanf("%d",&co);
	    if(co==1)
	    {
	    	goto menu;
		}
		else if(co==9)
		{
			goto exit;
		}
		else
		{
			printf("Wrong input Press 1 to continue or 9 to exit ");
		}
	    break;
	    
	   case 2:	                          //Option 2 for String Concatenation
	   fflush(stdin);
	   puts("Enter string 1: ");       
	   gets(str1);
	   puts("Enter string 2: ");
	   gets(str2);
	   printf("Concatenated String is: ");
	   puts(strcat(str1,str2));            //String Concatenation using function strcat()
	   printf("Do you want to continue (Press 1 to continue or 9 to exit) ");
	   scanf("%d",&co);
	   if(co==1)
	    {
	    	goto menu;
		}
		else if(co==9)
		{
			goto exit;
		}
		else
		{
			printf("Wrong input Press 1 to continue or 9 to exit ");
		}
	   break;
	
	   case 3:                            //Option 3 to check Whether string is palindrom or not
	   fflush(stdin);	                   // using functions strcpy(),strrev() and strcmp() functions
	   printf("Enter a string: ");
	   gets(str);
       strcpy(str1,str);
       strrev(str1);
       printf("reverse string is: %s\n",str1);
       if(strcmp(str1,str)==0)
       {
    	printf("String is palindrom\n");   
	   }
	   else
	   {
		printf("String is not palindrom");
	   }
	   printf("Do you want to continue (Press 1 to continue or 9 to exit) ");
	   scanf("%d",&co);
	   if(co==1)
	    {
	    	goto menu;
		}
		else if(co==9)
		{
			goto exit;
		}
		else
		{
			printf("Wrong input Press 1 to continue or 9 to exit ");
		}
	   break;
	
	   case 4:	                     // Option 4 String copy using function strcpy()
	   fflush(stdin);
	   puts("Enter a string : ");
	   gets(str1);
	   printf("Copied String is: ");
	   puts(strcpy(str2,str1)); 
	   printf("Do you want to continue (Press 1 to continue or 9 to exit) ");
	   scanf("%d",&co);
	    if(co==1)
	    {
	    	goto menu;
		}
		else if(co==9)
		{
			goto exit;
		}
		else
		{
			printf("Wrong input Press 1 to continue or 9 to exit ");
		}
	   break;

	   case 5:	                  // Option 5 Find String length using function strlen()
	   fflush(stdin);
	   printf("Enter String: ");
	   gets(str);
	   printf("Length of String = %d",strlen(str));
	   printf("Do you want to continue (Press 1 to continue or 9 to exit) ");
	   scanf("%d",&co);
	    if(co==1)
	    {
	    	goto menu;
		}
		else if(co==9)
		{
			goto exit;
		}
		else
		{
			printf("Wrong input Press 1 to continue or 9 to exit ");
		}
	   break;

	   case 6:	                      //Option 6 Find frequency of character
	   fflush(stdin);
	   printf("Enter String: ");
	   gets(str);
	   printf("Enter a character to find its frequency: ");
	   scanf("%c",&ch);
	   for(i=0;str[i]!='\0';i++)            
	  {
	   if(str[i]==ch)
	  {
	   count++;
	  }
	  else
	  {
	  	printf("Character does not exists in string: ");
	  }
     }
   	  printf("Frequency of Character %c = %d\n",ch,count);
   	  printf("Do you want to continue (Press 1 to continue or 9 to exit) ");
	  scanf("%d",&co);
	  if(co==1)
	    {
	    	goto menu;
		}
		else if(co==9)
		{
			goto exit;
		}
		else
		{
			printf("Wrong input Press 1 to continue or 9 to exit ");
		}
	   break;
	
	  case 7:	                      // Option 7 for Finding number of Vowels and Consonants in a String
	  fflush(stdin);
	  printf("Enter String: ");
	  gets(str);
	  for(i=0;str[i]!='\0';i++)
	  {
	   if(str[i]!=' ')
	  {
	   if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
	  {
	   vowel++;
	  }
	  else
	  {
	   consonent++;
	  }
	  }
     }
	  printf("Vowel Count = %d\n",vowel);
	  printf("consonent Count = %d",consonent);
	  printf("Do you want to continue (Press 1 to continue or 9 to exit) ");
	  scanf("%d",&co);
	  if(co==1)
	    {
	    	goto menu;
		}
		else if(co==9)
		{
			goto exit;
		}
		else
		{
			printf("Wrong input Press 1 to continue or 9 to exit ");
		}
	  break;
	
	  case 8:	                      // Option 8 for finding blank spaces and character in a string
	  fflush(stdin);
	  printf("Enter String: ");
	  gets(str);
	  for(i=0;str[i]!='\0';i++)
	  {
	   if(str[i]==' ')
	  {
	   space++;
	  }
	  else
	  {
	   count++;
	  }
 	  }
	  printf("Character Count = %d\n",count);
	  printf("space Count = %d",space);
	  printf("\nDo you want to continue (Press 1 to continue or 9 to exit) ");
	  scanf("%d",&co);
	  if(co==1)
	    {
	    	goto menu;
		}
		else if(co==9)
		{
			goto exit;
		}
		else
		{
			printf("Wrong input Press 1 to continue or 9 to exit ");
		}
	  break;
	
	  case 9:	
	  exit:
	  fflush(stdin);
	  printf("have a nice day");
	  break;

      default:
      printf("Wrong Selection");
    }
    return 0;
}

