#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define P_ERR 0
#define LENGTH 100
#define OK 1



/*
	*@brief	This function hides all words containing inputed character int hte inputed string and prints it out.
			The inputed string is modified.
	*@param	[in]	char* Pointer to the string
	*@param	[in]	ch Character words containig wich shall be hidden
	*@return	char 
*/
char hide(char* string, char ch);


int main()
{
	char s[LENGTH];
	//char a;
	printf("Enter some text:\n");
	gets(s);
	printf("Enter a character. All words containing this character will be hidden.\n");
	hide(s, getchar());
	puts("");
	system("pause");
}

char hide(char* string, char ch)
{
	if (string == NULL) return P_ERR;
	
		char* token;
		token = strtok(string, " ");
		while (token != NULL)
		{
			if (strchr(token, ch) != NULL)
			{
				for (unsigned char i = 0; i < strlen(token); ++i)
				{
					if (!((*(token + i)) >= 33 && (*(token + i) <= 63)))
					{
						*(token + i) = '*';
					}
				}
			}
			printf("%s ", token);
			token = strtok(NULL, " ");
		}
		return OK;
	
	
}
