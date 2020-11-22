global		_ft_strcpy

_ft_strcpy:							; rdi = dest, rsi = src, rbx = index
	mov		rbx, 0					; index on 0
	cmp		rsi, 0					; Check src input
	je		error
	jmp		copy
increment:
	inc		rbx
copy:								; Start copy process
	mov		al, BYTE[rsi + rbx]		; Set src in register
	mov		BYTE[rdi + rbx], al		; Set register in dest
	cmp		al, 0					; Check for \0
	je		return
	jmp		increment
error:
	mov		rax, 0					; Return NULL pointer
	ret
return:
	mov		rax, rdi				; Set dest in the return
	ret