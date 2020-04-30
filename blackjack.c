#include <stdio.h>

int main() {
    
    int nCartas, carta, count = 0, countAs = 0;
    scanf("%d", &nCartas);
    
    for(nCartas; nCartas > 0; --nCartas) {
        scanf("%d", &carta);
        
        if(carta > 10) count += 10;
        
        else if(carta == 1) {
            if((count + 11) > 21) count++;
            else {
                countAs++;
                count += 11;
            }
        }
        
        else count += carta;
    }
    
    if(count > 21) count -= (countAs * 10);
    
    printf("%d\n", count);
    
    return 0;
}