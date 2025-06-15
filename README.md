# <a><img src="https://private-user-images.githubusercontent.com/197754999/434705190-5f8d33ce-fed8-438a-935c-a9916afef26e.png" width=5% height=5%></a> \_printf

<p align="center">
  <img src="https://readme-typing-svg.herokuapp.com?center=true&size=28&duration=3000&pause=1000&color=FF69B4&width=600&lines=printf+gets+personal+—+by+Najwa+and+Haifa" alt="Typing SVG" />
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

| File                                                                                               | Purpose                                                             |
| -------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------- |
| [`_printf.c`](https://github.com/NajwaAljunaidel/holbertonschool-printf/blob/main/_printf.c)       | Main logic that interprets and routes format strings                |
| [`helpers.c`](https://github.com/NajwaAljunaidel/holbertonschool-printf/blob/main/helpers.c)       | Implements helper functions like `print_char`, `print_string`, etc. |
| [`main.h`](https://github.com/NajwaAljunaidel/holbertonschool-printf/blob/main/main.h)             | Header file with prototypes and macros                              |
| [`test/main.c`](#)                                                                                 | Sample test driver (currently local)                                |
| [`man_3_printf`](https://github.com/NajwaAljunaidel/holbertonschool-printf/blob/main/man_3_printf) | Manual page for terminal usage                                      |

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

Built with 💗 at [Holberton School](https://www.holbertonschool.com/) – June 2025

* [NajwaAljunaidel GitHub](https://github.com/NajwaAljunaidel)
* [Haifahasher GitHub](https://github.com/Haifahasher)

