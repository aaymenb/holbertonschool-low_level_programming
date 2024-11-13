#ifndef DOG_H
#define DOG_H

/* Define the struct dog */
struct dog
{
    char *name;  /* Pointer to a string representing the dog's name */
    float age;   /* Float to represent the dog's age */
    char *owner; /* Pointer to a string representing the owner's name */
};

/* Create a typedef for easier usage of the struct */
typedef struct dog dog_t;

#endif /* DOG_H */
