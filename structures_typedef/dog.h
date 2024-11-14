#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */
struct dog
{
        char *name;
        float age;
        char *owner;
};

/**
 * init_dog - initializes a dog struct
 * @d: pointer to the struct dog to initialize
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
