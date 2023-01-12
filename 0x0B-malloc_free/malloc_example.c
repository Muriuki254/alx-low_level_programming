#include <stdio.h>

#include <stdlib.h>



int main(void)

{

char *str;



str = malloc(sizeof(char) * 3);

str[0] = 'o';

str[1] = '1';

str[2] = '\0';

printf("%s\n", str);

return (0);

}
