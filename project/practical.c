#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int accNo = 1001;
char name[20] = "xyz";
int balance = 10000;
char password[20] = "1234";

void data();
void displayAccount();
void depositMoney();
void withdrawMoney();
void changePassword();

int main()
{

    int choice;
    data();
    do
    {
        printf("\n\n=====BANK MANAGEMENT SYSTEM =====");
        printf("\n1.Display");
        printf("\n2.Deposit Money");
        printf("\n3.Withdraw Money");
        printf("\n4.Change Password");
        printf("\n5.Exit");

        printf("\nEnter Your Choice :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            displayAccount();
            break;

        case 2:
            depositMoney();
            break;

        case 3:
            withdrawMoney();
            break;

        case 4:
            changePassword();
            break;

        case 5:
            printf("\nThank You...");
            exit(0);
            break;

        default:
            printf("\nInvalid Choice!");
            break;
        }
    } while (choice != 5);

    return 0;
}

void data()
{
    FILE *fp;
    fp = fopen("bank.txt", "w");
    if (fp == NULL)
    {
        printf("file Cannot Open!");
    }
    fprintf(fp, "%d %s %d %s", accNo, name, balance, password);
    fclose(fp);
}

void displayAccount()
{
    FILE *fp;
    fp = fopen("bank.txt", "r");
    if (fp == NULL)
    {
        printf("File Not Found!");
    }
    fscanf(fp, "%d%s%d%s", &accNo, name, &balance, password);
    printf("\n-----Account Details-----");
    printf("\nAccount Number : %d", accNo);
    printf("\nAccount Holber : %s", name);
    printf("\nBalance        : %d", balance);
    fclose(fp);
}

void depositMoney()
{
    int amount;
    printf("\nEnter Deposit Amount :");
    scanf("%d", &amount);
    if (amount > 0)
    {
        balance = balance + amount;
        data();
        printf("Deposite Successful.");
        printf("\nCurrent Balance :%d", balance);
    }
    else
    {
        printf("\nInvalid Amount.");
    }
}

void withdrawMoney()
{
    int amount;
    printf("\nEnter Withdraw Amount :");
    scanf("%d", &amount);
    if (amount <= balance)
    {
        balance = balance - amount;
        data();
        printf("Withdrawal Successful.");
        printf("\nCurrent Balance : %d", balance);
    }
    else
    {
        printf("Low Balance.");
    }
}

void changePassword()
{
    char oldpass[20], newpass[20];
    printf("Enter Old Password :");
    scanf("%s", oldpass);

    if (strcmp(oldpass, password) == 0)
    {
        printf("Enter New Password :");
        scanf("%s", newpass);
        strcpy(password, newpass);
        data();
        printf("Password Changed Successfully.");
    }
    else
    {
        printf("Incorrect Old Password.");
    }
}
