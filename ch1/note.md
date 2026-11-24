# Chapter 1 - A Tutorial Introduction
## 1.1 Getting Started

- A function contains statements that specify the computing operations to be done
- Variables store values used during the computation

`main`
- Normally, You can give functions whatever names you like but `main` is special
- Your program begins executing at the beginning of main. This means that every program must have a `main` somewhere.
- When you run a C program, the OS(not sure if it's OS that calls `main` but you get the point) first searches the main function and starts executing from there.

`#include <stdio.h>`
- It tells the compiler to include information aboout the standard input/output library.

`printf`
- is a library function that prints output, in this case the string of characters between the quotes
- A sequence of characters in double quotes, like "hello, world\n", is called a character string or string constant.
- The sequence `\n` in the string is C notation for the newline character, which when printed advances the output to the next line.

## 1.2 Variables and Arithmetic Expressions

- `printf` is not part of the C language; there is no input or output defined in C itself, `printf` is just a useful function from the standard library of functions that are normally accessible to C programs. The behaviour of printf is defined in the ANSI standard, however, so its properties should be the same with any compiler and library that conforms to the standard.

- If an arithmetic operator has one floating-point operand and one integer operand, the integer will  be converted to floating point before the operation is done.

| Format   | Description                                                      |
|----------|------------------------------------------------------------------|
| `%d`     | print as decimal integer                                         |
| `%6d`    | print as decimal integer, at least 6 characters wide             |
| `%f`     | print as floating point (default precision is 6 digits)          |
| `%6f`    | print as floating point, at least 6 characters wide              |
| `%.2f`   | print as floating point, 2 characters after decimal point        |
| `%6.2f`  | print as floating point, at least 6 wide and 2 after decimal point |

- `printf` also recognises %o for octal, %x for hexadecimal, %c for character, %s for character string and %% for itself.

## 1.3 The for statement
- within the parentheses, there are three parts, separated by semicolons.
1.The first part, the initialisation is done once, before the loop proper is entered.
2. The second part is the test or condition that controls the loop, the condition is evaluated; if it is true, the body of the loop is executed.
3. Then the increment step is ececuted, and the condition is re-evaluated.
- The `for` loop is usually appropriate for loops in which initialisation and increment are single statements and logically related, since it is more compact than while and it keeps the loop control the statements together in one place.
