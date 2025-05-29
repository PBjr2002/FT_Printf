# FT_Printf

**FT_Printf** was a project aimed at replicating the behavior of the standard C `printf()` function. This task involved handling formatted output for various data types using variadic arguments, offering a deeper understanding of how formatted printing works under the hood. The goal was to create a custom function, `ft_printf()`, that mimics the behavior of the original `printf()` in libc, supporting a set of essential format specifiers.

---

## Function Prototype


```c
int ft_printf(const char *format, ...);
```

---

## Supported Format Specifiers

| Specifier | Description                                                                 |
|-----------|-----------------------------------------------------------------------------|
| `%c`      | Prints a single character.                                                  |
| `%s`      | Prints a string (null-terminated).                                          |
| `%p`      | Prints a pointer address in hexadecimal format, prefixed with `0x`.         |
| `%d`      | Prints a signed decimal integer.                                            |
| `%i`      | Prints a signed decimal integer (same as `%d`).                             |
| `%u`      | Prints an unsigned decimal integer.                                         |
| `%x`      | Prints an unsigned integer in lowercase hexadecimal.                        |
| `%X`      | Prints an unsigned integer in uppercase hexadecimal.                        |
| `%%`      | Prints a literal percent sign.                                              |
