#include <stdio.h>

int main() {
    int limInf, limSup; 
    int countSol = 0, countReb = 0;
    
    scanf("%d %d", &limInf, &limSup);
    
    while(limInf <= limSup) {
        if (limInf % 2 == 0) countSol += limInf;
        else countReb += limInf;
        
        ++limInf;
    }
    
    (countSol > countReb) ? printf("soldados\n") : printf("rebeldes\n");

    return 0;
}