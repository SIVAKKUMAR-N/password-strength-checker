#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

int validate(char *password) {
    int rank = 0;
    int a = 0;  // lowercase count
    int b = 0;  // digit count

    if (strlen(password) >= 8) {
        rank += 1;
    }

    // Check uppercase
    for (int i = 0; i < strlen(password); i++) {
        if (isupper(password[i])) {
            rank += 2;
            break;
        }
    }

    // Check lowercase (at least 3 lowercase letters)
    for (int i = 0; i < strlen(password); i++) {
        if (islower(password[i])) {
            a++;
            if (a == 3) {
                rank += 2;
                break;
            }
        }
    }

    // Check special characters
    for (int i = 0; i < strlen(password); i++) {
        if (ispunct(password[i])) {
            rank += 2;
            break;
        }
    }

    // Check digits (at least 3 digits)
    for (int i = 0; i < strlen(password); i++) {
        if (isdigit(password[i])) {
            b++;
            if (b == 3) {
                rank += 1;
            }
        }
    }

    return rank;
}


