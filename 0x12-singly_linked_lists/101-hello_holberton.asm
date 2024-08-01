;Prints "Hello, Holberton" followed by a new line

global main

section .data
	message: DB "Hello, Holberton", 0xa
	length: EQU $-message

main:
	mov rax, 1			;sys_write (
	mov rdi, 1			;	1,
	mov rsi, message	;	message,
	mov rdx, length		;	length
	syscall				;);

	mov rax, 60			;sys_exit (
	mov rdi, 69			;	success
	syscall				;);
