# <a> <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/C_Programming_Language.svg/1200px-C_Programming_Language.svg.png" width=3% heigth=3% ></img></a> \_printf

<p align="center">
  <img src="https://readme-typing-svg.herokuapp.com?center=true&size=28&duration=3000&pause=1000&color=36BCF7&width=435&lines=Welcome+to+printf+function+lesson;printf+gets+personal+—+powered+by+Najwa+%26+Haifa" alt="Typing SVG" />
</p>

<h2 align="center">Description</h2>
<table>
  <tr>
    <td style="text-align:left;">
      The <code>_printf</code> project is a group assignment at Holberton School, re-creating the functionality of the standard <code>printf</code> function in C.<br><br>
      This custom version replicates basic output features using:
      <ul>
        <li>Variadic arguments via <code>&lt;stdarg.h&gt;</code></li>
        <li>System calls like <code>write()</code></li>
        <li>Custom specifier parsing logic</li>
      </ul>

```
  <strong>Supported Format Specifiers:</strong> <code>%c</code> (char), <code>%s</code> (string), <code>%d</code>/<code>%i</code> (integers), <code>%%</code> (percent)
</td>
<td style="width:150px; text-align:right; vertical-align:top;">
  <img src="https://github.com/user-attachments/assets/5f8d33ce-fed8-438a-935c-a9916afef26e" width="130">
</td>
```

  </tr>
</table>

---

## Prototype

```c
int _printf(const char *format, ...);
```

## Project Structure

```text
_printf.c           → Core logic that processes format strings
helpers.c           → Functions: print_char, print_string, print_percent, print_integer
main.h              → Prototypes and macros
test/main.c         → Sample test cases
man_3_printf        → Manual file
```

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o my_printf
```

## Usage

```c
_printf("Hello, %s!", "Najwa");      // Hello, Najwa!
_printf("Value: %d%%", 100);         // Value: 100%
_printf("Char: %c\n", 'A');         // Char: A
```

## Manual

To view the manual page:

```bash
man ./man_3_printf
```

## Testing

You can compare output with the original printf:

```c
_printf("Character: %c\n", 'N');
printf("Character: %c\n", 'N');

_printf("String: %s\n", "Najwa");
printf("String: %s\n", "Najwa");

_printf("Integer: %d\n", 42);
printf("Integer: %d\n", 42);
```

## Authors

<p align="center">
  <img src="https://readme-typing-svg.herokuapp.com?center=true&size=20&duration=4000&pause=1000&color=36BCF7&width=410&lines=Built+by+Najwa+Aljunaidel+%26+Haifa+Hasher;With+precision+and+style" alt="Typing Authors" />
</p>

Holberton School – June 2025

## 🔗 Connect With Us

* Najwa Aljunaidel: [@NajwaAljunaidel](https://github.com/NajwaAljunaidel)
* Haifa Hasher: [@Haifahasher](https://github.com/Haifahasher)

