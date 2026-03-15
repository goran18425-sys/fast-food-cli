#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() 
{   
    float cena;
    char has[50] = "";
    int kolicina = 0;
    float total = 0.0f;

    
    printf("Koji has zelish(pizza/burger/sendvic): ");
    fgets(has, sizeof(has), stdin);
    has[strlen(has) - 1] = '\0';


    if(strcmp(has, "pizza\0") == 0){
        cena = 199.99;

    } else if(strcmp(has, "burger\0") == 0) {
        cena = 299.99;

    } else if(strcmp(has, "sendvic\0") == 0) {
        cena = 99.99;

    }

    printf("Cena za jedan %s je %.2f din\n",has, cena);

    printf("Koliko komada: ");
    scanf("%d", &kolicina);

    total = cena * kolicina;

    printf("Ukupan racun za %d %s je: %.2f din\n", kolicina, has, total);
    return 0;
}