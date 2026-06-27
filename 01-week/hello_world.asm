section .data
    hello db "Hello, world!", 10        ; 10 is the newline byte (\n)
    helloLen equ $- hello                 ; len = (current address) - (msg's address) = byte count

section .text
    global _start                       ; the linker looks for _start as the entry point

_start:
    ; write(1, msg, len)
    mov rax, 1                          ; syscall #1 = write
    mov rdi, 1                          ; arg1: fd 1 = stdout
    mov rsi, hello                      ; arg2: pointer to the bytes
    mov rdx, helloLen                   ; arg3: how many bytes
    syscall

    ; exit(0)
    mov rax, 60                         ; syscall #60 = exit
    mov rdi, 0                          ; arg1: exit code
    syscall
