#include<unistd.h>
/**
 *main - Entry point
 *
 *Description: This project will print a quite using write function
 *          write(int fd.const void *buf,size_t count)
 *
 *Return: 1 (Not Success)
*/
int main(void)
{
char art[]= "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
write(1,art,59);
return (1);
}
