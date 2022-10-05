# C Static Libraries

## Introduction

A library is a file containing several object files, that can be used as a single entity in a linking phase of a program. Normally, the library is indexed, so it is easy to find symbols (functions, variables, methods, etc.) in them.\
For this reason, linking a program whose object files are ordered in libraries is faster than linking a program whose object files are separate on the disk. Also, when using a library, we have fewer files to look for and open, which even further speeds up linking.

There are two types of libraries:

* Static libraries
* Dynamic (or shared) libraries

 **Static libraries** are collections of **object files** that are linked into the program during the linking phase of compilation, and are not relevant during runtime. Object files are also used only during the linking phase, and are not required during runtime - only the program's executable file is needed in order to run the program.

**Dynamic libraries** are linked into the program in **two stages**. First, during **compile time**, the linker verifies that all the symbols required by the program, are either linked into the program, or in one of its shared libraries. However, the object files from the dynamic library are not inserted into the executable file. Instead, when the program is started, a program in the system (called a dynamic loader) checks out which shared libraries were linked with the program, loads them to memory, and attaches them to the copy of the program in memory.

## Creating a C static library

In a [Unix-like](https://en.wikipedia.org/wiki/Unix-like) operating systems such as Linus and macOS, C static libraries can be created using the following steps:

![Creating a static library](https://media-exp1.licdn.com/dms/image/C4E12AQEs4ns-bpr-Bg/article-inline_image-shrink_1000_1488/0/1602441957708?e=1669852800&v=beta&t=1PzgQ1WdDdeMbQJZcJziYkyQI2Bscs-AnB1vJWHCpM0)

1. Create a header file containing declarations. Consider the demo below.

```C
/* Filename: libmy_lib.h */
void fun(void);
```

1. Create source files containing definitions for the declarations.

```C
/* Filename: libmy_lib.c */
#include <stdio.h>
void fun(void)
{
printf("fun() called from a static library");
}
```

1. Compile all source files to be included in the library.

```console
ian@github:~$ gcc -c libmy_lib.c -o libmy_lib.o
```

Here, the GNU compiler, `gcc`, is used with -c option to stop the compiling process after the assembly stage, generating object file named `libmy_lib.o` (-o option for the output file).

1. Link the resulting object files into a static library.

```console
ian@github:~$ ar rc libmy_lib.a libmy_lib.o
```

`ar rc` command uses the ar utility to create the static library `libmy_lib.a` (.a for Linux systems) from object file `libmy_lib.o`.
The `c` option tells ar to create the library if it does not exist, and `r` tells it to replace older object files in the library with new ones.
After the library is created or modified, there is need to index it, to speed up lookup inside the library. The index can be created or updated using `ranlib`

```console
ian@github:~$ ranlib libmy_lib.a
```

Optionally, the indexing can be done using `ar`, by adding `s` option when executing the command during creation.

```console
ian@github:~$ ar rcs libmy_lib.a libmy_lib.o
```

1. The library is now ready to use. It can be copied and used as desired.

## Using a C static library

Consider a program that uses the static library created above.

1. Create a C source file with `main` function

```C
/* filename: demo.c */
#include "libmy_lib.h"
void main()
{
fun();
}
```

1. Compile the demo program

```console
ian@github:~$ gcc -c demo.c -o demo.o
```

1. Link the compiled demo program to the static library.

```console
ian@github:~$ gcc demo.o -L. -lmy_lib -o demo
```

Or, after creating the source file `demo.c`, you can link it directly while compiling it into an executable (not object code, unlike the previous two steps)

```console
ian@github:~$ gcc demo.c -L. -lmy_lib -o demo
```

The `-L.` option tells `gcc` to look for the library files in the working directory (the dot after -L).
The `-l` option tells it to link the specified file with the library file.

1. Run the demo program

```console
ian@github:~$ ./demo
fun() called from a static library
```

## Acknowledgement

* [Nicholas Ribiero](https://www.linkedin.com/pulse/c-static-library-nicolas-ribeiro "C Static Library via LinkedIn")
* [Guy Keren](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
* [GeeksforGeeks](https://www.geeksforgeeks.org/static-vs-dynamic-libraries/)
