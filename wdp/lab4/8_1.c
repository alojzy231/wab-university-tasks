#include <stdio.h>
#include <stdlib.h>

#define MAX 10 // Maksymalna wielkosc stosu

int stack[MAX]; // tablica stosu
int top;        // wierzcholek stosu
/* wyswietl stos */
void display(int[]);
/* push (wstaw) element na stos*/
void push(int[], int);
/* pop (usun) element ze stosu */
int pop(int[]);

int main()
{
    int item = 0;
    int choice = 0;
    top = 0;

    while (1)
    {
        printf("Wybierz (1: pokaz (display), 2: wstaw (push), 3: usun(pop)), 4: Koniec..: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            display(stack);
            break;
        case 2:
            printf("podaj liczbe ktora mam wstawic :");
            scanf("%d", &item);
            printf(" wstawiam %d\n", item);
            push(stack, item);
            break;
        case 3:
            pop(stack);
            break;
        case 4:
            exit(0);
        default:
            printf("\nZla opcja");
            break;
        }
    } // end of while(1)
}

void display(int stack[])
{
    int i;

    if (top == 0)
    {
        printf("Stos jest pusty.\n");
    }
    else
    {
        printf("Zawartosc stosu: ");
        for (i = top; i >= 1; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

void push(int stack[], int elem)
{
    if (top == MAX)
    {
        printf("Stos jest pelny. Nie można dodać elementu.\n");
    }
    else
    {
        top++;
        stack[top] = elem;
    }
}

int pop(int stack[])
{
    if (top == 0)
    {
        printf("Stos jest pusty. Nie można usunąć elementu.\n");
        return -1;
    }
    else
    {
        int popped = stack[top];
        top--;
        return popped;
    }
}

int is_empty(int stack[])
{
    if (top == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}