////C Code to Swap Two Numbers (using a temporary variable)
////a)  Swap two numbers.
//#include <stdio.h>
//#include <conio.h>
//
//void main() {
//    int a, b, temp;
//
//    // Input two numbers
//    printf("Enter first number: ");
//    scanf("%d", &a);
//
//    printf("Enter second number: ");
//    scanf("%d", &b);
//
//    // Show before swapping
//    printf("\nBefore swapping: a = %d, b = %d\n", a, b);
//
//    // Swap using a temporary variable
//    temp = a;
//    a = b;
//    b = temp;
//
//    // Show after swapping
//    printf("After swapping: a = %d, b = %d\n", a, b);
//
//    getch();
//}


////Alternate Crest: Swap Without a Temporary Variable
//
////You can also swap using arithmetic:
////a = a + b;
////b = a - b;
////a = a - b;
//
////This works because:
////- First line makes a the sum of both.
////- Second line subtracts b from the sum, leaving the original a.
////- Third line subtracts the new b from the sum, leaving the original b.
////But the temporary variable method is safer and clearer.
////
////Would you like me to also show you how to wrap this swap logic into a function (like void swap(int *x, int *y)) so you can reuse it across multiple .c files? That’s the next badge in modular C programming.
//
//#include <stdio.h>
//#include <conio.h>
//
//void main() {
////    int a, b;
//      float a,b;
//    // Input two numbers
//    printf("Enter first number: ");
////    scanf("%d", &a);
//    scanf("%f", &a);
//
//    printf("Enter second number: ");
////    scanf("%d", &b);
//    scanf("%f", &b);
//
//    // Show before swapping
////    printf("\nBefore swapping: a = %d, b = %d\n", a, b);
//    printf("\nBefore swapping: a = %f, b = %f\n", a, b);
//
//    // Swap using a temporary variable
//    a = a + b;
//    b = a - b;
//    a = a - b;
//
//
//    // Show after swapping
////    printf("After swapping: a = %d, b = %d\n", a, b);
//    printf("After swapping: a = %f, b = %f\n", a, b);
//    getch();
//}
//
////Floating-point Precision Error observed while using the float datatype


////Leap Year Program (TurboC style)
////b)  Any year is entered through the keyboard, write a program to determine whether the year is a leap year or not.
//#include <stdio.h>
//#include <conio.h>
//
//void main() {
//    int year;
//
////    clrscr(); // clears the screen (from conio.h) only in turboC
//
//    printf("Enter a year: ");
//    scanf("%d", &year);
//
//    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
//        printf("%d is a leap year.\n", year);
//    } else {
//        printf("%d is not a leap year.\n", year);
//    }
//
//    getch(); // waits for a key press before closing
//}


////c)  Print the sum of all integers from 1 to 100, which are divisible by 3 and 13.
//#include <stdio.h>
//#include <conio.h>
//
//void main() {
//    int i, sum = 0;
//
////    clrscr(); // clear screen
//
//    for (i = 1; i <= 100; i++) {
//        if (i % 3 == 0 && i % 13 == 0) {
//            sum += i;
//        }
//    }
//
//    printf("Sum of integers from 1 to 100 divisible by 3 and 13 = %d", sum);
//
//    getch(); // wait for key press
//}



////Generalized program
//#include <stdio.h>
//#include <conio.h>
//
//void main() {
//    int end, n, i, j, sum = 0;
//    int divisors[20]; // array to hold divisors (max 20 for demo)
//
////    clrscr();
//
//    // Input endpoint
//    printf("Enter the endpoint: ");
//    scanf("%d", &end);
//
//    // Input number of divisors
//    printf("Enter how many divisors: ");
//    scanf("%d", &n);
//
//    // Input divisors
//    printf("Enter the divisors:\n");
//    for (i = 0; i < n; i++) {
//        scanf("%d", &divisors[i]);
//    }
//
//    // Loop through numbers from 1 to endpoint
//    for (i = 1; i <= end; i++) {
//        int divisible = 1; // assume true
//        for (j = 0; j < n; j++) {
//            if (i % divisors[j] != 0) {
//                divisible = 0; // fails divisibility
//                break;
//            }
//        }
//        if (divisible) {
//            sum += i;
//        }
//    }
//
//    // Output result
//    printf("Sum of numbers up to %d divisible by all given divisors = %d\n", end, sum);
//
//    getch();
//}
//
//
////Sum of Divisors using User-Defined Functions
//#include <stdio.h>
//#include <conio.h>
//
//// Function to compute GCD (Greatest Common Divisor)
//int gcd(int a, int b) {
//    while (b != 0) {
//        int temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//}

//// Function to compute LCM of two numbers
//int lcm(int a, int b) {
//    return (a * b) / gcd(a, b);
//}
//
//void main() {
//    int end, n, i;
//    int divisors[20], lcm_val, sum = 0;
//
//    // Input endpoint
//    printf("Enter the endpoint: ");
//    scanf("%d", &end);
//
//    // Input number of divisors
//    printf("Enter how many divisors: ");
//    scanf("%d", &n);
//
//    // Input divisors
//    printf("Enter the divisors:\n");
//    for (i = 0; i < n; i++) {
//        scanf("%d", &divisors[i]);
//    }
//
//    // Compute LCM of all divisors
//    lcm_val = divisors[0];
//    for (i = 1; i < n; i++) {
//        lcm_val = lcm(lcm_val, divisors[i]);
//    }
//
//    // Sum multiples of LCM up to endpoint
//    for (i = lcm_val; i <= end; i += lcm_val) {
//        sum += i;
//    }
//
//    // Output result
//    printf("Sum of numbers up to %d divisible by all given divisors = %d\n", end, sum);
//
//    getch();
//}


////d)  Print the sum of 1st n odd nos. e.g. if the user inputs 3, the answer will be 9.
//#include <stdio.h>
//#include <conio.h>
//
//void main() {
//    int n, sum = 0, i;
//
//    printf("Enter how many odd numbers to sum: ");
//    scanf("%d", &n);
//
//    // Method 1: Using formula
//    sum = n * n;
//    printf("Sum of first %d odd numbers = %d\n", n, sum);
//
//    // Method 2: Using loop (for clarity)
//    sum = 0;
//    for (i = 1; i <= n; i++) {
//        sum += (2 * i - 1);  // odd number formula
//    }
//    printf("Sum using loop = %d\n", sum);
//
//    getch();
//}


////e)  Check whether a given no. is a palindrome or not. e.g. 12321.
//#include <stdio.h>
//#include <conio.h>
//
//void main() {
//    int n, original, rev = 0, digit;
//
////    clrscr();   // clear the screen
//
//    printf("Enter a number: ");
//    scanf("%d", &n);
//
//    original = n;
//
//    while (n > 0) {
//        digit = n % 10;           // extract last digit
//        rev = rev * 10 + digit;   // build reversed number
//        n = n / 10;               // remove last digit
//    }
//
//    if (original == rev) {
//        printf("%d is a palindrome.\n", original);
//    } else {
//        printf("%d is NOT a palindrome.\n", original);
//    }
//
//    getch();   // wait for key press before closing
//}


////f)  Find out whether a given no. is a perfect no. or not.
////If the sum of factors up to half of a given number = the given number. itself then no. is perfect no. e.g. 6=1+2+3=6
//#include <stdio.h>
//#include <conio.h>
//
//void main() {
//    int n, i, sum = 0;
//
////    clrscr();   // clear screen
//
//    printf("Enter a number: ");
//    scanf("%d", &n);
//
//    // find sum of factors up to n/2
//    for (i = 1; i <= n/2; i++) {
//        if (n % i == 0) {
//            sum += i;
//        }
//    }
//
//    if (sum == n) {
//        printf("%d is a Perfect Number.\n", n);
//    } else {
//        printf("%d is NOT a Perfect Number.\n", n);
//    }
//
//    getch();   // wait for key press
//}


////g)  Find out the factors of a given no.  e.g. 6-1,2,3,6.
//#include <stdio.h>
//#include <conio.h>
//
//void main() {
//    int n, i;
//
////    clrscr();   // clear screen
//
//    printf("Enter a number: ");
//    scanf("%d", &n);
//
//    printf("Factors of %d are: ", n);
//    for (i = 1; i <= n; i++) {
//        if (n % i == 0) {
//            printf("%d ", i);
//        }
//    }
//
//    getch();   // wait for key press
//}


////h)  Check whether a given number is a prime number or not.
//#include <stdio.h>
//#include <conio.h>
//
//void main() {
//    int n, i, flag = 0;
//
////    clrscr();   // clear screen
//
//    printf("Enter a number: ");
//    scanf("%d", &n);
//
//    if (n <= 1) {
//        printf("%d is NOT a prime number.\n", n);
//    } else {
//        for (i = 2; i <= n/2; i++) {
//            if (n % i == 0) {
//                flag = 1;   // found a divisor
//                break;
//            }
//        }
//
//        if (flag == 0) {
//            printf("%d is a Prime Number.\n", n);
//        } else {
//            printf("%d is NOT a Prime Number.\n", n);
//        }
//    }
//
//    getch();   // wait for key press
//}


////i)  Accept 5 values from the user and store them in an array. Print all even elements of the array
//#include <stdio.h>
//#include <conio.h>
//
//void main() {
//    int arr[5], i;
//
////    clrscr();   // clear screen
//
//    printf("Enter 5 integers:\n");
//    for (i = 0; i < 5; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    printf("\nEven elements in the array are:\n");
//    for (i = 0; i < 5; i++) {
//        if (arr[i] % 2 == 0) {
//            printf("%d ", arr[i]);
//        }
//    }
//
//    getch();   // wait for key press
//}


////j)  Accept the age of 10 people and store them in an array.
////Print "Eligible" or "Not Eligible" based on the age for all people. The voting age is 18 years and above.
//#include <stdio.h>
//#include <conio.h>
//
//void main() {
//    int age[10], i;
//
////    clrscr();   // clear screen
//
//    printf("Enter ages of 10 people:\n");
//    for (i = 0; i < 10; i++) {
//        scanf("%d", &age[i]);
//    }
//
//    printf("\nVoting Eligibility Results:\n");
//    for (i = 0; i < 10; i++) {
//        if (age[i] >= 18) {
//            printf("Person %d (Age %d): Eligible\n", i + 1, age[i]);
//        } else {
//            printf("Person %d (Age %d): Not Eligible\n", i + 1, age[i]);
//        }
//    }
//
//    getch();   // wait for key press
//}
