#include <stdio.h>
#include "dog.h"

/**
 * main - check code
 * Return: always 0
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Jack";
	my_dog.age = 2.5;
	my_dog.owner = "Bob";
	printf("My name is %s, and i am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}