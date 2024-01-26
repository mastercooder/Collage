// Q1. Write a program to take a input of name, roll NO, makrs and display the name roll no and marks.
// Q2 Write a prgram to print a given number is even or odd
// Q3 Write a program to print positive integer for 1 to 10.
// Q4 Write a C program that prompts the user to enter their age and checks whether they are  eligible to vote
//    or not. If the user's age is greater than or equal to 18 the program 'Congrachulatgion' you are elegable 
//    to voteshould print a message saying 'sorry you are no eligible to vote yet'.
// Q5 Write a prgram to find wheather the character is consonet or vovel using swith statement.
// Q6 Write a Program to Insult 5 element into an array and print the element of the array.
// Q7 Write a program to calulate factorial of a number?
// Q8 Faranhite to Celcious
// Q9 Write a program to print the table of a number entered by user?
// Q10 Write a C progarm to create, declare and initialize structure.



#include<stdio.h>

int main(){

    int query;

    while (1)
    {
        printf("Enter the number of question: ");
        scanf("%d", &query);

        switch (query)
        {
            case 1:
            {
                printf("\n");
                printf("Q1. Write a program to take a input of name, roll NO, makrs and display the name roll no and marks? \n");
                char name[10];
                int roll_no;
                int marks;

                printf("Enter your name: \n");
                scanf("%s", name);

                printf("Enter your roll no: \n");
                scanf("%d", &roll_no);

                printf("Enter your marks: \n");
                scanf("%d", &marks);

                printf("\n");
                printf("-------------------------------\n");
                printf("Your name is %s\n", name);
                printf("Your roll number is %d\n", roll_no);
                printf("Your marks is %d\n", marks);
                printf("-------------------------------\n");
                printf("\n");
                break;
            }

            case 2:
            {
                printf("\n");
                printf("Q2 Write a prgram to print a given number is even or odd?\n");

                int user;
                printf("Enter the number: ");
                scanf("%d", &user);

                if(user%2==0)
                {
                    printf("The number %d is an even number\n", user);
                }
                else{
                    printf("The number %d is a odd number\n", user);
                }
                break;
            }

            case 3:
            {
                printf("\n");
                printf("Q3 Write a program to print positive integer for 1 to 10.\n");
                printf("Positive number 1 to 10\n");
                printf("\n");
                printf("-----------\n");

                for (int i = 1; i <= 10; i++)
                {
                    printf("%d\n", i);
                }

                printf("-----------\n");
                printf("\n");
                
                printf("Numbe print +2\n");
                printf("\n");
                printf("\n");
                printf("-----------\n");

                for (int i = 1; i <= 10; i+=2)
                {
                    printf("%d\n", i);
                }

                printf("-----------\n");
                printf("\n");
            }

            case 4:
            {
                printf("Write a C program that prompts the user to enter their age and checks whether they are  eligible to vote \n");
                printf ("not. If the user's age is greater than or equal to 18 the program 'Congrachulatgion' you are elegable\n"); 
                printf("to voteshould print a message saying 'sorry you are no eligible to vote yet'?\n");
                printf("\n");
                int user;
                printf("Enter your age: ");
                scanf("%d", &user);

                if(user>=18)
                {
                    printf("Congrachulation you are elegable to vote\n");
                }
                else{
                    printf("You are not elegable to vote\n");
                }
                break;
            }

            case 5:
            {
                printf("\n");
                printf("Q5 Write a prgram to find wheather the character is consonet or vovel using swith statement ?\n");
                printf("\n");

                char user;
                printf("Enter the word: ");
                scanf(" %c", &user);

                switch (user)
                {
                    case 'a':
                    case 'e':
                    case 'i':
                    case 'o':
                    case 'u':
                    {
                        printf("It is a vovel\n");
                    }
                    default:
                        if ((user >= 'a' && user <= 'z'))
                        {
                            printf("%c is a consonant.\n", user);
                        }
                        else{
                            printf("Invalid input. Please enter a value alphabet.\n");
                        }
                        
                        break;
                }
            }

            case 6:
            {
                printf("\n");
                printf("Q6 Write a Program to Insult 5 element into an array and print the element of the array?\n");
                printf("\n");
                int size;
                printf("Enter the size of the array: ");
                scanf("%d", &size);

                int arr[size];

                for (int i = 0; i < size; i++)
                {
                    printf("Element : %d", i+1);
                    scanf("%d\n", &arr[i]);
                }

                printf(" Printing Array\n");
                printf("-----------------\n");
                for (int i = 0; i < size; i++)
                {
                    printf("%d\t", arr[i]);
                }
                break;
            }

            case 7:
            {
                printf("\n");
                printf("Q7 Write a program to calulate factorial of a number ?\n");
                printf("\n");

                int number;
                int fact = 1;

                printf("Enter the number: \n");
                scanf("%d", &number);

                for (int i = 1; i <= number; i++) {
                    fact *= i;
                }

                printf("The factorial is %d = %d", number, fact);
                break;
            }

            case 8:
            {
                printf("\n");
                printf("Q8 Faranhite to Celcious\n");
                printf("\n");

                float Fahrenheit, Celsius;

                printf("Enter temperature in Fahrenheit: \n");
                scanf("%d", &Fahrenheit);

                Celsius = (Fahrenheit -32) * 5 / 9;
    
                printf("The Celsius is : %2.f\n", Celsius);
                break;
            }

            case 9:
            {
                printf("\n");
                printf("Q9 Write a program to print the table of a number entered by user ?\n");
                printf("\n");

                int number;
                printf("Enter the number: \n");
                scanf("%d", &number);

                for (int i = 1; i <= 10; i++)
                {
                    printf("%d X %d = %d\n", number, i, number*i);
                }
                break;
            }

            
            
            default:
                printf("Something went wrong\n");
                break;
        }
    }

    return 0;
}