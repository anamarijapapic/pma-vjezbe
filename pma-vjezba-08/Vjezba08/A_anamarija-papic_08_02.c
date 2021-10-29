#include <stdio.h>
#include <string.h>

int samogl(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A'|| ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 1;
    return 0;
}

void izbaciSamogl(char *str)
{
    char* point = str;
    char* kraj = str + strlen(str);

    while(*point)
    {
        while(samogl(*point) && !samogl(*point + 1))
            memmove(point, point + 1, kraj - point);
        point++;
    }
}

int main(void)
{
    char str[100];

    gets(str);

    izbaciSamogl(str);

    puts(str);

    return 0;
}
