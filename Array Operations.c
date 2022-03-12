#include <stdio.h>

int choice, num, pos1, pos;
int MAX = 10;
int arr[10] = {NULL};
int ptr=-1;
int i = 0;

void insert();
void dele();
void location();
void display();

int main()
{
    while (1)
    {
        printf("CHoose for: \n 1.Insert  2.Delete  3.Location   4.Display  5.Exit \n ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            dele();
            break;
        case 3:
            location();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Please Enter the correct choice \n");
            break;
        }
    }
}

void insert()
{
    if (arr[MAX - 1] != NULL)
    {
        printf("Array is filled \n");
        return;
    }
    else
    {
        printf("Enter the number to be inserted \n");
        scanf("%d", &num);
        printf("Enter the position b/w 0 to %d at which number is to be inserted \n", ptr + 1);
        scanf("%d", &pos);

        if (pos > ptr+1)
        {
            printf("Please choose a position b/w 0 to %d \n", ptr + 1);
            insert();
        }
        else if (ptr == -1)
        {
            arr[0] = num;
            printf("Element inserted \n \n");
            ptr = ptr + 1;
        }
        else
        {
            for (i = ptr + 1; i >= pos - 1; i--)
            {
                arr[i + 1] = arr[i];
            }
            arr[pos] = num;
            printf("Element inserted \n \n");
            ptr = ptr + 1;
        }
    }
}

void dele()
{
    if (ptr == -1)
    {
        printf("Array is Empty \n \n");
    }
    else
    {
        printf("Enter the position for which element is to be deleted \n");
        scanf("%d", &pos1);

        if (pos1 > ptr)
        {
            printf("Please choose a valid position \n");
            return;
        }
        else
        {
            for (i = pos1; i <= ptr + 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            printf("Element at position %d deleted. \n", pos1);
            ptr = ptr - 1;
            return;
        }
    }
}

void location()
{
    printf("Enter the number whose location is to be found: \n");
    scanf("%d", &num);

    for (i = 0; i < MAX - 1; i++)
    {
        if (arr[i] == num)
        {
            printf("Element %d found in Array at index number: %d \n \n", num, i);
            
            return;
        }
   }
    printf("Element not in array \n");
}

void display()
{
    if (ptr == -1)
    {
        printf("Array is Empty \n");
    }
    else{
        for (i = 0; i < ptr+1; i++)
        {
            printf("%d \n", arr[i]);
        }
    }
}

