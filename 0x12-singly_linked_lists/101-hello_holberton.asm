section .data
    hello db "Hello, Holberton", 0
    fmt db "%s", 0

section .text
    global main

extern printf

main:
    mov rdi, fmt
    mov rsi, hello
    xor rax, rax  ; Clear RAX register to indicate there are no floating-point arguments
    call printf

    ret
/* finish */
