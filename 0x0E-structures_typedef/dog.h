#ifndef STRUCT
#define STRUCT
/**
 * struct dog- new struct dog
 *
 * @name: pointer to char
 * @age: pointer to float
 * @owner: pointer to char
 *
 * A new structure for a dog's name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
