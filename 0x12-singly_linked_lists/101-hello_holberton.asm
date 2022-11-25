org 0X100

mov dx, msg
mov bx, 1
mov ah, 0X40
int 0X21

mov ah, 0X4c
int 0X21

msg db 'Hello, Holberton', 0x0d, 0x0a
