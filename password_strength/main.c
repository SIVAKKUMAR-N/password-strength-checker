#include <stdio.h>
#include "password.c"
#include <unistd.h>
int main() {
  char *password = getpass("Enter password: ");//getpass hides input (it takes input  and return the address of the  first string character)
   printf("You entered: %s\n", password);
   int final_rank = validate(password);
//same as above
//char *password;
//password = getpass("Enter password: ");//getpass hides input
//validate(password);

// Strength levels
    if (final_rank == 0 || final_rank == 1) {
        printf("The password is very weak\n");
    } else if (final_rank == 2 || final_rank == 3) {
        printf("The password is weak\n");
    } else if (final_rank == 4 || final_rank == 5) {
        printf("The password is medium\n");
    } else if (final_rank == 6 || final_rank == 7) {
        printf("The password is strong\n");
    } else if (final_rank == 8 || final_rank == 9) {
        printf("The password is very strong\n");
    }
    return 0;
}