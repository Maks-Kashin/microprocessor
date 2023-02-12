.686
.model flat,stdcall
.stack 100h

.data

X dw 87;
Y dw 60;
Z dw -2;
M dw ?;
T dw ?; X - с циклическим сдвигом на 2 бита вправо
N dw ?; Y - с циклическим сдвигом на 2 бита вправо
first_sum dw ?; первое слагаемое 
second_sum dw ?; второе слагаемое
.code

ExitProcess PROTO STDCALL :DWORD
Start:

mov ax, X;
mov T, ax;
ROR T,2; присваиваем X' значение X и делаем циклический сдвиг на 2 бита вправо

mov ax, Y;
mov N, ax;
ROR N,2;присваиваем Y' значение Y и делаем циклический  сдвиг на 2 бита вправо

mov ax, T;
sub ax, Y;
mov first_sum, ax;считаем разницу между X' и Y

mov ax, Z;
and ax, N;
mov second_sum, ax;считаем логическое И между Z и Y'

mov ax, first_sum;
add ax, second_sum;
mov M, ax;складываем first_sum и second_sum и записываем результат в M
exit:
Invoke ExitProcess,1
End Start
