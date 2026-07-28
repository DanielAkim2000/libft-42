*This project has been created as part of the 42 curriculum by demane.*

# Libft

## Description

**Libft** is the first project of the 42 common core. The goal is to recreate a personal C library by reimplementing a set of standard libc functions, then extending it with additional utilities that will be reused throughout the curriculum.

This library includes:

- Mandatory libc-like functions (characters, memory, strings, conversion, output)
- Bonus linked-list functions (`t_list`)
- Extra helper functions used in later projects
- **ft_printf**, a reimplementation of `printf`
- **get_next_line**, a function that reads a line from a file descriptor

The final deliverable is a static library: `libft.a`.

## Library overview

### Character checks & case conversion

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks for an alphabetic character |
| `ft_isdigit` | Checks for a digit (`0`–`9`) |
| `ft_isalnum` | Checks for an alphanumeric character |
| `ft_isascii` | Checks for an ASCII character |
| `ft_isprint` | Checks for a printable character |
| `ft_toupper` | Converts a character to uppercase |
| `ft_tolower` | Converts a character to lowercase |

### Memory

| Function | Description |
|----------|-------------|
| `ft_memset` | Fills a memory area with a constant byte |
| `ft_bzero` | Sets a memory area to zero |
| `ft_memcpy` | Copies a memory area |
| `ft_memmove` | Copies a memory area, handling overlap |
| `ft_memchr` | Locates a byte in a memory area |
| `ft_memcmp` | Compares two memory areas |
| `ft_calloc` | Allocates and zero-initializes memory |

### Strings

| Function | Description |
|----------|-------------|
| `ft_strlen` | Returns the length of a string |
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_strchr` | Locates the first occurrence of a character |
| `ft_strrchr` | Locates the last occurrence of a character |
| `ft_strncmp` | Compares two strings up to `n` characters |
| `ft_strnstr` | Locates a substring in a string |
| `ft_strdup` | Duplicates a string |
| `ft_substr` | Extracts a substring |
| `ft_strjoin` | Concatenates two strings |
| `ft_strtrim` | Trims characters from both ends of a string |
| `ft_split` | Splits a string using a delimiter |
| `ft_strmapi` | Applies a function to each character (new string) |
| `ft_striteri` | Applies a function to each character (in place) |

### Conversion & output

| Function | Description |
|----------|-------------|
| `ft_atoi` | Converts a string to an `int` |
| `ft_itoa` | Converts an `int` to a string |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |

### Linked lists (bonus)

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning |
| `ft_lstadd_back` | Adds a node at the end |
| `ft_lstsize` | Counts the number of nodes |
| `ft_lstlast` | Returns the last node |
| `ft_lstdelone` | Deletes one node |
| `ft_lstclear` | Deletes the entire list |
| `ft_lstiter` | Applies a function to each node’s content |
| `ft_lstmap` | Creates a new list by applying a function |

### Extra helpers

| Function | Description |
|----------|-------------|
| `ft_atol` | Converts a string to a `long` |
| `ft_intlen` | Returns the number of digits in an `int` |
| `ft_maxint` / `ft_minint` | Returns the max / min among `n` integers |
| `ft_strjoin_sep` | Joins two strings with a separator |
| `ft_putnbr_base_fd` | Writes a number in a given base |
| `ft_has_duplicates` | Checks for duplicate characters |
| `ft_free` | Generic free helper via `void **` |

### ft_printf

Custom `printf`-like function supporting:

`%c` `%s` `%p` `%d` `%i` `%u` `%x` `%X` `%%`

### get_next_line

Reads one line from a file descriptor. The bonus version supports multiple file descriptors.

## Instructions

### Requirements

- A C compiler (`cc`)
- `make`

### Compilation

```bash
make        # Build libft.a (mandatory + bonus + printf + gnl)
make bonus  # Update the library with bonus list functions
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Rebuild from scratch
```

### Usage

```c
#include "libft.h"

int	main(void)
{
	ft_printf("Hello %s\n", "42");
	return (0);
}
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
./program
```

## Resources

### Documentation & references

- [man pages](https://man7.org/linux/man-pages/) — reference for the original libc functions (`man 3 strlen`, `man 3 malloc`, etc.)
- [The C Programming Language (K&R)](https://en.wikipedia.org/wiki/The_C_Programming_Language) — classic reference for C fundamentals
- [42 Libft subject](https://cdn.intra.42.fr/) — official project specifications (available on the 42 Intranet)
- [GNU Make Manual](https://www.gnu.org/software/make/manual/) — documentation for writing Makefiles
- [printf(3)](https://man7.org/linux/man-pages/man3/printf.3.html) — format string reference for `ft_printf`
- [read(2)](https://man7.org/linux/man-pages/man2/read.2.html) — system call used by `get_next_line`

### AI usage

AI assistance was used for the following tasks:

- Drafting and formatting this `README.md` according to the 42 curriculum requirements
- Clarifying wording and structuring documentation sections

No AI-generated code was submitted as a substitute for personal implementation of the library functions. The C source files were written and validated by the student.
