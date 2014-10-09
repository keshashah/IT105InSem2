/* Introduction to Programming - Insem 2 Solution
 * Author: Kesha Shah
 */

#include<stdio.h>
#include<math.h>

void swap(char *S,char *t);

int main()
{
	char p[]="kernighan",q[]="richie";
	printf("%s %s\n",p,q);
	swap(p,q);
	printf("%s %s\n",p,q);

	return 0;
}

void swap(char *S,char *t)
{
	char *temp;
	temp=S;
	S=t;
	t=temp;
}

