////p)  Accept a C program through the keyboard and write it in a file. Consider the $ sign as the end of input. Compile that C program as well.
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h> // for system()
//
//void main() {
//    FILE *fp;
//    char ch;
//
////    clrscr();
//
//    fp = fopen("test.c", "w");
//    if (fp == NULL) {
//        printf("Error opening file!\n");
//        return;
//    }
//
//    printf("Enter your C program (end with $):\n");
//
//    while ((ch = getchar()) != '$') {
//        fputc(ch, fp);
//    }
//
//    fclose(fp);
//
//    printf("\nProgram saved to test.c\n");
//
//    // Compile the file using GCC
//    system("gcc test.c -o testprog");
//
//    // Run the compiled program
//    system("testprog");
//
//    getch();
//}

////FILE, fopen, printf, getchar(), gcc prog.c -o progprog, system


////FILE-HANDLING
////q) Accept a record consisting of Roll No. (number only), name, blood group, city from the user and store it in the file.
////The program should terminate when the user is not willing to enter more records.
//
//
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//
//void main() {
//    FILE *fp;
//    int roll;
//    char name[50], blood[10], city[50];
//    char choice;
//
//    fp = fopen("student_records.txt", "w");  // open file in write mode
//    if (fp == NULL) {
//        printf("Error opening file!\n");
////        return 1;
//    }
//
//    do {
//        printf("Enter Roll No.: ");
//        scanf("%d", &roll);
//
//        printf("Enter Name: ");
//        scanf("%s", name);
//
//        printf("Enter Blood Group: ");
//        scanf("%s", blood);
//
//        printf("Enter City: ");
//        scanf("%s", city);
//
//        // write record into file
//        fprintf(fp, "%d %s %s %s\n", roll, name, blood, city);
//
//        printf("Do you want to enter another record? (y/n): ");
//        scanf(" %c", &choice);  // space before %c to consume newline
//
//    } while (choice == 'y' || choice == 'Y');
//
//    fclose(fp);
//    printf("Records saved successfully in student_records.txt\n");
//
//    getch();
//}
//
//
////r) STRUCTURE
//#include <stdio.h>
//#include <conio.h>
//
//struct student_data {
//    int roll;
//    char name[50];
//    int physics, maths, chemistry;
//    int total;
//};
//
//void main() {
//    struct student_data student;
//
//    printf("Enter Roll No.: ");
//    scanf("%d", &student.roll);
//
//    printf("Enter Name: ");
//    scanf("%s", student.name);
//
//    printf("Enter Physics Marks: ");
//    scanf("%d", &student.physics);
//
//    printf("Enter Maths Marks: ");
//    scanf("%d", &student.maths);
//
//    printf("Enter Chemistry Marks: ");
//    scanf("%d", &student.chemistry);
//
//    // calculate total
//    student.total = student.physics + student.maths + student.chemistry;
//
//    // display all info
//    printf("\n--- Student Information ---\n");
//    printf("Roll No.: %d\n", student.roll);
//    printf("Name: %s\n", student.name);
//    printf("Physics: %d\n", student.physics);
//    printf("Maths: %d\n", student.maths);
//    printf("Chemistry: %d\n", student.chemistry);
//    printf("Total Marks: %d\n", student.total);
//
//    getch();
//}


////STRUCTURE+SORTING
////s) A record contains the name of a cricketer, his age, the number of test matches that he has played and the average runs that he has scored in each test match.
////Create an array of structure to hold records of 10 such cricketers and store some data in it. Write a program to arrange them in ascending order by average runs.
//
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//
//struct cricketer {
//    char name[50];
//    int age;
//    int matches;
//    float avg_runs;
//};
//
//void main() {
//    struct cricketer players[10] = {
//        {"Virat", 34, 105, 55.2},
//        {"Sachin", 47, 200, 53.8},
//        {"Dhoni", 42, 90, 38.5},
//        {"Dravid", 52, 164, 52.3},
//        {"Sehwag", 46, 104, 49.3},
//        {"Kohli", 34, 111, 57.1},
//        {"Rohit", 36, 55, 46.2},
//        {"Kapil", 66, 131, 27.5},
//        {"Gabbar", 75, 125, 51.1},
//        {"Yuvraj", 43, 40, 34.7}
//    };
//
//    int i, j;
//    struct cricketer temp;
//
//    // Sorting by avg_runs (ascending)
//    for (i = 0; i < 10 - 1; i++) {
//        for (j = i + 1; j < 10; j++) {
//            if (players[i].avg_runs > players[j].avg_runs) {
//                temp = players[i];
//                players[i] = players[j];
//                players[j] = temp;
//            }
//        }
//    }
//
//    // Display sorted records
//    printf("Cricketers sorted by average runs (ascending):\n");
//    printf("Name\t \tAge\t \tMatches\t \tAverage Runs\n");
//    printf("--------------------------------------------\n");
//
//    for (i = 0; i < 10; i++) {
//        printf("%s\t \t%d\t \t%d\t \t%.2f\n",
//               players[i].name,
//               players[i].age,
//               players[i].matches,
//               players[i].avg_runs);
//    }
//
//    getch();
//}


////ARRAY OF POINTERS
////t)  Accept and print later on three book names using an array of pointers.
//
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void main() {
//    char *books[3];   // array of 3 string pointers
//    char temp[100];   // temporary buffer
//    int i;
//
////    clrscr();   // clear screen (Turbo C specific)
//
//    // Accept book names
//    for (i = 0; i < 3; i++) {
//        printf("Enter name of book %d: ", i + 1);
//        scanf("%s", temp);
//
//        // allocate memory for each book name
//        books[i] = (char *)malloc(strlen(temp) + 1);
//        strcpy(books[i], temp);
//    }
//
//    // Print book names later
//    printf("\n--- Book Names ---\n");
//    for (i = 0; i < 3; i++) {
//        printf("%s\n", books[i]);
//        free(books[i]);  // free allocated memory
//    }
//    getch();   // wait for key press before closing
//}
