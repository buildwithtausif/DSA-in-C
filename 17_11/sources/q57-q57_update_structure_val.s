	.file	"q57_update_structure_val.c"
	.text
	.section	.rodata
.LC0:
	.string	"Enter updated salary for %s: "
.LC1:
	.string	"%d"
	.text
	.globl	update
	.type	update, @function
update:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	leaq	16(%rbp), %rsi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	116(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movq	-24(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	24(%rbp), %rbx
	movq	%rcx, (%rax)
	movq	%rbx, 8(%rax)
	movq	32(%rbp), %rcx
	movq	40(%rbp), %rbx
	movq	%rcx, 16(%rax)
	movq	%rbx, 24(%rax)
	movq	48(%rbp), %rcx
	movq	56(%rbp), %rbx
	movq	%rcx, 32(%rax)
	movq	%rbx, 40(%rax)
	movq	64(%rbp), %rcx
	movq	72(%rbp), %rbx
	movq	%rcx, 48(%rax)
	movq	%rbx, 56(%rax)
	movq	80(%rbp), %rcx
	movq	88(%rbp), %rbx
	movq	%rcx, 64(%rax)
	movq	%rbx, 72(%rax)
	movq	96(%rbp), %rcx
	movq	104(%rbp), %rbx
	movq	%rcx, 80(%rax)
	movq	%rbx, 88(%rax)
	movq	112(%rbp), %rdx
	movq	%rdx, 96(%rax)
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	update, .-update
	.section	.rodata
.LC2:
	.string	"Tausif Alam, BCA-1EA\n"
.LC3:
	.string	"Enter size of your company: "
	.align 8
.LC4:
	.string	"Enter Employee names & Salaries: "
.LC5:
	.string	"%s %d"
	.align 8
.LC6:
	.string	"\n\n-------------------OUTPUT-BEFORE-UPDATE-------------------\n"
	.align 8
.LC7:
	.string	"\n\nEmployee Name         Salary \n"
.LC8:
	.string	"%s       %d\n"
	.align 8
.LC9:
	.string	"\n\n-------------------OUTPUT-AFTER-UPDATE-------------------\n"
	.align 8
.LC10:
	.string	"\n\nEmployee Name        Salary \n"
.LC11:
	.string	"%s         %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$144, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	%rsp, %rax
	movq	%rax, %r12
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-48(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-48(%rbp), %ecx
	movslq	%ecx, %rax
	subq	$1, %rax
	movq	%rax, -40(%rbp)
	movslq	%ecx, %rax
	movq	%rax, %rsi
	movl	$0, %edi
	movq	%rsi, %rax
	movq	%rdi, %rdx
	shldq	$1, %rax, %rdx
	addq	%rax, %rax
	addq	%rsi, %rax
	adcq	%rdi, %rdx
	shldq	$2, %rax, %rdx
	salq	$2, %rax
	addq	%rsi, %rax
	adcq	%rdi, %rdx
	shldq	$6, %rax, %rdx
	salq	$6, %rax
	movslq	%ecx, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movslq	%ecx, %rax
	movq	%rax, %rsi
	movl	$0, %edi
	movq	%rsi, %rax
	movq	%rdi, %rdx
	shldq	$1, %rax, %rdx
	addq	%rax, %rax
	addq	%rsi, %rax
	adcq	%rdi, %rdx
	shldq	$2, %rax, %rdx
	salq	$2, %rax
	addq	%rsi, %rax
	adcq	%rdi, %rdx
	shldq	$6, %rax, %rdx
	salq	$6, %rax
	movslq	%ecx, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	%rax, %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %ebx
	movl	$0, %edx
	divq	%rbx
	imulq	$16, %rax, %rax
	movq	%rax, %rcx
	andq	$-4096, %rcx
	movq	%rsp, %rdx
	subq	%rcx, %rdx
.L4:
	cmpq	%rdx, %rsp
	je	.L5
	subq	$4096, %rsp
	orq	$0, 4088(%rsp)
	jmp	.L4
.L5:
	movq	%rax, %rdx
	andl	$4095, %edx
	subq	%rdx, %rsp
	movq	%rax, %rdx
	andl	$4095, %edx
	testq	%rdx, %rdx
	je	.L6
	andl	$4095, %eax
	subq	$8, %rax
	addq	%rsp, %rax
	orq	$0, (%rax)
.L6:
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -32(%rbp)
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -44(%rbp)
	jmp	.L7
.L8:
	movl	-44(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	96(%rax), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	leaq	4(%rax), %rcx
	movl	-44(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	-32(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rcx, %rdx
	movq	%rax, %rsi
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	addl	$1, -44(%rbp)
.L7:
	movl	-48(%rbp), %eax
	cmpl	%eax, -44(%rbp)
	jl	.L8
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, -44(%rbp)
	jmp	.L9
.L10:
	movq	-32(%rbp), %rcx
	movl	-44(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	addq	$100, %rax
	movl	(%rax), %ecx
	movl	-44(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	-32(%rbp), %rdx
	addq	%rdx, %rax
	movl	%ecx, %edx
	movq	%rax, %rsi
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -44(%rbp)
.L9:
	movl	-48(%rbp), %eax
	cmpl	%eax, -44(%rbp)
	jl	.L10
	movl	$0, -44(%rbp)
	jmp	.L11
.L12:
	movq	-32(%rbp), %rcx
	movl	-44(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	leaq	(%rcx,%rax), %rbx
	leaq	-160(%rbp), %rcx
	subq	$8, %rsp
	movq	-32(%rbp), %rsi
	movl	-44(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rsi, %rax
	subq	$104, %rsp
	movq	%rsp, %rdx
	movq	(%rax), %rsi
	movq	8(%rax), %rdi
	movq	%rsi, (%rdx)
	movq	%rdi, 8(%rdx)
	movq	16(%rax), %rsi
	movq	24(%rax), %rdi
	movq	%rsi, 16(%rdx)
	movq	%rdi, 24(%rdx)
	movq	32(%rax), %rsi
	movq	40(%rax), %rdi
	movq	%rsi, 32(%rdx)
	movq	%rdi, 40(%rdx)
	movq	48(%rax), %rsi
	movq	56(%rax), %rdi
	movq	%rsi, 48(%rdx)
	movq	%rdi, 56(%rdx)
	movq	64(%rax), %rsi
	movq	72(%rax), %rdi
	movq	%rsi, 64(%rdx)
	movq	%rdi, 72(%rdx)
	movq	80(%rax), %rsi
	movq	88(%rax), %rdi
	movq	%rsi, 80(%rdx)
	movq	%rdi, 88(%rdx)
	movq	96(%rax), %rax
	movq	%rax, 96(%rdx)
	movq	%rcx, %rdi
	call	update
	addq	$112, %rsp
	movq	-160(%rbp), %rax
	movq	-152(%rbp), %rdx
	movq	%rax, (%rbx)
	movq	%rdx, 8(%rbx)
	movq	-144(%rbp), %rax
	movq	-136(%rbp), %rdx
	movq	%rax, 16(%rbx)
	movq	%rdx, 24(%rbx)
	movq	-128(%rbp), %rax
	movq	-120(%rbp), %rdx
	movq	%rax, 32(%rbx)
	movq	%rdx, 40(%rbx)
	movq	-112(%rbp), %rax
	movq	-104(%rbp), %rdx
	movq	%rax, 48(%rbx)
	movq	%rdx, 56(%rbx)
	movq	-96(%rbp), %rax
	movq	-88(%rbp), %rdx
	movq	%rax, 64(%rbx)
	movq	%rdx, 72(%rbx)
	movq	-80(%rbp), %rax
	movq	-72(%rbp), %rdx
	movq	%rax, 80(%rbx)
	movq	%rdx, 88(%rbx)
	movq	-64(%rbp), %rax
	movq	%rax, 96(%rbx)
	addl	$1, -44(%rbp)
.L11:
	movl	-48(%rbp), %eax
	cmpl	%eax, -44(%rbp)
	jl	.L12
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, -44(%rbp)
	jmp	.L13
.L14:
	movq	-32(%rbp), %rcx
	movl	-44(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	addq	%rcx, %rax
	addq	$100, %rax
	movl	(%rax), %ecx
	movl	-44(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$3, %rax
	movq	-32(%rbp), %rdx
	addq	%rdx, %rax
	movl	%ecx, %edx
	movq	%rax, %rsi
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -44(%rbp)
.L13:
	movl	-48(%rbp), %eax
	cmpl	%eax, -44(%rbp)
	jl	.L14
	movl	$0, %eax
	movq	%r12, %rsp
	movq	-24(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L16
	call	__stack_chk_fail@PLT
.L16:
	leaq	-16(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 13.3.0-6ubuntu2~24.04) 13.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
