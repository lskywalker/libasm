global		_ft_read

extern		___error

_ft_read:					; rax = errno
	mov		rax, 0x2000003	; system call for write
	syscall
	jc		error			
	ret

error:
	mov		r15, rax		; Save errno
	push	r15
	call	___error			; Retrieve addres of errno
	pop		r15
	mov		[rax], r15		; Put errno in return of __error
	mov		rax, -1
	ret