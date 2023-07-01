extern printf

section .data

str: db "Hello, Holberton", 0
format: db "%s", 10, 0

section .text
global main
main:
push rbp
mov rdi,format
mov rsi,str
mov rax,0
call printf
pop rbp
mov rax,0
ret

