/* Introduction to Programming - Insem 2 Solution
 * Author: Kesha Shah
 */

#include<stdio.h>
#include<math.h>
#include<string.h>
void truncate(char *s,int k);

int main()
{
	char carr[100]="IT105 Introduction To Programming";
//	truncate(carr,strlen(carr)-12);
//	truncate(carr,strlen(carr));
	truncate(carr,strlen(carr)+12);

	return 0;
}

void truncate(char *s,int k)
{
	int m=strlen(s);
	if(k==m)
	{
		printf("%s\n",s);
		return;
	}
	else if(k<m)
	{
		s[k]='\0';
		printf("%s\n",s);
		return;
	}
	else //k>m -> required spaces are prepended to make string k chars long
	{
		int i;
		for(i=0;i<=m;i++)
		{
			s[k-i]=s[m-i];
		}
		for(i=k-m-1;i>=0;i--)
		{
			s[i]=' ';
		}
		printf("%s\n",s);
		return;
	}
}
