;Prints "Hello, Holberton" followed by a new line

extern printf
global main

main:
	mov rsi, message
	mov rdi, format_specifier
	mov rax, 0x0
	call printf

	mov eax, 0x0	; exit
	ret				; return

section .data
	message: DB "Hello, Holberton", 0x0
	format_specifier: DB "%s", 0xa, 0x0
