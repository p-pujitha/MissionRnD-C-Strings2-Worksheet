/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){

	int start=0, stop=0, len = 0, flag = 0, k = 0;
	char *new_str = (char*)malloc(sizeof(char) * 20);
	for (int i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	if (len == 0) return "";
	int j;
	for ( j = len - 1; j >= 0; j--)
	{
		if (str[j] != ' ')
		{

			stop = j;
			while (j >= 0)
			{
				if (str[j] == ' ')
				{
					start = j + 1;
					flag = 1;
					break;
				}
				else
					j--;
			}
		}
		if (flag == 1)
			break;
	}
	if ( (stop == 0 && j == -1)) return "";
	for (int i = start; i <= stop; i++)
	{
		new_str[k] = str[i];
		k++;
	}
	new_str[k] = '\0';

	return new_str;


	return NULL;
}
