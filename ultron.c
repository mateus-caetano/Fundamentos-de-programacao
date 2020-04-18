#include <stdio.h>

int main()
{
    int x, n, el, count = 0, i = 0 ;

    scanf("%d%d", &x, &n);

    while(i < n) {
        scanf("%d", &el);
        count += (el == x) ? 1 : 0;

        ++i;
    }

    printf("%d\n", count);


    return 0;
}
