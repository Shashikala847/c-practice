#include<stdio.h>
#include<string.h>
//#include<ctypes.h>
struct Person {
    char firstName[20];
    int day;
    int month;
};

int main() {
    struct Person user;
    char password[9]; 
    int i, len;


    printf("Enter your First Name: ");
    scanf("%s", user.firstName);

    printf("Enter your Date of Birth (Day and Month):\n");
    printf("Day (DD): ");
    scanf("%d", &user.day);
    printf("Month (MM): ");
    scanf("%d", &user.month);


    len = strlen(user.firstName);

    if (len >= 4) {
        for (i = 0; i < 4; i++) {
            password[i] = tolower(user.firstName[i]);
        }
    } else {
        int pad = 4 - len;
        for (i = 0; i < pad; i++) {
            password[i] = '9';
        }
        for (int j = 0; j < len; j++, i++) {
            password[i] = tolower(user.firstName[j]);
        }
    }

    
    sprintf(&password[4], "%02d%02d", user.day, user.month);
	 password[8] = '\0';
	printf("\nYour password is: %s\n", password);

    return 0;
}