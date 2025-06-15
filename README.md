<h1 align="center">_printf</h1>
<h3 align="center" style="color: #36BCF7;">Custom C Printf Function</h3>

---

## 📜 Description

The `_printf` project is a custom implementation of the standard C `printf` function.

Built using:
- Variadic functions (`stdarg.h`)
- System calls like `write()`
- Format specifier parsing logic

Supported format specifiers:  
- `%c` : character  
- `%s` : string  
- `%d`, `%i` : signed integer  
- `%%` : literal percent sign

---

## 🧪 Prototype

```c
int _printf(const char *format, ...)
;
---

## 📂 Project Structure

| File            | Description                                                            |
|-----------------|------------------------------------------------------------------------|
| `_printf.c`     | Contains the main logic for parsing and processing format strings     |
| `helpers.c`     | Helper functions for printing chars, strings, integers, and '%'       |
| `main.h`        | Header file containing function prototypes and macros                 |
| `man_3_printf`  | Manual (man) page for documentation                                   |
| `README.md`     | This file, contains project overview and usage                        |
---

## 🧪 Usage Examples

```c
_printf("Hello, %s!\n", "Najwa");
// Output: Hello, Najwa!

_printf("Value: %d%%\n", 100);
// Output: Value: 100%

_printf("Letter: %c, Number: %d\n", 'A', 42);
// Output: Letter: A, Number: 42
---

## 📘 Manual Page

To view the manual page for `_printf`, use the command:

```bash
man ./man_3_printf
---

## 👩‍💻 Authors

Built with precision and love at Holberton School 🛠️

- **Najwa Aljunaidel**
- **Haifa Hasher**

📅 June 2025

