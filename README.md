*This project has been created as part of the 42 curriculum by ylaghrib.*

# Libft

## Description

**Libft** is my first own C library, built as part of the 42 curriculum. The goal of the project is to understand how the standard C functions work by re-implementing them from scratch, then extending them with additional utilities for strings, memory, file output and linked lists. The resulting static library, `libft.a`, is meant to be reused in all future C projects of the curriculum.

The library is written in C, follows the 42 Norm, and is compiled with `cc -Wall -Wextra -Werror`. The archive is created with `ar`.

### Library overview

The library is split into three parts.

#### Part 1 - Libc functions

Re-implementations of standard libc functions, with the same prototypes and behavior as the originals (as described in their man pages). None of them rely on external functions, except `malloc` for `ft_calloc` and `ft_strdup`.

| Category | Functions |
|---|---|
| Character classification | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| String | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi` |

Notes:
- The character classification functions return `1` if the character matches the class and `0` otherwise.
- `ft_calloc` returns a unique pointer that can be passed to `free()` when `nmemb` or `size` is `0`.

#### Part 2 - Additional functions

Functions that are either not in the libc or exist in a different form.

| Function | Description |
|---|---|
| `ft_substr` | Allocates and returns a substring of `s`, starting at index `start`, with a maximum length `len`. |
| `ft_strjoin` | Allocates and returns the concatenation of `s1` and `s2`. |
| `ft_strtrim` | Allocates and returns a copy of `s1` with characters from `set` removed from the beginning and the end. |
| `ft_split` | Splits `s` using `c` as a delimiter and returns a NULL-terminated array of newly allocated strings. |
| `ft_itoa` | Allocates and returns a string representing an integer (negative numbers handled). |
| `ft_strmapi` | Applies `f(index, char)` to each character of `s` and returns a new string with the results. |
| `ft_striteri` | Applies `f(index, &char)` to each character of `s` in place. |
| `ft_putchar_fd` | Writes a character to the given file descriptor. |
| `ft_putstr_fd` | Writes a string to the given file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to the given file descriptor. |
| `ft_putnbr_fd` | Writes an integer to the given file descriptor. |

#### Part 3 - Linked list

Functions to manipulate singly linked lists, built on the following structure declared in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node with the given content; `next` is set to `NULL`. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the number of nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Frees a node's content using `del`, then frees the node (not the next one). |
| `ft_lstclear` | Deletes and frees a node and all its successors, then sets the list pointer to `NULL`. |
| `ft_lstiter` | Applies `f` to the content of each node. |
| `ft_lstmap` | Creates a new list from the results of applying `f` to each node's content; uses `del` to clean up on allocation failure. |

## Instructions

### Requirements

- A C compiler (`cc`)
- `make`
- `ar`

### Compilation

From the root of the repository:

```bash
make          # builds libft.a
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # fclean + all
```

The Makefile provides the rules `$(NAME)`, `all`, `clean`, `fclean` and `re`.

### Usage

Include the header in your source files:

```c
#include "libft.h"
```

Then compile your program and link it against the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

Example:

```c
#include "libft.h"

int main(void)
{
	char	**words;
	int		i;

	words = ft_split("hello libft world", ' ');
	if (!words)
		return (1);
	i = 0;
	while (words[i])
	{
		ft_putendl_fd(words[i], 1);
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
}
```

### Testing against the system libc

Some functions (`strlcpy`, `strlcat`, `bzero`) are not provided by default in glibc. To compare your implementations with the system ones in your own test programs, include `<bsd/string.h>` and compile with `-lbsd`.

## Resources

### References

- `man` pages for each re-implemented function (e.g. `man 3 strlen`, `man 3 memmove`, `man 3 calloc`)
- [GNU C Library documentation](https://www.gnu.org/software/libc/manual/)
- [GNU Make manual](https://www.gnu.org/software/make/manual/)
- `man ar`, for creating static libraries

### Use of AI


AI was used for the following tasks :

- Explaining reasons of practices in libc.
- Explaining linked list padding and alignement.
- Explaining memory layout and how each part functions.
- Suggesting edge cases.

