.686
.model flat,stdcall
.stack 100h

.data

X dw 87;
Y dw 60;
Z dw -2;
M dw ?;
T dw ?; X - � ����������� ������� �� 2 ���� ������
N dw ?; Y - � ����������� ������� �� 2 ���� ������
first_sum dw ?; ������ ��������� 
second_sum dw ?; ������ ���������
.code

ExitProcess PROTO STDCALL :DWORD
Start:

mov ax, X;
mov T, ax;
ROR T,2; ����������� X' �������� X � ������ ����������� ����� �� 2 ���� ������

mov ax, Y;
mov N, ax;
ROR N,2;����������� Y' �������� Y � ������ �����������  ����� �� 2 ���� ������

mov ax, T;
sub ax, Y;
mov first_sum, ax;������� ������� ����� X' � Y

mov ax, Z;
and ax, N;
mov second_sum, ax;������� ���������� � ����� Z � Y'

mov ax, first_sum;
add ax, second_sum;
mov M, ax;���������� first_sum � second_sum � ���������� ��������� � M
exit:
Invoke ExitProcess,1
End Start
