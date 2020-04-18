#include<stdio.h>

int main() {

    int qtdNotas, i = 0;
    float nota, media = 0;

    scanf("%d", &qtdNotas);

    while (i < qtdNotas)
    {
        scanf("%f", &nota);
        media += nota;

        ++i;
    }

    printf("%.1f\n", media/qtdNotas);    

    return 0;
}