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
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
