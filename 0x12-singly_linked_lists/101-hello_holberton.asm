.LC0:
		.string "Hello, Holberton\n"
main:
		push	rbp
		mov		rbp, rsp
		mov		edi, OFFSET FLAT:.LC0
		mov		eax, 0
		call	printf
		mov		eax, 0
		pop		rbp
		ret
