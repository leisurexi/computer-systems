	.file	"select-structure.c"
	.text
	.globl	get_cont
	.type	get_cont, @function
get_cont:
.LFB0:
	.cfi_startproc
	endbr64
	cmpq	%rsi, %rdi
	jbe	.L2
	movl	(%rsi), %eax
	ret
.L2:
	movl	(%rdi), %eax
	ret
	.cfi_endproc
.LFE0:
	.size	get_cont, .-get_cont
	.globl	sw_test
	.type	sw_test, @function
sw_test:
.LFB1:
	.cfi_startproc
	endbr64
	leal	-10(%rdi), %ecx
	cmpl	$7, %ecx
	ja	.L11
	movl	%ecx, %ecx
	leaq	.L7(%rip), %r8
	movslq	(%r8,%rcx,4), %rax
	addq	%r8, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L7:
	.long	.L10-.L7
	.long	.L11-.L7
	.long	.L6-.L7
	.long	.L11-.L7
	.long	.L9-.L7
	.long	.L8-.L7
	.long	.L11-.L7
	.long	.L6-.L7
	.text
.L9:
	movl	%esi, %eax
	ret
.L8:
	andl	$15, %esi
	movl	%esi, %edx
.L10:
	leal	50(%rdx), %eax
	ret
.L6:
	leal	50(%rsi), %eax
	ret
.L11:
	movl	%edi, %eax
	ret
	.cfi_endproc
.LFE1:
	.size	sw_test, .-sw_test
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	endbr64
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.2.1-9ubuntu2) 9.2.1 20191008"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
