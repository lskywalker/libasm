global		_ft_strdup

extern		_ft_strlen
extern		_ft_strcpy
extern		_malloc

_ft_strdup:
	cmp		rdi, 0		; Check empty string
	jne		length
	ret

length:
	push	rdi			; Save the input
	call	_ft_strlen	; rdi is still the input
	inc		rax			; Increase mallocsize for 1 more
	mov		rdi, rax	; Set size for malloc

malloc:
	call	_malloc		; Allocate memory
	cmp		rax, 0		; Malloc errorcheck
	je		error

copy:
	pop		rsi			; Input as src
	mov		rdi, rax	; Allocated memory is for dest/rdi
	call	_ft_strcpy	; Put the src in dest
	ret					; Return the return from strcpy

error:
	pop		rdi
	ret