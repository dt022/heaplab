/* Type your code here, or load an example. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char * hello = malloc(40);

    strcpy(hello, "aaaaaaa aaaaaaaaaa");

    printf("%p %s\n", hello, hello);

    free(hello);
    hello = NULL;

    char * ello = malloc(40);

    strcpy(hello, "bbbbb bbbbbbb");
    printf("%p", ello);

    return 0;
}
