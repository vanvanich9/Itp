#include <stdio.h>

typedef struct dish {
    char* name;
    struct {
        char* name;
        unsigned int amount;
        char* magnitude;
    } ingredients[10];
} dish;

int main() {
    dish recipes[10];
    recipes[0].name = "Dumplings";
    recipes[0].ingredients[0].name = "Dough";
    recipes[0].ingredients[0].amount = 1500;
    recipes[0].ingredients[0].magnitude = "grams";
    recipes[0].ingredients[1].name = "Meat";
    recipes[0].ingredients[1].amount = 1000;
    recipes[0].ingredients[1].magnitude = "grams";

    recipes[1].name = "Carbonara";
    recipes[1].ingredients[0].name = "Pasta";
    recipes[1].ingredients[0].amount = 100;
    recipes[1].ingredients[0].magnitude = "grams";
    recipes[1].ingredients[1].name = "Cured pork";
    recipes[1].ingredients[1].amount = 100;
    recipes[1].ingredients[1].magnitude = "grams";
    recipes[1].ingredients[2].name = "Egg";
    recipes[1].ingredients[2].amount = 1;
    recipes[1].ingredients[2].magnitude = "piece";
    recipes[1].ingredients[3].name = "Grated cheese";
    recipes[1].ingredients[3].amount = 50;
    recipes[1].ingredients[3].magnitude = "grams";

    for(int i = 0; i < sizeof(recipes)/sizeof(recipes[0]); i++) {
        if(recipes[i].name == NULL) break;
        printf("Name: %s\n", recipes[i].name);
        printf("Ingredients:\n");
        for(int j = 0; j < sizeof(recipes[i].ingredients)/sizeof(recipes[i].ingredients[0]); j++) {
            if(recipes[i].ingredients[j].name == NULL) break;
            printf("    %s %d %s\n", recipes[i].ingredients[j].name, recipes[i].ingredients[j].amount, recipes[i].ingredients[j].magnitude);
        }
        printf("\n");
    }
}