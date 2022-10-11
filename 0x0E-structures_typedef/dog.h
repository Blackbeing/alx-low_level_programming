#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Dog struct
 * @name: str argument
 * @age: int argument
 * @owner: str argument
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(char *s);
char *_strcpy(char *src, char *dest);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H_ */
