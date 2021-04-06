movl	$0, -4(%rbp)
movl		&1, -8(%rbp)
jmp		.L2

L3:
	movl	-8(%rbp), %eax
	addl	%eax, -4(%rbp)
	addl	$1, -8(%rbp)

L2:
	cmpl 	$100, -8(%rbp)
	jle		.L3
