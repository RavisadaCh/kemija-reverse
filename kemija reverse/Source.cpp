#include<stdio.h>
#define CRT_SECURE_NO_WARNING
int main()
{
	char str[50];
	printf("Enter codename : ");
	scanf_s("%s", str, 29);
	int i = 0;
	while (i < 50 && str[i]!='\0')
	{
		if (str[i] == 'p')
		{
			if (str[i + 1] == 'a' || str[i + 1] == 'e' || str[i + 1] == 'i' || str[i + 1] == 'o' || str[i + 1] == 'u')
			{
				i=i++;
			}
		}
		else
		{
			printf("%c", str[i]);
		}
		i++;
	}
	return 0;
}