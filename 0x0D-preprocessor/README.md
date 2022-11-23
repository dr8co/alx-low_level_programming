# 0x0D. C - Preprocessors

## Overview

 Preprocessors process the source code before compilation.
 The process of generating the executable from the source code involves:

* `Pre-processing`: the source code is processed by **preprocessors** and an expanded source code file is generated.
* `Compilation`: The expanded source code is compiled into object code by the **compiler**.
* `Linking`: The **linker** links the object code to the object code of the library functions to generate the exeutable.

Preprocessor programs provide preprocessor directives that tell the compiler to preprocess the source code before compiling.

All of these preprocessor directives begin with a `‘#’` (hash) symbol.
The ‘#’ symbol indicates that whatever statement starts with a ‘#’ will go to the preprocessor program to get executed.
Some examples of preprocessor directives are: `#include`, `#define`, `#ifndef`, etc.

The # symbol only provides a path to the preprocessor, and a command such as include is processed by the preprocessor program.
For example, #include will include extra code in your program.

Preprocessor directives can be placed anywhere in a program.

## Types of Preprocessor Directives

1. Macros
2. File Inclusion
3. Conditional Compilation
4. Other directives

### 1. Macros

Macros are pieces of code in a program that is given some name. Whenever this name is encountered by the compiler, the compiler replaces the name with the actual piece of code.

The `#define` directive is used to define a macro.
For example:

```C
#include <stdio.h>

/* macro definition */
#define LIMIT 5

int main()
{
 for (int i = 0; i < LIMIT; ++i) {
  printf("%d \n",i);
 }

 return 0;
}
```

**Output:**

```zsh
0
1
2
3
4
```

In the above program, when the compiler executes the word LIMIT, it replaces it with 5.

The word `LIMIT` in the macro definition is called a **macro template** and `5` is **macro expansion**.

Note that there is no semi-colon (;) at the end of the macro definition.
Macro definitions do not need a semi-colon to end.

**Macros With Arguments**: We can also pass arguments to macros.
Macros defined with arguments work similarly to functions.

For instance:

```C
#include <stdio.h>

/* macro with parameter */
#define AREA(l, b) (l * b)

int main()
{
 int l1 = 10, l2 = 5, area;

 area = AREA(l1, l2);

 printf("Area of rectangle is: %d", area);

 return 0;
}
```

**Output:**

```zsh
Area of rectangle is: 50
```

Whenever the compiler finds `AREA(l, b)` in the program, it replaces it with the statement (l*b).

Not only this, but the **values passed** to the macro template `AREA(l, b)` will also be replaced in the statement (l*b).
Therefore `AREA(10, 5)` will be equal to `10*5`.

### 2. File Inclusion
