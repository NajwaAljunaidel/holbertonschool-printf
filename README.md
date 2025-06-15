# ✨ \_printf — Custom Output, Engineered Elegantly

<p align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/C_Programming_Language.svg/1200px-C_Programming_Language.svg.png" width="6%">
</p>

<p align="center">
  <img src="https://readme-typing-svg.herokuapp.com?center=true&size=26&duration=3000&pause=1000&color=36BCF7&width=500&lines=Welcome+to+printf+function+lesson;printf+gets+personal+—+powered+by+Najwa+%26+Haifa" alt="Typing SVG" />
</p>

---

## Overview

The <code>\_printf</code> project is a thoughtful re-creation of the standard C <code>printf</code> function. Engineered by Najwa & Haifa, it emphasizes both correctness and design clarity.

**Key Features:**

* Supports variadic arguments via <code>\<stdarg.h></code>
* Low-level output using <code>write()</code>
* Efficient custom parsing logic

**Format Specifiers Supported:** <code>%c</code> (char), <code>%s</code> (string), <code>%d</code> / <code>%i</code> (integers), <code>%%</code> (percent)

---

## Prototype

```c
int _printf(const char *format, ...);
```

---

## Project Structure

```text
_printf.c           → Core logic for parsing & printing
helpers.c           → Helper functions for specifier output
main.h              → Header file with declarations and macros
test/main.c         → Sample test cases
man_3_printf        → Manual page file
```

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o my_printf
```

---

## Usage Examples

```c
_printf("Hello, %s!", "Najwa");      // Hello, Najwa!
_printf("Value: %d%%", 100);         // Value: 100%
_printf("Char: %c\n", 'A');         // Char: A
```

---

## Manual Page

To view the manual page:

```bash
man ./man_3_printf
```

---

## Testing

Compare with the standard <code>printf</code> for validation:

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

<p align="center">
  <img src="https://readme-typing-svg.herokuapp.com?center=true&size=20&duration=4000&pause=1000&color=36BCF7&width=410&lines=Crafted+by+Najwa+%26+Haifa+with+clarity+%26+code" alt="Typing Authors" />
</p>

<p align="center">Holberton School — June 2025</p>

---

## Connect With Us

* Najwa Aljunaidel → [@NajwaAljunaidel](https://github.com/NajwaAljunaidel)
* Haifa Hasher → [@Haifahasher](https://github.com/Haifahasher)

