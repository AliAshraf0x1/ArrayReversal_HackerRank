/*
*By:- Ali Ashraf
*aliashrafali0155239@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    for(i = num; i >0; i--)
        printf("%d ", *(arr + (i-1)));
printf("\n");
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}