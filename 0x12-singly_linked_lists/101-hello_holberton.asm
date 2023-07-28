section .data
	hello db 'Hello, Holberton', 0

section .text
	global main
	extern printf

main:
	mov rdi, hello
	xor rax, rax

	call printf

	xor edi, edi

	mov eax, 60
	syscall

