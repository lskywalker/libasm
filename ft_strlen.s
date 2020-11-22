global		_ft_strlen

section		.text
_ft_strlen:					; rdi = string
	mov		rax, 0
	cmp		rdi, 0			; Check input string
	je		return
	jmp		compare
increment:					; add 1 to index and return value
	inc		rax				; Increment ret
	inc		rdi				; Increment index
compare:					; Check endstring
	cmp		BYTE[rdi], 0	; Compare to \0
	jne		increment		; Increment if not at the end
return:
	ret						; Return