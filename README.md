# ft_printf

![42 Badge](https://img.shields.io/badge/42-ft__printf-00babc)
![C Badge](https://img.shields.io/badge/Language-C-blue)

## 📚 Overview

ft_printf is a project at 42 School that involves recoding the famous `printf()` function from the C standard library. This project is an excellent opportunity to use variadic functions and improve programming skills through the implementation of a complex but widely-used function.

## 🔍 Description

The function has to handle various conversion specifiers, flags, and formatting options, similar to the original `printf()`. The goal is to create a function that mimics the behavior of the original as closely as possible.

## 📋 Function Prototype

```c
int ft_printf(const char *format, ...);
```

The function returns the number of characters printed (excluding the null byte used to end output to strings).

## 🛠️ Implementation

This implementation of ft_printf handles the following conversions:

| Specifier | Description |
|-----------|-------------|
| `%c` | Character |
| `%s` | String |
| `%p` | Pointer address |
| `%d` | Decimal (base 10) integer |
| `%i` | Integer |
| `%u` | Unsigned decimal integer |
| `%x` | Hexadecimal (base 16) integer lowercase |
| `%X` | Hexadecimal (base 16) integer uppercase |
| `%%` | Percentage sign |

## 🚀 How to Use

### Compilation

To compile the library, run:

```bash
make
```

This will generate the `libftprintf.a` static library.

To clean the object files:

```bash
make clean
```

To clean everything (object files and library):

```bash
make fclean
```

To recompile everything:

```bash
make re
```

### Linking with your projects

To use the library in your projects, include the header file and link with the library:

```c
#include "ft_printf.h"
```

When compiling your program:

```bash
gcc your_program.c -L. -lftprintf
```

### Example Usage

```c
#include "ft_printf.h"

int main(void)
{
    int count;
    
    count = ft_printf("Hello, %s!\n", "world");
    ft_printf("The previous line printed %d characters.\n", count);
    
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "This is a string");
    ft_printf("Pointer: %p\n", &count);
    ft_printf("Decimal: %d\n", 42);
    ft_printf("Integer: %i\n", -42);
    ft_printf("Unsigned: %u\n", 4294967295);
    ft_printf("Hexadecimal (lowercase): %x\n", 255);
    ft_printf("Hexadecimal (uppercase): %X\n", 255);
    ft_printf("Percentage sign: %%\n");
    
    return (0);
}
```

## 🧩 Project Structure

```
.
├── Makefile
├── includes/
│   └── ft_printf.h
├── srcs/
│   ├── ft_printf.c
│   ├── ft_handle_char.c
│   ├── ft_handle_string.c
│   ├── ft_handle_pointer.c
│   ├── ft_handle_integer.c
│   ├── ft_handle_unsigned.c
│   ├── ft_handle_hex.c
│   └── ...
└── README.md
```

## 📝 Testing

To test the implementation, you can create a main function that calls `ft_printf()` with various format strings and arguments, then compare the output and return value with the original `printf()`.

## 🔬 Key Learning Objectives

- Understanding variadic functions in C
- String parsing and formatting
- Memory management
- Code organization for complex projects
- Understanding the internal workings of `printf()`

## 📜 Norms and Requirements

This project follows the 42 School norm, which includes:
- Functions must not exceed 25 lines
- No more than 5 function declarations per file
- No more than 5 variables per function
- Only allowed to use the following libc functions: `write`, `malloc`, `free`, `exit` and the functions of `stdarg`

## 👤 Author

- Your Name (@yourusername)

## 💬 Acknowledgements

- 42 School for providing this challenging project
- All fellow students who provided feedback and testing