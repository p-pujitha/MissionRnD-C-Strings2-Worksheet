/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){

	int j = 0, flag = 0, count = 0;
	for (int i = 0; str[i] != '\0';)
	{
		if (str[i] == word[j])
		{
			i++;
			j++;
			while (word[j] != '\0')
			{
				if (str[i] == word[j])
				{
					flag = 1;
					i++;
					j++;
				}
				else
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
			{
				j = 0;
				count++;
				flag = 0;
			}

		}

		else
		{

			i++;
		}
	}

	return count;
	return 0;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

