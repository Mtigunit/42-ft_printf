# ft_printf

The goal of this project is to recode `printf()` from the standard C library. You will mainly learn about using a variable number of arguments.

## Introduction
In this project, you will discover a popular and versatile C function: `printf()`. It is a great opportunity to improve your programming skills and learn about variadic functions in C.

Once this assignment is completed, you will be allowed to add your `ft_printf()` function to your `libft` so you can use it in your future C projects.

## Mandatory Part
Program name: `libftprintf.a`

You have to recode the `printf()` function from the standard C library. The prototype of `ft_printf()` should be:

```c
int ft_printf(const char *, ...);
```

Requirements:
- Don't implement the buffer management of the original `printf()`.
- Your function must handle the following conversions: `c`, `s`, `p`, `d`, `i`, `u`, `x`, `X`, `%`.
- Your function will be compared against the original `printf()`.
- Use the `ar` command to create your library. Using the `libtool` command is forbidden.
- Your `libftprintf.a` library should be created at the root of your repository.
