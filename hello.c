#include <stdio.h>

/*  Hello world 
	by Ria Kim.
 	Jan 18, 2016
 	Project #1
 	Executable file is hello.out
 */

int main(int argc, char *argv[])
{
	printf("Hello world!\n");
	printf("I'm Ria Kim\n");

/* This section computes a sum. */
int x, y, z;
x = 10;
y = 20;
z = x + y;
printf("x is %d, y is %d, and z is %d\n", x, y, z);
	
/*This section computes the volume of a box */
int height, width, depth, volume;
height = 11;
width  = 7;
depth  = 14;
volume = height * width * depth;
printf("height is %d, width is %d, depth is %d, volume is %d\n", height, width, depth, volume);

return 0;
}