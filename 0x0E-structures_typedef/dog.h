#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
*struct dog - a new type of data representing a dog
*@name: name of dog
*@age: age of dog
*@owner: owner's name
*/
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * my_dog - Type for struct dog
 */

typedef struct dog my_dog;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(my_dog *d);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

#endif /* DOG_H */
