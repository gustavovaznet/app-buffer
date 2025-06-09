#include <stdio.h>
#include <string.h>

//SHOW INFO
void show_sensitive_info() {
    printf("Sensitive info discovered!\n");
}

//AUTHENTICATE
void authenticate() {
    char correct_pass[10] = "pass@123";
    char pass[10];

    printf("Type the password to access the sensitive info: ");
    gets(pass); 
    
    //CHECK PASS
    if (strcmp(pass, correct_pass) == 0) {
        show_sensitive_info();
    } else {
        printf("The password is incorrect. Access denied!\n");
    }
}

//MAIN
int main() {
    authenticate();

    return 0;
}
