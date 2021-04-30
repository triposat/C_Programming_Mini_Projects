#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void decimalToBinary(int decimal, char *octet)
{
   octet=octet+8;
	*octet = '\0';
	if(decimal == 0)
	{
		octet=octet-8;
		octet = "00000000";
	}
	else
	{
		while(decimal>0)
		{
			octet--;
			*octet=decimal%2+'0';
			decimal=decimal/2;
		}
}
}
void textToBinary(char *text, int textLength, char *binary, int binaryLength)
{
    char *octet = malloc(8);
    while(*text)
    {
        decimalToBinary(*text, octet);
        while(*octet)
            *binary++ = *octet++;
        *binary++ = ' ';
        ++text;
        octet=octet-8;
    }
    *binary = '\0';
      free(octet);
}

int main()
{
	system("color f0");
	char text[101];
    char *binary;
	int textLength, binaryLength; 
    gets(text);
	textLength = strlen(text);
    binaryLength = textLength * 8;      
    binary = malloc(binaryLength + 1);  
    textToBinary(text, textLength, binary, binaryLength);
    printf("\n\n\n\t\t\t\t\tBINARY CODES\n\n\t%s\n\n\n\n", binary);
    free(binary);
    system("pause");
	return 0;
}
