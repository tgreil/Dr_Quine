#include <stdio.h>
/*
	First comment
*/
void other(char *string)
{
	printf(string, 10, 10, 9, 10, 10, 10, 10, 9, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, string, 34, 10, 9, 10, 9, 10, 10);
}
int main()
{
	/*
		Second comment
	*/
	char *string = "#include <stdio.h>%c/*%c%cFirst comment%c*/%cvoid other(char *string)%c{%c%cprintf(string, 10, 10, 9, 10, 10, 10, 10, 9, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, string, 34, 10, 9, 10, 9, 10, 10);%c}%cint main()%c{%c%c/*%c%c%cSecond comment%c%c*/%c%cchar *string = %c%s%c;%c%cother(string);%c%creturn (0);%c}%c";
	other(string);
	return (0);
}
