#include <stdio.h>

/* Constructor function to print the message */
void __attribute__((constructor)) print_message()
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}

int main()
{
/* Your main function code here */
printf("Hello, world!\n");
return 0;
}
