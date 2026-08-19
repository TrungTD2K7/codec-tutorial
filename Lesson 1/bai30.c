#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* ltrim(char s[])
{
	int i = 0;
	while (s[i] == ' ') i++;
	if (i > 0) strcpy(&s[0], &s[i]);
	return s;
}

char* rtrim(char s[])
{
	int i = strlen(s) - 1;
	while (s[i] == ' ') i--;
	s[i + 1] = '\0';
	return s;
}

char* trim(char s[])
{
	rtrim(ltrim(s));
	char *ptr = strstr(s, "  ");
	while (ptr != NULL)
	{
		strcpy(ptr, ptr + 1);
		ptr = strstr(s, "  ");
	}
	return s;
}

void otimizeName(char S[])
{
	int i;
	int n = strlen(S);
	for (i = 0; i < n; i++) S[i] = tolower(S[i]);
	for (i = 0; i < n; i++)
	{
		if (i == 0 || S[i - 1] == ' ') S[i] = toupper(S[i]);
	}
	puts(S);
}

int main()
{
	char S[31];
	printf(" nhap ten cua ban :");
	gets(S);
	otimizeName(trim(S));
}