# Printf Project
by Team Nick and Frank (Cohort 20) Holberton School Australia, Melbourne

This is created with C (programming language) and vim (code editor).

## Table of Contents
* [Installation](#installation)
* [Flowchart](#flowchart)
* [Documentation](#documentation)
* [Author](#author)
* [Copyright](#copyright)


## Installation
To run this project, install it locally by cloning our repository using the command ```git clone``` as shown below:

```
git clone https://github.com/haoningng/holbertonschool-printf.git
```

**Makefile**

Our repository contains a _makefile_, and with file it allows you to compile all of the our code to your own main.c with simple command ```make``` and when you do this it will create an executable called ```./printf```.

Example of your main.c:

```
#include "main.h"
int main()
{
   _printf("Hello World")
   return(1);
}
```

When you run ```./printf``` the outcome will be:

``` Hello World```

Note: our repository contains a _main.c_ file by default, inside which you can find multiple test codes. Feel free to change the code inside _main.c_ file to test.

To see the manual page for this function, type the following line into the command line:

```
man ./man_3_printf
```


## Flowchart
Below is a flowchart showing the basic implementation of how our function works and the steps the function goes through to return the desired result.

![_printf flowchart](https://github.com/haoningng/holbertonschool-printf/blob/master/_printf%20flowchart.jpg)

## Documentation

### SYNOPSIS

**PROTOTYPE:**

```
int _printf(const char *format, ...);
```

**DESCRIPTION:**

The _printf() function writes output to the stdio, standard output stream, according to the format specifiers inside the format string. The subsequent arguments are converted under the control of the format string and its format specifiers.

This function write the output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument facilities of stdarg(3)) are converted for output.

**Format of the format string:**

The format string is a character string, beginning and ending in its initial shift state, if any.  The format string is composed of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments.  Each conversion specification is introduced by the character %, and ends with a conversion specifier.

This  _printf function takes no flags and cannot handle field width, precision or length modifiers. The number of arguments following the format string must be equal or greater than the number of format specifiers in the format string.

**Conversion specifiers**

A character that specifies the type of conversion to be applied.
The conversion specifiers and their meanings are:

```%c``` prints a char or character

```%s``` prints a char * or pointer to an array of chars. The array must contain a terminating null byte (‘\0’), and the null byte is not included in the _printf output.

```%i``` prints an int or integer

```%d``` prints a decimal number in base-10

**RETURN VALUE**

Upon successful return, this function return the number of characters printed (excluding the null byte used to end output to strings).

If an output error is encountered, -1 is returned.

## AUTHORS

To contact the authors of this page and to review the _printf code or submit pull requests, please visit:

[https://github.com/haoningng](https://github.com/haoningng)

[https://github.com/DrFrankLi](https://github.com/DrFrankLi)

## COPYRIGHT

This printf was created for educational purposes under the framework and guidance of Holberton School, Melbourne Australia.
