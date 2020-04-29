#include <stdio.h>

int main()
{
    int c, m, count = 0;
    scanf("%d", &c);
    
    while(1) {
        scanf("%d", &m);
        count += m;
        if(count >= (2*c)) break;
        (count > 0) ? ((count < c) ? printf("ainda cabe\n") : printf("lotado\n")) : printf("vazio\n");
    }
    
    printf("hora de partir\n");

    return 0;
}