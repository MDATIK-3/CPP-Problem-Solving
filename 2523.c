#include <stdio.h>
#include <string.h>

int main() {

    char str[27];

    while(gets(str) != EOF) {

    int n, ni;
    scanf("%d", &n);

    for(int i=0; i<n; i++) {

        scanf("%d", &ni);
        printf("%c", str[ni-1]);
    }

    printf("\n");

    str[0]='\0';

    }

    return 0;
}