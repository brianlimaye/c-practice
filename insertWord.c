#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

char * insertWord(const char out[], const char word[]);


char * insertWord(const char out[], const char word[])
{
	
	char firstHalf[3];
	char secondHalf[3];
	int outLen = strlen(out);
	int wordLen = strlen(word);
	int len = outLen + wordLen + 1;
	
	char newStr[len];

	strncpy(firstHalf, out, 2);
	firstHalf[2] = '\0';
	
	snprintf(secondHalf, 3, "%c%c%c", out[2], out[3], '\0');

	snprintf(newStr, len, "%s%s%s", firstHalf, word, secondHalf);

	return strdup(newStr);
	
}

int main()
{	
	char * a = insertWord("<<>>", "Yay");
	assert(strcmp(a, "<<Yay>>") == 0);
	char * b = insertWord("<<>>", "WooHoo");
	assert(strcmp(b, "<<WooHoo>>") == 0);
	char * c = insertWord("<<>>", "word");
	assert(strcmp(c, "<<word>>") == 0);
	
	free(a);
	free(b);
	free(c);
}
