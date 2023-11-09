#include <stdio.h>
#include <string.h>
int main() {
    char st[101];
    fgets(st,101,stdin);
    for(int i=2;i<10;i++)
    {
        printf("%c",st[i]);
    }
    return 0;
}