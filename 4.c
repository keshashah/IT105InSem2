/* Introduction to Programming - Insem 2 Solution
 * Author: Kesha Shah
 */

#include<stdio.h>
#include<math.h>
#include<string.h>

int toDecimal(char *binary);

int main()
{
	char *string="01010101";
	printf("%d\n",toDecimal(string));
	return 0;
}

int toDecimal(char *binary)
{
	int length=strlen(binary),i;
	int decimal=0;
	for(i=length-1;i>=0;i--)
	{
		decimal=(decimal*2)+*(binary+i)-'0';
	}
	return decimal;
}
