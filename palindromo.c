#include <stdio.h>

int main() {
    
    int id,
        reverseId = 0,
        aux;
    
    scanf("%d", &id);
    
    for(aux = id; aux != 0; aux /= 10) {
        reverseId = (reverseId * 10) + (aux % 10);
    }
    (id == reverseId) ? printf("1\n") : printf("0\n");
    
    return 0;
}
