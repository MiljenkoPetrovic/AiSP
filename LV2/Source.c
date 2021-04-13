#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct elementi{
	int num;
	struct elementi *next;
}*stelement;

int generirajNiz();
void napraviListuElemenata(int arr[], int n);
void prikaziListu();

int main(void) {
    int n;
    
    printf(" Unesite broj elemenata : ");
    scanf("%d", &n);
    generirajNiz(n);
    napraviListuElemenata(array, n);
    printf("\n Podatci u listi : \n");
    prikaziListu();
    return 0;
}

int generirajNiz(int n){
    
    int* array = malloc(n * sizeof(int));
    srand(0);
    for (int i = 0; i < n; i++) {
        array[i]=rand();
    }

    return array;
}


void napraviListuElemenata(int arr[], int n)
{

    struct elementi* fnNode, * tmp;
    int num, i;
    stelement = (struct elementi*)malloc(sizeof(struct elementi));

    if (stelement == NULL) 
    {
        printf(" Memorija ne moze biti alocirana.");
    }
    else
    {
        int num = arr[0];
        stelement->num = num;
        stelement->next = NULL;
        tmp = stelement;
        
        for (i = 2; i <= n; i++)
        {
            fnNode = (struct elementi*)malloc(sizeof(struct elementi));
            if (fnNode == NULL)
            {
                printf(" Memorija ne moze biti alocirana.");
                break;
            }
            else
            {
                num = arr[i];

                fnNode->num = num;  
                fnNode->next = NULL; 

                tmp->next = fnNode; 
                tmp = tmp->next;
            }
        }
    }
}
void prikaziListu()
{
    struct elementi* tmp;
    if (stelement == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stelement;
        while (tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num);       
            tmp = tmp->next;                    
        }
    }
}


