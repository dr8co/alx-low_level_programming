# 0x0A. C - Command Line Arguments (argc and argv)

Command line arguments are values passed to programs from the command line when they are executed.\
In C programming, these values are handled by the `main()` function using `argc` and `argv` parameters.

The first parameter, `argc` (_argument count_) is an integer that indicates how many command-line arguments were passed by the user (including the name of the program) when the program was called or run.\
The second parameter, `argv` (_argument vector_), is an **array of pointers** to **arrays of character objects**. (A vector is a one-dimensional array).

The first element of the array, `argv[0]`, is a pointer to the character array that contains the **program name** or **invocation name** of the program that is being run from the command line.\
`argv[1]` indicates the **first argument** passed to the program, `argv[2]` the **second argument**, and so on.\
Syntax:

```C
int main(int argc, char *argv[])
{
    ...
}
```

or

```C
int main(int argc, char **argv)
{
    ...
}
```

This project explores the use of `argc` and `argv` in C.

Below are some of the properties of command Line arguments.

## Summary of Command-Line Arguments

- They are passed to `main()` function.
- They are parameters/arguments supplied to the program when it is invoked.
- They are used to control program from outside instead of hard coding those values inside the code.
- `argv[argc]` is a `NULL` pointer.
- `argv[0]` holds the name of the program.
- `argv[1]` points to the first command line argument and `argv[n]` points to the last argument.
