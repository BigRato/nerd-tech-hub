#include <stdio.h>
#include "battle.h"

int main(){
    Character characters[] = {
        {"Luffy", 90, 70, 100},
        {"Naruto", 85, 75, 100},
        {"Goku", 100, 80, 120},
        {"Ichigo", 88, 72, 100}
    };

    int size = 4;
    int c1, c2;

    printf("=== Anime Battle & Risk Hub ===\n");
    showCharacters(characters, size);

    printf("\nChoose first character: ");
    scanf("%d",&c1);
    printf("Choose second character: ");
    scanf("%d",&c2);

    battle(characters[c1-1], characters[c2-1]);
    return 0;
}