#include<stdio.h>
typedef struct
{
	char name;
	float age;
	char owner;
}dog;
void print_dog(dog *d);
/*
 * init_dog - makes a new struct
 *
 * Return: Allways nothing
 **/
void init_dog(dog x)
{

	print_dog(&x);
}
/*
 * print_dog - prints dog
 *
 * Return: nothing
 **/
void print_dog(dog *d)
{

	if (d->name == 0)
		printf("name: (nil)");
	else 
		printf("name: %c", d->name);
	printf("\n");
	if (d == NULL)
		printf("age: (nil)");
	else 
		printf("age: %f", d->age);
	printf("\n");
	if (d->owner == 0)
		printf("owner: (nil)");
	else
		printf("owner: %c", d->owner);
}
/*
 * main - check the code
 *
 * Return: 0
 **/
int main(void)
{
	dog x;
	scanf("%c %f %c", &x.name, &x.age, &x.owner);
	init_dog(x);
}
