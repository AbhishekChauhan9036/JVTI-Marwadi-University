/*1. Write a program to print a mulplicaon table of a given number n.  */
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        ++i;
    }
    return 0;
}

/*2. Write a program to print a mulplicaon table of 10 in reversed order. */
#include <stdio.h>
int main()
{
    int n = 10;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}

/*3. A do while loop is executed:
a. At least once.
b. At least twice.
c. At most once.

At least once.   TRUE
*/

/*4. What can be done using one type of loop can also be done using the other two
types of loops – true or false?

TRUE
 */

/*5. Write a program to sum the first ten natural numbers using a while loop. */
#include <stdio.h>
int main()
{
    int sum = 0;
    int i = 1;
    while (i <= 10)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum of Natural Number is: %d", sum);
    return 0;
}

/*6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop. */
#include <stdio.h>
int main()
{
    int sum = 0, i = 1;
    do
    {
        sum = sum + i;
        i++;
    } while (i <= 10);
    printf("Sum of Natural Number is: %d", sum);
    return 0;
}

/*7. Write a program to calculate the sum of the numbers occurring in the
mul plica on table of 8. (consider 8 x 1 to 8 x 10). */
#include <stdio.h>
int main()
{
    int n = 8, sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + (n * i);
    }
    printf("%d\n", sum);
    return 0;
}

/*8. Write a program to calculate the factorial of a given number using a for loop. */

/*9. Repeat 8 using a while loop.  */

/*10. Write a program to check whether a given number is prime or not using loops. */

/*11. Implement 10 using other types of loops*/