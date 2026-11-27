# Chapter 1 - A Tutorial Introduction

This book used C89, so use `cc -std=c99 -Wall -Wextra -pedantic filename.c -o filename` when compiling
- `cc`: the C compiler
- `-std=c99`: compile according to the C99 standard. The compiler will reject or warn about things that aren't valid C99.
- `-Wall`: turn on a large set of common warnings (despite the name, not literally all), such as unused varibles or suspicious code.
- `-Wextra`: turn on additional warnings beyound `-Wall`, such as unused function parameters or comparisions between signed and unsigned values.
- `-pedantic`: warn when your code uses compiler-specific extensions or breaks strict standard rules, so you stick to portable C.

## 1.1 Getting Started

- A function contains statements that specify the computing operations to be done
- Variables store values used during the computation

`main`
- Normally, You can give functions whatever names you like but `main` is special
- Your program begins executing at the beginning of main. This means that every program must have a `main` somewhere.
- When you run a C program, the OS(not sure if it's OS that calls `main` but you get the point) first searches the main function and starts executing from there.

`#include <stdio.h>`
- It tells the compiler to include information about the standard input/output library.

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

## 1.4 Symbolic Constants

- One way to deal with magic numbers is to give them meaningful names. A `#define` line defines a symbolic name or symbolic constant to be a particular string of characters
`#define name replacement list`
- Thereafter, any occurence of name (not in quotes and not part of another name) will be replaced by the corresponding replacement text.
- Symbolic constant names are conventionally written in upper case so they can be readily distinguished from lower case variable names.
Notice that there is no semicolon at the end of a #define line.

## 1.5 Character Input and Output

The model of input and output supported by the standard library is very simple.
- Text input or output, regardless of where it originates or where it goes to, is dealt with as stream of characters.
- A `text stream` is a sequence of characters divided into lines; each line consists of zero or more characters followed by a newline character.
- It is the responsibility of the library to make each input or output stream confirm this model; the C programmer using the library need not worry about how lines are represented outside the program.

`getchar`
- Each time it is called, `getchar` reads the next input character from the text stream and returns that as its value. That is, after
`c = getchar();`
- the variable c contains the next character of input.

`putchar`
- the function `putchar` prints a character each time it is called:
`putchar(c);`
- prints the contents of the integer variable c as a character, usually on the screen.

### 1.5.1 File Copying

A program that copies its input to its output one character at a time:
````
read a character
while (character is not end-of-file indicator)
    output the character just read
    read a character
````

Converting this into C gives:
````c
#include <stdio.h>

// copy input to output; 1st version
int main() {
	int c = getchar();

	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}
````
We used int for a subtle but important reason.
- The problem is distinguishing the end of input from valid data.
- The solution is that `getchar` returns a distinctive value when there is no more input, a value that cannot be confused with any real character.
- The value is called EOF, for "end of file".
- We must declare c to be a type big enough to hold any value that `getchar` returns.
- We can't use `char` since c must be big enough to hold EOF in addition to any possible char. Therefore we use int.

EOF
- EOF is an integer defined in `<stdio.h>`, but the specific numeric value doesn't matter as long as it is not the same as any char value. 
- By using the symbolic constant, we are assured that nothing in the program depends on the specific numeric value.

````c
#include <stdio.h>

// copy input to output; 2nd version
int main() {
	int c;
	
	while ((c = getchar()) != EOF)
		putchar(c);
}
````

### 1.5.2 Character Counting

- `long` integers are at least 32 bits. Although on some machines, `int` and `long` are the same size.
- So `long` >= `int`
-The conversion specification `%ld` tells `printf` that the corresponding argument is a `long` integer.

### 1.5.3 Line Counting

- The standard library ensures that an input text stream appears as a sequece of lines, each terminated by a new line. Hence, counting line is just ocunting newlines.

- A character written between single quotes represents an integer value equal to the numerical value of the character in the machines's character set. This is called a `character constant`, although it is just another way to write a small integer.
- So, for example, 'A' is a character constant; in the ASCII character set its value is 65, the internal representation of the character A. Of course, 'A' is preferred over 65; its meaning is obvious, and it is independent of a particular character set.

# 1.5.4 Word Counting

- '\t' is a visible representation of the tab character.
- && precendence is higher than || precedence.
- Expressions connected by && or || are evaluated left to right, and it is guarenteed that evaluation will stop as soon as the truth or falsehood is known (short circuit).
