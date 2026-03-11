#ifndef BATTLE_H
#define BATTLE_H

typedef struct {
    char name[50];
    int attack;
    int defense;
    int hp;
} Character;

void showCharacters(Character characters[], int size);
void battle(Character c1, Character c2);

#endif