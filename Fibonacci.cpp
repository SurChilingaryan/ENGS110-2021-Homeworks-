#include <stdio.h>

int Fibonacci(int age)
{
    int n1 = 0;
    int n2 = 1;
    int sum = 0;
    int b = 0;
    while (n2 < age)
    {
	sum = sum + n2;
        b = n2;
        n2 = n1 + n2;
        n1 = b;
    }
    printf("Your sum is %d\n", sum);
    return sum;
}
void binary(int num)
{
    int c;
    printf("\nBinary representation of the sum:");
    int b = 32;
    while(b >= 0)
    {
        c = num >> b;
        if(c & 1)
            printf("1");
        else
            printf("0");
        b--;
    }
    printf("\n");
}

int main()

{ 
	int age;
	printf ("Please enter your age ");
        scanf ("%d", &age);
        binary(Fibonacci(age));
        printf ("\n");
        return age;
}
