#include<stdio.h>
/**
 *main - Entry point
 *
 *Description: This program for mesure the sizeof various inputs on computer"
 *
 *Return" always 0 (Sucess)
*/
int main(void)
{
printf("size of a: %lu byte(s)\n", sizeof(char));
printf("size of an int: %lu byte(s)\n", sizeof(int));
printf("size of a long int: %lu byte(s)\n", sizeof(long));
printf("size of along long int: %lu byte(s)\n", sizeof(long long int));
printf("size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
