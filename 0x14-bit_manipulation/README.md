# 0x14. C - Bit manipulation

## Table of Content

* [Introduction](#introduction)
* [Bitwise Operators](#bitwise-operators)
  * [Bitwise NOT](#bitwise-not)
  * [Bitwise OR](#bitwise-or)
  * [Bitwise AND](#bitwise-and)
  * [Bitwise  XOR](#bitwise-xor)
  * [Bitwise Left shift](#bitwise-left-shift)
  * [Bitwise Right shift](#bitwise-right-shift)
* [Summary](#summary)

## Introduction

Bit manipulation is the act of algorithmically manipulating bits
or other pieces of data shorter than a byte.

Operations with bits are used in Data compression and encryption.
In order to encode, decode or compress files we have to extract the data at bit level.
Bitwise Operations are faster and closer to the system and sometimes optimize the program to a good level.

## Bitwise Operators

Bitwise operators work on bits and perform bit by bit operations.

For illustrations, assume that A = 98 and B = 23.\
A in binary is 1100010\
B in binary is 0010111

Some of the common bit operators are:

### Bitwise NOT (~)

Bitwise NOT is an unary operator that flips the bits of the number i.e.,
if the ith bit is 0, it will change it to 1 and vice versa.
Bitwise NOT is simply the one's compliment of a number.

~A is 0011101, which is decimal 29.\
~B is 01000, which is decimal 8.

The result of a bitwise NOT is dependent on the size of the data type.

For example,

Flipping 4 bits:\
~0100 is 1011

Flipping 8 bits:\
~0000 0100 is 1111 1011

In both the 4-bit and 8-bit cases, we start with the same number
(binary 0100 is the same as 0000 0100 in the same way that decimal 7 is the same as 07),
but we end up with a different result.

### Bitwise OR (|)

Bitwise is a binary operator that operates on two equal-length bit patterns.
If both bits in the compared position of the bit patterns are 0,
the bit in the resulting bit pattern is 0, otherwise 1.

A | B evaluates to:

```C
1   1   0   0   0   1   0  OR
0   0   1   0   1   1   1
--------------------------
1   1   1   0   1   1   1, which is decimal 119.
```

### Bitwise AND (&)

Bitwise AND is a binary operator that operates on two equal-length bit patterns, similar to bitwise OR.
If both bits in the compared position of the bit patterns are 1,
the bit in the resulting bit pattern is 1, otherwise 0.

A & B evaluates to:

```C
1   1   0   0   0   1   0  AND
0   0   1   0   1   1   1
--------------------------
0   0   0   0   0   1   0, which is decimal 2.
```

### Bitwise XOR (^)

XOR is also known as **exclusive or**.
When evaluating two operands, XOR evaluates to 1 if one and only one of its operands is 1.
If neither or both are 1, it evaluates to 0.

A ^ B evaluates to:

```C
1   1   0   0   0   1   0  XOR
0   0   1   0   1   1   1
--------------------------
1   1   1   0   1   0   1, which is decimal 117.
```

### Bitwise Left Shift (<<)

The bitwise left shift operator shifts bits to the left.
The left operand is the expression to shift the bits of, and the right operand is an integer number of bits to shift left by.

So when we say `x << 1`, we are saying “shift the bits in the variable x left by 1 place”.
New bits shifted in from the right side receive the value 0.

0011 << 1 is 0110\
0011 << 2 is 1100\
0011 << 3 is 1000

Note that in the third case, we shifted a bit off the end of the number!
Bits that are shifted off the end of the binary number are lost forever.

### Bitwise Right Shift (>>)

The bitwise right shift operator shifts bits to the right,
in a similar logic to the left shift above.

1100 >> 1 is 0110\
1100 >> 2 is 0011\
1100 >> 3 is 0001

Note that in the third case we shifted a bit off the right end of the number, so it is lost.

## Summary

|    X    |    Y    |   X&Y   |   X\|Y  |   X^Y   |   ~X    |   ~Y    |
|---------|---------|---------|---------|---------|---------|---------|
|    0    |    0    |    0    |    0    |    0    |    1    |    1    |
|    0    |    1    |    0    |    1    |    1    |    1    |    0    |
|    1    |    0    |    0    |    1    |    1    |    0    |    1    |
|    1    |    1    |    1    |    1    |    0    |    0    |    0    |

[def]: #bitwise-not
