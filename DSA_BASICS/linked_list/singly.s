	.file	"singly.c"
	.comm	_head, 4, 2
	.comm	_current, 4, 2
	.comm	_last, 4, 2
	.globl	_node_count
	.bss
	.align 4
_node_count:
	.space 4
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "\12"
	.ascii "1.Append\12"
	.ascii "2.Insert\12"
	.ascii "3.Delete\12"
	.ascii "4.Display\12"
	.ascii "5.Search\12"
	.ascii "6.Merge\12"
	.ascii "7.Exit\12Enter Your Choice: \0"
LC1:
	.ascii "%d\0"
LC2:
	.ascii "\12Invalid Choice\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
L12:
	movl	$LC0, (%esp)
	call	_printf
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	28(%esp), %eax
	cmpl	$7, %eax
	ja	L2
	movl	L4(,%eax,4), %eax
	jmp	*%eax
	.section .rdata,"dr"
	.align 4
L4:
	.long	L2
	.long	L3
	.long	L5
	.long	L6
	.long	L7
	.long	L8
	.long	L9
	.long	L10
	.text
L3:
	call	_append
	jmp	L11
L5:
	call	_insert
	jmp	L11
L6:
	call	_delete
	jmp	L11
L7:
	call	_display
	jmp	L11
L8:
	call	_search
	jmp	L11
L9:
	call	_merge
	jmp	L11
L10:
	movl	$0, (%esp)
	call	_exit
L2:
	movl	$LC2, (%esp)
	call	_puts
L11:
	jmp	L12
	.cfi_endproc
LFE14:
	.section .rdata,"dr"
LC3:
	.ascii "Memory allocation failed. \0"
LC4:
	.ascii "\12Enter an int-data: \0"
	.text
	.globl	_append
	.def	_append;	.scl	2;	.type	32;	.endef
_append:
LFB15:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	_node_count, %eax
	testl	%eax, %eax
	jle	L14
	movl	_head, %eax
	testl	%eax, %eax
	jne	L15
L14:
	movl	$8, (%esp)
	call	_malloc
	movl	%eax, _current
	movl	_current, %eax
	movl	%eax, _last
	movl	_last, %eax
	movl	%eax, _head
	movl	_current, %eax
	testl	%eax, %eax
	jne	L16
	movl	$LC3, (%esp)
	call	_puts
	jmp	L13
L16:
	movl	$LC4, (%esp)
	call	_printf
	movl	_current, %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	_current, %eax
	movl	$0, 4(%eax)
	movl	_current, %eax
	movl	%eax, _last
	movl	_node_count, %eax
	addl	$1, %eax
	movl	%eax, _node_count
	jmp	L13
L15:
	movl	$8, (%esp)
	call	_malloc
	movl	%eax, _current
	movl	$LC4, (%esp)
	call	_printf
	movl	_current, %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	_current, %eax
	movl	$0, 4(%eax)
	movl	_last, %eax
	movl	_current, %edx
	movl	%edx, 4(%eax)
	movl	_current, %eax
	movl	%eax, _last
	movl	_node_count, %eax
	addl	$1, %eax
	movl	%eax, _node_count
L13:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE15:
	.section .rdata,"dr"
LC5:
	.ascii "\12Empty list!, use append()\0"
LC6:
	.ascii "\12Enter Position (nodes: %d): \0"
LC7:
	.ascii "\12Position is out-of-bound\0"
	.text
	.globl	_insert
	.def	_insert;	.scl	2;	.type	32;	.endef
_insert:
LFB16:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	_node_count, %eax
	testl	%eax, %eax
	jle	L19
	movl	_head, %eax
	testl	%eax, %eax
	jne	L20
L19:
	movl	$LC5, (%esp)
	call	_puts
	jmp	L21
L20:
	movl	$0, _current
	movl	$8, (%esp)
	call	_malloc
	movl	%eax, _current
	movl	$LC4, (%esp)
	call	_printf
	movl	_current, %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	_current, %eax
	movl	$0, 4(%eax)
	movl	_node_count, %eax
	movl	%eax, 4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	leal	-20(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	-20(%ebp), %eax
	cmpl	$1, %eax
	jne	L22
	movl	_current, %eax
	movl	_head, %edx
	movl	%edx, 4(%eax)
	movl	_current, %eax
	movl	%eax, _head
	movl	_node_count, %eax
	addl	$1, %eax
	movl	%eax, _node_count
	jmp	L26
L22:
	movl	-20(%ebp), %eax
	cmpl	$1, %eax
	jle	L23
	movl	-20(%ebp), %edx
	movl	_node_count, %eax
	cmpl	%eax, %edx
	jg	L23
	movl	_head, %eax
	movl	%eax, -16(%ebp)
	movl	$1, -12(%ebp)
	jmp	L24
L25:
	movl	-16(%ebp), %eax
	movl	4(%eax), %eax
	movl	%eax, -16(%ebp)
	addl	$1, -12(%ebp)
L24:
	movl	-20(%ebp), %eax
	subl	$2, %eax
	cmpl	-12(%ebp), %eax
	jge	L25
	movl	_current, %eax
	movl	-16(%ebp), %edx
	movl	4(%edx), %edx
	movl	%edx, 4(%eax)
	movl	_current, %edx
	movl	-16(%ebp), %eax
	movl	%edx, 4(%eax)
	movl	_node_count, %eax
	addl	$1, %eax
	movl	%eax, _node_count
	jmp	L21
L23:
	movl	$LC7, (%esp)
	call	_printf
	jmp	L26
L21:
L26:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE16:
	.section .rdata,"dr"
LC8:
	.ascii "\12Enter Position: \0"
	.text
	.globl	_delete
	.def	_delete;	.scl	2;	.type	32;	.endef
_delete:
LFB17:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	_node_count, %eax
	testl	%eax, %eax
	jle	L28
	movl	_head, %eax
	testl	%eax, %eax
	jne	L29
L28:
	movl	$LC5, (%esp)
	call	_puts
	jmp	L30
L29:
	movl	$LC8, (%esp)
	call	_printf
	leal	-28(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	-28(%ebp), %eax
	cmpl	$1, %eax
	jne	L31
	movl	_head, %eax
	movl	%eax, -20(%ebp)
	movl	_head, %eax
	movl	4(%eax), %eax
	movl	%eax, _head
	movl	-20(%ebp), %eax
	movl	%eax, (%esp)
	call	_free
	movl	_node_count, %eax
	subl	$1, %eax
	movl	%eax, _node_count
	jmp	L35
L31:
	movl	-28(%ebp), %eax
	cmpl	$1, %eax
	jle	L32
	movl	-28(%ebp), %edx
	movl	_node_count, %eax
	cmpl	%eax, %edx
	jg	L32
	movl	_head, %eax
	movl	%eax, -16(%ebp)
	movl	$1, -12(%ebp)
	jmp	L33
L34:
	movl	-16(%ebp), %eax
	movl	4(%eax), %eax
	movl	%eax, -16(%ebp)
	addl	$1, -12(%ebp)
L33:
	movl	-28(%ebp), %eax
	subl	$2, %eax
	cmpl	-12(%ebp), %eax
	jge	L34
	movl	-16(%ebp), %eax
	movl	4(%eax), %eax
	movl	%eax, -24(%ebp)
	movl	-16(%ebp), %eax
	movl	4(%eax), %eax
	movl	4(%eax), %edx
	movl	-16(%ebp), %eax
	movl	%edx, 4(%eax)
	movl	_node_count, %eax
	subl	$1, %eax
	movl	%eax, _node_count
	movl	-24(%ebp), %eax
	movl	%eax, (%esp)
	call	_free
	jmp	L30
L32:
	movl	$LC7, (%esp)
	call	_printf
	jmp	L35
L30:
L35:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE17:
	.section .rdata,"dr"
LC9:
	.ascii "\12Node_Data_%d =  %d\12\0"
	.text
	.globl	_display
	.def	_display;	.scl	2;	.type	32;	.endef
_display:
LFB18:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	_node_count, %eax
	testl	%eax, %eax
	jle	L37
	movl	_head, %eax
	testl	%eax, %eax
	jne	L38
L37:
	movl	$LC5, (%esp)
	call	_puts
	jmp	L39
L38:
	movl	_head, %eax
	movl	%eax, _current
	movl	$1, -12(%ebp)
	jmp	L40
L41:
	movl	_current, %eax
	movl	(%eax), %eax
	movl	%eax, 8(%esp)
	movl	-12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC9, (%esp)
	call	_printf
	movl	_current, %eax
	movl	4(%eax), %eax
	movl	%eax, _current
	addl	$1, -12(%ebp)
L40:
	movl	_node_count, %eax
	cmpl	%eax, -12(%ebp)
	jle	L41
L39:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE18:
	.section .rdata,"dr"
LC10:
	.ascii "\12Enter item to search: \0"
LC11:
	.ascii "\12Data is found\0"
LC12:
	.ascii "\12Data not found\0"
	.text
	.globl	_search
	.def	_search;	.scl	2;	.type	32;	.endef
_search:
LFB19:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$0, -12(%ebp)
	movl	$LC10, (%esp)
	call	_printf
	leal	-16(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	_head, %eax
	testl	%eax, %eax
	je	L43
	movl	_node_count, %eax
	testl	%eax, %eax
	jg	L44
L43:
	movl	$LC5, (%esp)
	call	_puts
	jmp	L51
L44:
	movl	_head, %eax
	movl	%eax, _current
	jmp	L46
L49:
	movl	_current, %eax
	movl	(%eax), %edx
	movl	-16(%ebp), %eax
	cmpl	%eax, %edx
	jne	L47
	movl	$1, -12(%ebp)
	jmp	L48
L47:
	movl	_current, %eax
	movl	4(%eax), %eax
	movl	%eax, _current
L46:
	movl	_current, %eax
	testl	%eax, %eax
	jne	L49
L48:
	cmpl	$0, -12(%ebp)
	jne	L50
	movl	$LC11, (%esp)
	call	_printf
	jmp	L51
L50:
	movl	$LC12, (%esp)
	call	_printf
L51:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE19:
	.globl	_merge
	.def	_merge;	.scl	2;	.type	32;	.endef
_merge:
LFB20:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	nop
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE20:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_exit;	.scl	2;	.type	32;	.endef
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_malloc;	.scl	2;	.type	32;	.endef
	.def	_free;	.scl	2;	.type	32;	.endef
