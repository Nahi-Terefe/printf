> # _printf
---
> ## Authorized functions and macros
* `write (man 2 write)`
* `malloc (man 3 malloc)`
* `free (man 3 free)`
* `va_start (man 3 va_start)`
* `va_end (man 3 va_end)`
* `va_copy (man 3 va_copy)`
* `va_arg (man 3 va_arg)`
---
> ### Introduction

Project in which the operation of the printf `(_printf)` is simulated, which receives `string`, `single char`, `integer`, `decimals`, and the character percentage `(%)`

> ### Documentation

To use this function that simulates the printf, you must clone the repository `[printf](https://github.com/ch-canaza/printf)` to the repository where you are working, and you must include the contents of the folder holberton.h in your folder.h

A formatted output conversion C program completed as part of the low-level programming and algorithm track at ALX. The program is a pseudo- recreation of the C standard library function, printf.

> #### Synopsis

This repository holds all the code necessary for our custom _printf function to run. Our mini-version currently handles conversion specifiers: c, s, %, d, i, b, o and does not yet support field width, precision, flag characters, or length modifiers. Unique to our _printf is our r reverse conversion and the R rot13 conversion. In essence, you can print any character, string, integer, or decimal number, reverse your strings, transform any number to binary and octal bases, and encrypt your string with rot13 encryption.

#### Syntax:
 * _printf(<format string>, args...)

> ### Extra information

gcc -c \*.c
ar rcs libprintf.a \*.o
After this, copy the resulting printf.a file and printf.h to your project directory. Include printf.h where appropriate in your source files. Then using GCC as an example, when compiling add the -l flag with the library file name like so:

gcc <your stuff here> libprintf.a
Usage Examples
The simplest example is just printing out a string literal as the format string, like so:

#### _printf("Hello printf!");
This will output the text "Hello printf!" to the terminal, like so:

#### Hello printf!
Rountinely, you will want to use printf to print out strings from variables or numbers. We can take in variables passed as further arguments by using %, then flags (optional), then a specifier for the type of thing we are printing. If we have an integer and a string, we will use %d and %s respectively, like so:

char str[] = "world";
int number = 42;
_printf("Hello %s %d!", str, number);
We will get the output:
>### What’s Included?
|file|description| 
|----|-----------|
|  `_printf.c`  | simulates original printf | 
|  `_putchar.c` | simulates original putchar | 
|  `driver.c`  | contains functions caller for the printf | 
| `main.h` | contains prototypes and libraries| 
|  `printc.c`  | prints character | 
|  `printhex.c` | prints hexadecimal | 
|  `printint.c`  | prints integer | 
| `printocta.c` | prints ocatal number |
| `printpercent.c` | prints % char |
| `printstr.c` | calles _puts.c to print a string format | 
| `_puts.c` | prints string char |

---
> ### Compilation
the code will be compiled this way:
`gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c`
* As a consequence, be careful not to push any c file containing a `main` function in the root directory of * * your project (you could have a test folder containing all your `tests` files including `main` functions)
* Our main files will include your main header file (`holberton.h`): `#include holberton.h`
* You might want to look at the gcc flag `-Wno-format` when testing with your `_printf` and the standard `printf`.
---
>### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
function that produces output according to a format.
* Prototype: `int _printf(const char *format, ...)`;
* Returns: the number of characters printed (excluding the null byte used to end output to strings)
* write output to stdout, the standard output stream
* `format` is a character string. The format string is composed of zero or more directives. See man 3 `printf`
* for more detail. You need to handle the following conversion specifiers:
  * `c`
  * `s`
  * `%`
* You don’t have to reproduce the buffer handling of the C library printf function
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers
>### 1. Education is when you read the fine print. Experience is what you get if you don't
Handle the following conversion specifiers:

* `d`
* `i`
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers
>### 2. Just because it's in print doesn't mean it's the gospel

Create a man page for your function.

---
> ## Contact 💬

* [Nahom Terefe](https://github.com/Nahi-Terefe)
* [Elisyas Fesha](https://github.com/malu17)