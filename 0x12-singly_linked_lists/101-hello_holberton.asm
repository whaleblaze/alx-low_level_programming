section .data
    msg db "Hello, Holberton", 0Ah

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp
    mov rdi, msg
    xor eax, eax
    call printf
    mov eax, 0
    pop rbp
    ret
