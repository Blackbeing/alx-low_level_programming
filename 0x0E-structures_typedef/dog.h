#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Dog struct
 * @name: str argument
 * @age: int argument
 * @owner: str argument
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H_ */
