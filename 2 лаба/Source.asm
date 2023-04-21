.686
.model flat,stdcall
.stack 100h
.data
arr dw 99C5h,2A6Ch,80CFh;
L dw 0;
M dw 0;
.code
ExitProcess PROTO STDCALL :DWORD
Start:
xor eax,eax ;очистка регистра EAX
xor ebx,ebx ;очистка регистра EBX
xor ecx,ecx ;очистка регистра ECX
xor edx,edx ;очистка регистра EDX
xor edi,edi ;очистка регистра EDI
xor esi,esi ;очистка регистра EDI
lea esi,[arr] ; для вычисления адреса
lea edi,[arr] ; для вычисления адреса
mov ecx,3;
@cycle:;
lodsw;
mov eax,99C5h;
mov ebx,2A6ch;
mov edx,80CFh;
xchg ah,al
xchg bh,bl
xchg dh,dl
stosw;
loop @cycle;
add eax,ebx;
sub eax,edx;
cmp eax,012Bh;
jge pp1;
jnl pp2;
pp1:
xor edx,edx ;очистка регистра EDX
mov ecx,eax;
mov ebx,2
div ebx;M/2
mov ecx,0012h;
sub eax,ecx;
jmp gg;
pp2:
mov edx,388Ah;
add eax,edx;
jmp gg;
gg:
cmp eax,0;
jg x11;
jnle x22;
x11:
mov ecx,0FF0h;
or eax,ecx;
jmp exit;
x22:
mov ecx,5555h;
mov ebx,-1;
imul eax,ebx;
xor eax,ecx;
jmp exit;
exit:
Invoke ExitProcess,1
End Start