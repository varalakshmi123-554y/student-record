#include <stdio.h>
#include <stdlib.h>
#include "header2.h"
int main() 
{
    student *head = NULL;
    char choice;
    loadRecords(&head);

    while(1) 
    {
        printf("\nSTUDENT RECORD MENU\n");
        printf("a/A : Add new record\n");
        printf("d/D : Delete a record\n");
        printf("s/S : Show the list\n");
        printf("m/M : Modify a record\n");
        printf("v/V : Save records\n");
        printf("t/T : Sort records\n");
        printf("l/L : Delete all records\n");
        printf("r/R : Reverse the list\n");
        printf("e/E : Exit\n");
        printf("Enter choice: ");
        scanf(" %c", &choice);

        switch(choice) 
        {
            case 'a': case 'A': addRecord(&head); break;
            case 'd': case 'D': deleteRecord(&head); break;
            case 's': case 'S': showRecords(head); break;
            case 'm': case 'M': modifyRecord(&head); break;
            case 'v': case 'V': saveRecords(head); break;
            case 't': case 'T': sortRecords(&head); break;
            case 'l': case 'L': deleteAll(&head); break;
            case 'r': case 'R': reverseList(&head); break;
            case 'e': case 'E':
                printf("Save before exit? (y/n): ");
                char ex;
                scanf(" %c", &ex);
                if(ex=='y'||ex=='Y') saveRecords(head);
                deleteAll(&head);
                exit(0);
            default: printf("Invalid choice!\n");
        }
    }
}
