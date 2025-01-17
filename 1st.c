// #include <stdio.h>

// int main()
// {
//     // declaration with definition
//     int defined_var;

//     printf("Defined_var: %d\n", defined_var);

//     // assignment
//     defined_var = 12;

//     // declaration + definition + initialization
//     int ini_var = 25;

//     printf("Value of defined_var after assignment: %d\n", defined_var);
//     printf("Value of ini_var: %d", ini_var);

//     return 0;
// }


// LOCAL VARIABLE

// #include <stdio.h>

// void function()
// {
//     int x = 10; // local variable
//     printf("%d", x);
// }

// int main() { function(); }


// GLOBAL VARIABLE
// #include <stdio.h>

// int x = 20; // global variable

// void function1() { printf("Function 1: %d\n", x); }

// void function2() { printf("Function 2: %d\n", x); }

// int main()
// {

//     function1();
//     function2();
//     return 0;
// }


// STATIC VARIABLE

// #include <stdio.h>

// void function()
// {
//     int x = 20; // local variable
//     static int y = 30; // static variable
//     x = x + 10;
//     y = y + 10;
//     printf("\tLocal: %d\n\tStatic: %d\n", x, y);
// }

// int main()
// {
//     printf("First Call\n");
//     function();
//     printf("Second Call\n");
//     function();
//     printf("Third Call\n");
//     function();
//     return 0;
// }


// EXTERN VARIABLE

// ----------myfile.h------------
extern int x=10; //external variable (also global)

// ----------program1.c----------
#include <stdio.h>
void printValue(){printf("Global variable: %d", x);}
int main(){
 printValue();
return 0;
}
