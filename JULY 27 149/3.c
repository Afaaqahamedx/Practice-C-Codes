#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *read, *write;

struct mystruct
{
    char name[20];
    long long int accNo;
    int bal;
};

struct mystruct printData(struct mystruct temp1)
{
    fprintf(write,"\nStudent name : %s", temp1.name);
    fprintf(write,"\nAcc- no.: %lld", temp1.accNo);
    fprintf(write,"\nBalance : %d", temp1.bal);
}

void funct1(struct mystruct holder1[5])
{
    fprintf(write,"\n\n\nPrinting details of acc of balance below 100");
    for (int k = 0; k < 5; k++)
    {
        if (holder1[k].bal < 100)
        {
            printData(holder1[k]);
        }
    }
}

void funct2(struct mystruct holder2[5])
{
    long long int acc_no;
    int wd;
    printf("\nWithdrawal process");
    printf("\nEnter the account no. : ");
    scanf("%lld", &acc_no);

    for (int k = 0; k < 5; k++)
    {
        if (holder2[k].accNo == acc_no)
        {
            if (holder2[k].bal < 100)
            {
                printf(write,"\nInsufficient balance");
            }
            else
            {

                printf("\nEnter the withdrawal amt :");
                scanf("%d", &wd);
                holder2[k].bal = holder2[k].bal - wd;
                fprintf(write,"\n\n\nUpdated datails :");
                printData(holder2[k]);
            }
        }
    }
}

void funct3(struct mystruct holder3[5])
{
    long long int acc_no;
    int dep;
    printf("\nDeposit process");
    printf("\nEnter the account no. : ");
    scanf("%lld", &acc_no);

    for (int k = 0; k < 5; k++)
    {
        if (holder3[k].accNo == acc_no)
        {
            printf("\nEnter the deposit amt :");
            scanf("%d", &dep);
            holder3[k].bal = holder3[k].bal + dep;
            fprintf(write,"\n\n\nUpdated datails :");
            printData(holder3[k]);
        }
    }
}

int main()
{
    struct mystruct holder[5];

    read = fopen("data3.txt", "r");
    write = fopen("result3.txt", "w");

    for (int i = 0; i < 5; i++)
    {
        // printf("\nEnter the Acc. holder name:");
        fscanf(read, "%s", &holder[i].name);
        // printf("\nEnter the Acc-no. : ");
        fscanf(read, "%lld", &holder[i].accNo);
        // printf("\nEnter the balance : ");
        fscanf(read, "%d", &holder[i].bal);
    }

    printf("\n*Printing student details *\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nS.no : %d", i + 1);
        printData(holder[i]);
    }
    int key;
    printf("\n1.Amt<100");
    printf("\n2.Withdrawal form");
    printf("\n3.deposit");

    printf("\n Enter your choice :");
    scanf("%d", &key);

    switch (key)
    {
    case 1:
        funct1(holder);
        break;
    case 2:
        funct2(holder);
        break;
    case 3:
        funct3(holder);
        break;
    default:
        printf("\nwrong entry ");
    }
}