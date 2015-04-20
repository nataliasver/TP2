/* tp2 - 1-10- Caractéres especiales
*Natalia S. verdura
*137.626-3
*20-4-2015
*/

#include <stdio.h>

int main ()
{
    int c;
    while( (c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b')
        {
            printf("\\b");
        }    
        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else 
        {
            putchar(c);
        }
        
    }
   
    
    return 0;
}
