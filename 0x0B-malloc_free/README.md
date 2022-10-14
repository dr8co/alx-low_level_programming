# 0x0B. C - Dynamic Memory Allocation

## Automatic Allocation

When variables are declared or when strings within double quotes are used, the program takes care of all the memory allocation.

## Dynamic Allocation

The concept of dynamic memory allocation in C language enables the programmer to allocate memory at runtime.

### `malloc()`

The `malloc()` ("memory allocation") function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap.

If the request is granted, the operating system will reserve the requested amount of memory and `malloc()` will return a pointer to the allocated memory. This memory has read and write permissions.

`malloc()` does not initialize memory, so each block is initialized with the default garbage value initially.

The return type is a pointer of `void` which can be casted into pointers of any type.

Syntax:

```C
ptr = (castType*) malloc(size);
```

where `size` is the number of bytes to be allocated.

If space is insufficient, allocation fails and the function returns a `NULL` pointer.

The memory that is allocated with `malloc()` is not automatically released when the function returns, hence the need to de-allocate the allocated memory.

### `free()`

When the amount of memory is not needed anymore, it must be returned to the operating system by calling the function `free()`. This function de-allocates the memory dynamically allocated using `malloc()`.

Syntax:

```C
free(ptr);
```

This statement frees the space allocated in the memory pointed by `ptr`.
