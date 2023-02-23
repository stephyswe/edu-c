#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERNAME_LENGTH 50
#define MAX_PASSWORD_LENGTH 50
#define MAX_LINE_LENGTH 100

void login();
void createAccount();

void login()
{
    char username[MAX_USERNAME_LENGTH], password[MAX_PASSWORD_LENGTH];
    printf("\nEnter your username: ");
    scanf("%s", username);
    printf("Enter your password: ");
    scanf("%s", password);

    FILE *fp = fopen("accounts.txt", "r");

    char read_username[MAX_USERNAME_LENGTH], read_password[MAX_PASSWORD_LENGTH];
    int found = 0;
    while (fscanf(fp, "%s %s", read_username, read_password) == 2)
    {
        if (strcmp(read_username, username) == 0 && strcmp(read_password, password) == 0)
        {
            printf("Login successful.\n");
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (!found)
        printf("Incorrect username or password. Please try again.\n");
}

void createAccount()
{
    char username[MAX_USERNAME_LENGTH], password[MAX_PASSWORD_LENGTH];
    printf("\nEnter your desired username: ");
    scanf("%s", username);

    FILE *fp = fopen("accounts.txt", "r");

    char read_username[MAX_USERNAME_LENGTH];
    int found = 0;
    while (fscanf(fp, "%s", read_username) == 1)
    {
        if (strcmp(read_username, username) == 0)
        {
            printf("Error: Username already exists. Please choose another.\n");
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (!found)
    {
        printf("Enter your desired password: ");
        scanf("%s", password);

        fp = fopen("accounts.txt", "a");

        fprintf(fp, "%s %s\n", username, password);

        printf("Account created successfully.\n");

        fclose(fp);
    }
}

void main()
{
    int choice;
    while (1)
    {
        printf("\nMenu\n");
        printf("1. Login\n");
        printf("2. Create new account\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            login();
            break;
        case 2:
            createAccount();
            break;
        case 3:
            printf("Exiting...\n");
            exit(1);
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }
}