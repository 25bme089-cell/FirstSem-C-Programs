////k)  WAP to calculate the length of the string and convert the string to uppercase, lowercase and toggle case.
////Accept the string from the user.
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//#include <ctype.h>
//
//void main() {
//    char str[100];
//    char upper[100], lower[100], toggle[100];
//    int i;
//
////    clrscr();
//
//    printf("Enter a string: ");
//    gets(str);  // Turbo C style input
//
//    // Make copies so we don't overwrite the original prematurely
//    strcpy(upper, str);
//    strcpy(lower, str);
//    strcpy(toggle, str);
//
//    // Length
//    printf("\nLength of string: %d", strlen(str));
//
//    // Uppercase and lowercase (Turbo C has strupr/strlwr)
//    printf("\nUppercase: %s", strupr(upper));
//    printf("\nLowercase: %s", strlwr(lower));
//
//    // Toggle case using ctype for safety
//    for (i = 0; toggle[i] != '\0'; i++) {
//        if (isupper(toggle[i])) {
//            toggle[i] = tolower(toggle[i]);
//        } else if (islower(toggle[i])) {
//            toggle[i] = toupper(toggle[i]);
//        } // non-alphabetic characters remain unchanged
//    }
//
//    printf("\nToggle case: %s", toggle);
//
//    getch();
//}
//--------------------------------------------------------------------


////l)  WAP to reverse the string without using the inbuilt function.
//#include <stdio.h>
//#include <conio.h>
//
//void main() {
//    char str[100];
//    int i, j;
//    char temp;
//
////    clrscr();   // clear screen
//
//    printf("Enter a string: ");
//    gets(str);   // Turbo C style input
//
//    // find length manually
//    for (j = 0; str[j] != '\0'; j++);
//
//    // reverse string manually
//    for (i = 0, j = j - 1; i < j; i++, j--) {
//        temp = str[i];
//        str[i] = str[j];
//        str[j] = temp;
//    }
//
//    printf("\nReversed string: %s", str);
//
//    getch();   // wait for key press
//}
////gets(str), char
//----------------------------------------------------


////m)  WAP to copy the content of one string to another.
//#include <stdio.h>
//#include <conio.h>
//
//void main() {
//    char str1[100], str2[100];
//    int i;
//
////    clrscr();   // clear screen
//
//    printf("Enter a string: ");
//    gets(str1);   // input string
//
//    // manual copy
//    for (i = 0; str1[i] != '\0'; i++) {
//        str2[i] = str1[i];
//    }
//    str2[i] = '\0';   // terminate copied string
//
//    printf("\nOriginal string: %s", str1);
//    printf("\nCopied string: %s", str2);
//
//    getch();   // wait for key press
//}

//---------------------- OR ---------------------------
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//
//void main() {
//    char str1[100], str2[100];
//
////    clrscr();   // clear screen
//
//    printf("Enter a string: ");
//    gets(str1);   // input string
//
//    // copy using built-in function
//    strcpy(str2, str1);
//
//    printf("\nOriginal string: %s", str1);
//    printf("\nCopied string: %s", str2);
//
//    getch();   // wait for key press
//}
////strcpy(dest,src)


////n)  WAP to compare two strings.
////manual
//#include <stdio.h>
//#include <conio.h>
//
//void main() {
//    char str1[100], str2[100];
//    int i, flag = 0;
//
////    clrscr();   // clear screen
//
//    printf("Enter first string: ");
//    gets(str1);
//
//    printf("Enter second string: ");
//    gets(str2);
//
//    // manual comparison
//    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
//        if (str1[i] != str2[i]) {
//            flag = 1;   // mismatch found
//            break;
//        }
//    }
//
//    if (flag == 0) {
//        printf("\nStrings are EQUAL.");
//    } else {
//        printf("\nStrings are NOT EQUAL.");
//    }
//
//    getch();   // wait for key press
//}

////-------------------------- OR -------------------------------

////built-in function
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//
//void main() {
//    char str1[100], str2[100];
//
////    clrscr();
//
//    printf("Enter first string: ");
//    gets(str1);
//
//    printf("Enter second string: ");
//    gets(str2);
//
//    if (strcmp(str1, str2) == 0) {
//        printf("\nStrings are EQUAL.");
//    } else {
//        printf("\nStrings are NOT EQUAL.");
//    }
//
//    getch();
//}
////strcmp(s1,s2)


////o)  Accept a string from the user. Sort the string lexicographically.
////And write the original string and the sorted string in a file with your roll no. as a file name.
////e.g. if a string is Gandhinagar, after sorting it would be aaadgghinnr. Ignore the case.
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//#include <ctype.h>
//
//void main() {
//    char str[100], sorted[100], temp;
//    int i, j;
//    FILE *fp;
//
////    clrscr();
//
//    printf("Enter a string: ");
//    gets(str);
//
//    // copy original string into sorted
//    strcpy(sorted, str);
//
//    // convert to lowercase for case-insensitive sorting
//    for (i = 0; sorted[i] != '\0'; i++) {
//        sorted[i] = tolower(sorted[i]);
//    }
//
//    // bubble sort
//    for (i = 0; sorted[i] != '\0'; i++) {
//        for (j = i + 1; sorted[j] != '\0'; j++) {
//            if (sorted[i] > sorted[j]) {
//                temp = sorted[i];
//                sorted[i] = sorted[j];
//                sorted[j] = temp;
//            }
//        }
//    }
//
//    printf("\nOriginal string: %s", str);
//    printf("\nSorted string: %s", sorted);
//
//    // write to file (replace 123 with your roll number)
//    fp = fopen("25bme089.txt", "w");
//    if (fp == NULL) {
//        printf("\nError opening file!");
//    } else {
//        fprintf(fp, "Original string: %s\n", str);
//        fprintf(fp, "Sorted string: %s\n", sorted);
//        fclose(fp);
//        printf("\nData written to file 25bme089.txt successfully.");
//    }
//
//    getch();
//}
