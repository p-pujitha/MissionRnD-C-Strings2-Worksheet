/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>

char * get_sub_string(char *str, int i, int j){

	char *new_str=(char*)malloc(sizeof(char)*20);
	int l = 0;

	if (i>j || i == j || str==NULL)
		return NULL;
	else
	{
		for (int k = 0; str[k] != '\0';)
		{
			if (i == k)
			{
				while (str[k] != '\0')
				{

					new_str[l] = str[k];
					if (k == j)
					{

						break;
					}
					k++;
					l++;
				}
			}
			else
				k++;
		}
	}
	new_str[l + 1] = '\0';

	/*for (int i = 0; new_str[i] != '\0'; i++)
		printf("%c", new_str[i]);*/

	return new_str;

    return NULL;
}
