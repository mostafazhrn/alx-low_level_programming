#ifndef DG_H
#define DG_H
/**
 *struct dog - this struct shall contain the dog name, age owner
 *@name: this shall represent name of perro
 *@age: this represent edad of dog
 *@owner: this shall represent the owner of dogzie
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
