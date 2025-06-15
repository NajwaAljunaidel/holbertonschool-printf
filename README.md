<div align="right">
  <img src="https://private-user-images.githubusercontent.com/197754999/434705190-5f8d33ce-fed8-438a-935c-a9916afef26e.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NDk5NTQxNjgsIm5iZiI6MTc0OTk1Mzg2OCwicGF0aCI6Ii8xOTc3NTQ5OTkvNDM0NzA1MTkwLTVmOGQzM2NlLWZlZDgtNDM4YS05MzVjLWE5OTE2YWZlZjI2ZS5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjUwNjE1JTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI1MDYxNVQwMjE3NDhaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT01YjMxZjc1MjA5MWZlZjUwMzQ5YmY0MzEwY2Q2YzhjMjFjMGE2MjYyN2EyMGE2N2VkYzcwZmM0Zjg2NzA3NDQwJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.scT5Z-IvAbM2qpUeAAujRNrZjPEWjrxlUaxEHn5l9h0" alt="Holberton Logo" width="80">
</div>

# <a><img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" width=3% height=3%></img></a> _printf

<p align="center">
  <img src="https://readme-typing-svg.herokuapp.com?center=true&size=28&duration=3000&pause=1000&color=FF69B4&width=435&lines=printf+gets+personal+—+by+Najwa+and+Haifa" alt="Typing SVG" />
</p>

---

## Printf Manual

### Overview
The `_printf` project is a thoughtful re-creation of the standard C `printf` function. Engineered by Najwa & Haifa at Holberton School, it emphasizes both correctness and design clarity.

**Key Features:**
- Supports variadic arguments via `<stdarg.h>`
- Low-level output using `write()`
- Efficient custom parsing logic

**Supported Format Specifiers:** `%c` (char), `%s` (string), `%d` / `%i` (integers), `%%` (percent)

---

### Prototype
```c
int _printf(const char *format, ...);
Project Files
📁 _printf.c       → Main logic
📁 helpers.c       → Helper functions
📁 main.h          → Header file
📁 test/main.c     → Test driver
📁 man_3_printf    → Manual page
Usage Examples
_printf("Hello %s!", "Najwa");  // Hello Najwa!
_printf("Score: %d%%", 100);   // Score: 100%
Testing
// Compare with standard printf
_printf("Char: %c\n", 'H');
printf("Char: %c\n", 'H');
Authors
Najwa Aljunaidel

Haifa Hasher

<div align="center"> <img src="https://github.com/NajwaAljunaidel/holbertonschool-printf/blob/main/man_example.png?raw=true" width="200" alt="Manual Example"> </div> ```

