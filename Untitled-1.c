// importing all the needed modules
#include <stdio.h>
#include <string.h>

// defining our main() class which will have all the functionality inside
void main() {
   // defining "counter" and "authorized" variables
    int counter = 0;

    // defining "login" and "password" variables
    char login[30];
    char password[30];

    // creating while loop which will work until "authorized" will be equal to 1
    while(1) {

        // requesting user to enter login and password
        printf("Enter login: ");
        scanf("%s", login);

        printf("Enter password: ");
        scanf("%s", password);

         // checking whether typed login and password are valid
         // in case everything is okay, we are breaking our loop and printing out "Welcome ADMIN!"
        if (strcmp(login, "test0") == 0 && strcmp(password, "test0") == 0) {
            printf("Welcome ADMIN!");
            return;
        }

        // in other case we are incrementing counter by 1 and checking the following
        counter += 1;

        // if counter equals or more than 3 we are delaying execution by 3 second
        // printing out message to let user know
        if (counter >= 3) {
             // if counter equals to 5 we are breaking loop and printing message about exiting program
            if (counter == 5) {
                printf("User with such credentials was not found \n");
                printf("Exit 0");
                break;
            }
            printf("User with such credentials was not found \n");
            printf("Waiting 3 secs ... \n");
            sleep(3);
        }
        // here we just show user the message which says that there is no user with such credentials
        else {
            printf("User with such credentials was not found \n");
        }
    }
}