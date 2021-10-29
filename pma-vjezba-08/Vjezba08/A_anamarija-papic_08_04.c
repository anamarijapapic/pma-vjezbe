#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *vratiRoot(char *str)
{
    char *p, *substr, ch;
    int cnt, slash = 0, plc = 0;

    size_t d = strlen(str);

    substr = (char*)malloc(d + 1);
    if(!substr) return NULL;

    /*ukidanje oznake protokola*/
    p = strstr(str, "//") + 2;

    /*upis znakova u root sve do sljedeceg znaka '/'*/
    for (cnt = 0; cnt < d; cnt++)
    {
        if(*p == '/')
            slash++;
        if(!slash)
        {
            *(substr + plc) = *p;
            plc++;
        }
        p++;
    }

    *(substr + plc) = '\0'; /*dodavanje '\0' na kraj da bude string*/

    return substr;
}

int main(void)
{
    char url[] = "http://www.hackcanada.com/ice3/2600/2600_15-3_p10.txt";
    char url1[] = "https://moodle.oss.unist.hr/pluginfile.php/87056/mod_resource/content/1/PMA_vjezba08.pdf";
    char *root;

    puts(url);
    root = vratiRoot(url);
    puts(root);

    puts(url1);
    root = vratiRoot(url1);
    puts(root);

    free(root);

    return 0;
}
