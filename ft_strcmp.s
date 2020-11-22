global		_ft_strcmp

_ft_strcmp:
	cmp		rdi, 0			; Check if first string is empty
	je		error1
	cmp		rsi, 0			; Check if second string is empty
	je		error2
	jmp		compare
increment:
	inc		rdi
	inc		rsi
	jmp		compare
error:
	mov		rax, 0
	ret
error1:
	cmp		rsi, 0			; Check if both strings empty
	je		error
	mov		dl, BYTE[rsi]
	mov		cl, 0
	jmp		return
error2:
	mov		cl, BYTE[rdi]
	mov		dl, 0
	jmp		return
compare:
	mov		cl, BYTE[rdi]
	mov		dl, BYTE[rsi]
	movzx	rcx, cl
	movzx	rdx, dl
	cmp		rcx, 0
	je		return
	cmp		rdx, 0
	je		return
	cmp		rcx, rdx
	je		increment
return:
	sub		rcx, rdx
	mov		rax, rcx
	ret
