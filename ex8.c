#include<stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "zed";
    char fullname[] = {'z', 'e', 'd',
                        ' ', 'A', '.', ' ', 
                        'S', 'h', 'a', 'w', '\0'};

//Warning: On some systems you may have to change the
// %ld in this code to a %u since it will use unsigned ints

printf("The size of an int in bytes:%ld\n", sizeof(int));

printf("The size of areas (int[]) in bytes:%ld\n", sizeof(areas));
printf("The number of integers in array areas: %ld\n", sizeof(areas)/sizeof(int));

printf("The size of a char in bytes: %ld\n", sizeof(char));
printf("The size of name (char[]): %d\n", sizeof(name));
printf("The number of char in name[]: %ld\n", sizeof(name)/sizeof(char));
printf("The size of fullname[]: %ld\n", sizeof(fullname));
printf("The number of chars in fullname[]: %ld\n", sizeof(fullname)/sizeof(char));

printf("name=\"%s\" and fullname =\"%s\"\n", name, fullname);

printf("print at position in fullname[]: %c\t and name: %c", 
fullname[1], name[0]);
return 0;
}