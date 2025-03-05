/*
A structure often contains data 
objects grouped according to their 
usage, but a structure can contain
unrelated data objects as well.
*/
#include <stdio.h>
#include <math.h>
#include <string.h>


// Using the struct keyword
/*
 * As an example, let's think that
 * we have a user, which has the properties
 * age, name, and nationality.
 *
 * To declare it using structs, we use the
 * pattern:
*/
struct User
{
    char age;
    char name[127];
    char nationality[3];
};
/*
 
*/

int main()
{
	/*
	 * When you declare a variable with type User,
	 * a block of memory of size 131 bytes will be
	 * allocated.
	 * To declare the variable, use 
	 * struct User <variable-name>
	*/
    struct User admin; //Declare a variable with type User
	strcpy(admin.nationality, "BR");
	strcpy(admin.name, "Viktor");
	admin.age = 19;

    printf("%d\n", sizeof(admin)); // Should print 1 + 3 + 127 = 131;

    return 0;
}
