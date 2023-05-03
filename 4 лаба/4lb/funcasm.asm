.586 
.MODEL flat,C
.DATA
.CODE

extern trigonometriya:near ; объ€вление внешней функции 
public func
func proc C
	push ebp
	mov ebp,esp

	push dword ptr [ebp+8]
	call trigonometriya
	mov esp,ebp

	pop ebp
	ret; выход из подпрограммы
func endp
End
