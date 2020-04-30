#include <stdio.h>

int main() {
    
    int number, phoneNumber, count = 0;
    
    scanf("%d %d", &number, &phoneNumber);
    
    for(phoneNumber; phoneNumber != 0; phoneNumber /= 10) {
        if(number == (phoneNumber % 10)) count++;
    }
    
    printf("%d\n", count);
    
    return 0;
}
