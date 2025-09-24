🔹 Program 1: Factorial Using Recursion AIM:

To write a program in C++ to calculate the factorial of a number using recursion.

Software Used:

Visual Studio Code (VS Code) with C++ compiler (MinGW or GCC).

Theory:

Factorial of a number n, represented as n!, is the product of all positive integers less than or equal to n. Recursion is a technique where a function calls itself. In this program, recursion is used to repeatedly call the factorial function until the base condition n <= 1 is met.

Algorithm:

Start the program.

Define a recursive function fact(n) that returns 1 if n <= 1, otherwise returns n * fact(n-1).

In main(), prompt the user to enter a number.

Pass this number to the recursive function.

Print the result.

End the program.

Conclusion:

The program successfully calculates the factorial of a number using recursion and demonstrates the concept of recursive function calls.

🔹 Program 2: Sum of Natural Numbers Using Recursion AIM:

To write a C++ program to calculate the sum of first n natural numbers using recursion.

Software Used:

Visual Studio Code (VS Code) with a C++ compiler.

Theory:

The sum of first n natural numbers is given by the formula n + (n-1) + (n-2) + ... + 1. Using recursion, the function continues to add n until the base condition (n <= 1) is reached. It then returns the accumulated result back through the recursive calls.

Algorithm:

Begin the program.

Define a recursive function add(n) which returns 1 if n <= 1, else returns n + add(n - 1).

In main(), prompt the user to input a number.

Call the add() function with the user input.

Display the sum.

End the program.

Conclusion:

The program accurately computes the sum of natural numbers using recursion, effectively illustrating recursive addition.

🔹 Program 3: Reverse a String Using Recursion AIM:

To write a program in C++ that reverses a given string using recursion.

Software Used:

Visual Studio Code (VS Code) with C++ compiler.

Theory:

A string is a sequence of characters. To reverse a string using recursion, the program accesses each character recursively, printing the last character first and so on until the base condition is met (null character). This avoids using loops or additional data structures.

Algorithm:

Start the program.

Define a function reverse(char* str) that:

Checks if the string is not empty.

Calls itself with the next character.

Prints the current character after the recursive call.

In main(), take input from the user.

Call the reverse() function.

Display the reversed string.

End the program.

Conclusion:

The program successfully reverses a string using recursion, demonstrating how recursion can be applied to character arrays.

🔹 Program 4: Reverse Digits of a Number Using Recursion AIM:

To write a C++ program that prints the digits of a number in reverse order using recursion.

Software Used:

Visual Studio Code (VS Code) with C++ compiler.

Theory:

This program uses recursion to reverse the digits of an integer. At each recursive call, the last digit of the number is printed using the modulus operator (% 10), and the remaining number is passed again into the function using integer division (/ 10) until the base case is met.

Algorithm:

Begin the program.

Define a function print_rev(i):

If i > 0, print i % 10.

Call print_rev(i / 10).

In main(), prompt the user to input a number.

Call print_rev() with that number.

End the program.

Conclusion:

The program correctly prints the digits of a number in reverse order using recursion, highlighting the usefulness of recursion in number processing.
