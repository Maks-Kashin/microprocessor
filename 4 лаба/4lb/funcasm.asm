.586 
.MODEL flat,C
.DATA
.CODE

extern trigonometriya:near ; ���������� ������� ������� 
public func
func proc C
	push ebp
	mov ebp,esp

	push dword ptr [ebp+8]
	call trigonometriya
	mov esp,ebp

	pop ebp
	ret; ����� �� ������������
func endp
End
