# Libft

## Description
Libft is my first project at 1337 school. It is a custom C library that recreates some standard C library functions along with additional utility functions that will be used during the entire cursus.

## Functions
The project is divided into three main parts:

### Part 1 - Libc Functions
* `ft_isalpha` - Check if character is alphabetic
* `ft_isdigit` - Check if character is digit
* `ft_isalnum` - Check if character is alphanumeric
* `ft_isascii` - Check if character is ASCII
* `ft_isprint` - Check if character is printable
* `ft_strlen` - Calculate string length
* `ft_memset` - Fill memory with a constant byte
* `ft_bzero` - Zero a byte string
* `ft_memcpy` - Copy memory area
* `ft_memmove` - Copy memory area with overlap handling
* `ft_strlcpy` - Size-bounded string copying
* `ft_strlcat` - Size-bounded string concatenation
* `ft_toupper` - Convert char to uppercase
* `ft_tolower` - Convert char to lowercase
* `ft_strchr` - Locate character in string
* `ft_strrchr` - Locate character in string from the end
* `ft_strncmp` - Compare two strings
* `ft_memchr` - Scan memory for a character
* `ft_memcmp` - Compare memory areas
* `ft_strnstr` - Locate a substring in a string
* `ft_atoi` - Convert string to integer
* `ft_calloc` - Allocate and zero-initialize memory
* `ft_strdup` - Create a duplicate of a string

### Part 2 - Additional Functions
* `ft_substr` - Extract substring from string
* `ft_strjoin` - Concatenate two strings
* `ft_strtrim` - Trim characters from string
* `ft_split` - Split string into array of substrings
* `ft_itoa` - Convert integer to string
* `ft_strmapi` - Apply function to each character of string
* `ft_striteri` - Apply function to each character of string with index
* `ft_putchar_fd` - Output a character to given file descriptor
* `ft_putstr_fd` - Output string to given file descriptor
* `ft_putendl_fd` - Output string with newline to given file descriptor
* `ft_putnbr_fd` - Output integer to given file descriptor

### Bonus Part - Linked List Functions
* `ft_lstnew` - Create new list node
* `ft_lstadd_front` - Add node at beginning of list
* `ft_lstsize` - Count elements in list
* `ft_lstlast` - Get last node of list
* `ft_lstadd_back` - Add node at end of list
* `ft_lstdelone` - Delete node from list
* `ft_lstclear` - Delete sequence of nodes from list
* `ft_lstiter` - Apply function to content of all list nodes
* `ft_lstmap` - Apply function to content of all list nodes and create new list

## Getting Started

### Prerequisites
* GCC compiler
* Make

### Installation
1. Clone the repository:
```bash
git clone [your-repo-link]
