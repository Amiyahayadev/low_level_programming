section .data
	format db "Hello, Holberton", 0
	newline db 10, 0  ; Newline character (\n)
	fmt db "%s%s", 0

section .text
	extern printf

global main
main:
	sub rsp, 8    ; Align the stack on a 16-byte boundary
	; Call printf with the format string
	mov rdi, fmt
	mov rsi, format
	mov rdx, newline
	xor eax, eax    ; Clear the upper 32 bits of rax
	call printf

	add rsp, 8    ; Restore the stack pointer
	xor eax, eax    ; Return 0
	
	ret

