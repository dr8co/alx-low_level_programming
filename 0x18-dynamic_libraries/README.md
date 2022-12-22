# 0x18. C - Dynamic Libraries

## Overview

Unlike static libraries, dynamic libraries consist of separate files containing separate pieces of object code.
These files are dynamically linked together to form a single piece of object code.

Dynamic libraries contain extra information that the
operating system will need to link the library to other programs.

The implication of this is that memory is conserved while using
dynamic libraries since each application or program can access the
dynamic library without needing an individual copy, as would be the
case, if we were using static libraries.

Although dynamic libraries afford the ability to alter source code
without recompiling the entire program, static libraries’ execution
speed at run-time is faster because the object code for the
functions within the library are already in the executable file.
As a result, multiple calls to functions are handled more efficientlythan when using dynamic libraries.

## How to Create a Dynamic Library in Linux

To create a dynamic library in Linux, simply compile with the following flags: `-c -fPIC`.
These flags essentially generate one `.o` object file for each `.c` source file.
The `-fPIC` flag ensures that the code is position-independent.
This means it wouldn’t matter where the computer loads the code into memory.
Some operating systems and processors need to build libraries from position-independent code
so that they can decide at runtime where they want to load it into memory.
The -c options just ensures that each .o file isn’t linked yet.
