#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - stores info for dog
 *
 * @name: pointer
 * @age: float
 * @owner: pointer
 *
 * Description: struct defines dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif