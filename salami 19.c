#include<stdio.h>

int main()
{

	char ch,dh;
	printf("Enter a character : ");
	scanf("%c",&ch);

	if (ch>=97&&ch<=122)
    {
        dh=ch-32;
        printf("\ncharacter in uppercase = %c\n",dh);

    }

    if (ch>=65&&ch<=89)
    {
        dh=ch+32;
        printf("\ncharacter in lowercase = %c\n",dh);

    }


	return 0;
}
