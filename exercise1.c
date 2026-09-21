#include <stdio.h>
/*program 1*/

// int main()
// {
//     int i = 7, j = 2;
//     if (i == 7)
//     {
//         if (j == 2)
//         {
//             printf("%d\n", i = i + j);
//             printf("%d\n", i = i - j);
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

/*program 2*/
#define LIMIT 100

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    switch (n)
    {
    case LIMIT - 1:
        printf("slightly less");
        break;
    case LIMIT:
        printf("exact");
        break;
    case LIMIT + 1:
        printf("slightly high");
        break;
    default:
        printf("Too far\n");
        break;
    }
    return 0;
}