#include <stdio.h>
#include "dog.h"

int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Ghost", 4.75, "Jon Snow");
	printf("Name: %s\nAge: %.2f\nOwner: %s\n", my_dog->name, my_dog->age, my_dog->owner);

	return 0;
}
