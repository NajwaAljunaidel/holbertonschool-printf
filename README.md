# <a><img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Logo.svg" width=3% height=3%></img></a> \_printf

<p align="center">
  <img src="https://readme-typing-svg.herokuapp.com?center=true&size=24&duration=3500&pause=1000&color=FF69B4&width=480&lines=printf+gets+personal+—+by+Najwa+%26+Haifa+at+Holberton+School" alt="Typing SVG" />
</p>

---

## Overview

The `_printf` project is a thoughtful re-creation of the standard C `printf` function. Engineered by Najwa & Haifa at Holberton School, it emphasizes both correctness and design clarity.

**Key Features:**

* Supports variadic arguments via `<stdarg.h>`
* Low-level output using `write()`
* Efficient custom parsing logic

**Supported Format Specifiers:** `%c` (char), `%s` (string), `%d` / `%i` (integers), `%%` (percent)

---

## Prototype

```c
int _printf(const char *format, ...);
```

---

## Project Files

| File Name                                                                                          | Description                                                                           |
| -------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------- |
| [`_printf.c`](https://github.com/NajwaAljunaidel/holbertonschool-printf/blob/main/_printf.c)       | Core logic for handling format strings and directing to the correct handler functions |
| [`helpers.c`](https://github.com/NajwaAljunaidel/holbertonschool-printf/blob/main/helpers.c)       | Functions for printing characters, strings, integers, and percent signs               |
| [`main.h`](https://github.com/NajwaAljunaidel/holbertonschool-printf/blob/main/main.h)             | Header file containing function prototypes and macros                                 |
| [`test/main.c`](#)                                                                                 | Sample test cases for validating functionality (not committed publicly yet)           |
| [`man_3_printf`](https://github.com/NajwaAljunaidel/holbertonschool-printf/blob/main/man_3_printf) | Manual page documentation for `_printf`                                               |

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o my_printf
```

---

## Usage Examples

```c
_printf("Hello, %s!", "Najwa");      // Output: Hello, Najwa!
_printf("Value: %d%%", 100);         // Output: Value: 100%
_printf("Char: %c\n", 'A');         // Output: Char: A
```

---

## Manual Page

To view the manual page:

```bash
man ./man_3_printf
```

---

## Testing

Compare with the standard printf for validation:

```c
_printf("Character: %c\n", 'N');
printf("Character: %c\n", 'N');

_printf("String: %s\n", "Najwa");
printf("String: %s\n", "Najwa");

_printf("Integer: %d\n", 42);
printf("Integer: %d\n", 42);
```

---

## Authors

* [Najwa Aljunaidel](https://github.com/NajwaAljunaidel)
* [Haifa Hasher](https://github.com/Haifahasher)

---

## Connect With Us

Stay connected through GitHub:

* GitHub: [NajwaAljunaidel](https://github.com/NajwaAljunaidel)
* GitHub: [Haifahasher](https://github.com/Haifahasher)

Project by Holberton School – June 2025

