
main.o:     file format elf64-x86-64


Disassembly of section .text:

0000000000000000 <main>:
   0:	55                   	push   %rbp
   1:	48 89 e5             	mov    %rsp,%rbp
   4:	48 8d 35 00 00 00 00 	lea    0x0(%rip),%rsi        # b <main+0xb>
   b:	48 8d 3d 00 00 00 00 	lea    0x0(%rip),%rdi        # 12 <main+0x12>
  12:	e8 00 00 00 00       	callq  17 <main+0x17>
  17:	be ba 12 03 00       	mov    $0x312ba,%esi
  1c:	48 89 c7             	mov    %rax,%rdi
  1f:	e8 00 00 00 00       	callq  24 <main+0x24>
  24:	48 8d 35 00 00 00 00 	lea    0x0(%rip),%rsi        # 2b <main+0x2b>
  2b:	48 89 c7             	mov    %rax,%rdi
  2e:	e8 00 00 00 00       	callq  33 <main+0x33>
  33:	b8 00 00 00 00       	mov    $0x0,%eax
  38:	5d                   	pop    %rbp
  39:	c3                   	retq   

000000000000003a <_Z41__static_initialization_and_destruction_0ii>:
  3a:	55                   	push   %rbp
  3b:	48 89 e5             	mov    %rsp,%rbp
  3e:	48 83 ec 10          	sub    $0x10,%rsp
  42:	89 7d fc             	mov    %edi,-0x4(%rbp)
  45:	89 75 f8             	mov    %esi,-0x8(%rbp)
  48:	83 7d fc 01          	cmpl   $0x1,-0x4(%rbp)
  4c:	75 32                	jne    80 <_Z41__static_initialization_and_destruction_0ii+0x46>
  4e:	81 7d f8 ff ff 00 00 	cmpl   $0xffff,-0x8(%rbp)
  55:	75 29                	jne    80 <_Z41__static_initialization_and_destruction_0ii+0x46>
  57:	48 8d 3d 00 00 00 00 	lea    0x0(%rip),%rdi        # 5e <_Z41__static_initialization_and_destruction_0ii+0x24>
  5e:	e8 00 00 00 00       	callq  63 <_Z41__static_initialization_and_destruction_0ii+0x29>
  63:	48 8d 15 00 00 00 00 	lea    0x0(%rip),%rdx        # 6a <_Z41__static_initialization_and_destruction_0ii+0x30>
  6a:	48 8d 35 00 00 00 00 	lea    0x0(%rip),%rsi        # 71 <_Z41__static_initialization_and_destruction_0ii+0x37>
  71:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 78 <_Z41__static_initialization_and_destruction_0ii+0x3e>
  78:	48 89 c7             	mov    %rax,%rdi
  7b:	e8 00 00 00 00       	callq  80 <_Z41__static_initialization_and_destruction_0ii+0x46>
  80:	90                   	nop
  81:	c9                   	leaveq 
  82:	c3                   	retq   

0000000000000083 <_GLOBAL__sub_I_main>:
  83:	55                   	push   %rbp
  84:	48 89 e5             	mov    %rsp,%rbp
  87:	be ff ff 00 00       	mov    $0xffff,%esi
  8c:	bf 01 00 00 00       	mov    $0x1,%edi
  91:	e8 a4 ff ff ff       	callq  3a <_Z41__static_initialization_and_destruction_0ii>
  96:	5d                   	pop    %rbp
  97:	c3                   	retq   

Disassembly of section .bss:

0000000000000000 <_ZStL8__ioinit>:
	...

Disassembly of section .rodata:

0000000000000000 <_ZStL19piecewise_construct>:
   0:	00 48 65             	add    %cl,0x65(%rax)
   3:	6c                   	insb   (%dx),%es:(%rdi)
   4:	6c                   	insb   (%dx),%es:(%rdi)
   5:	6f                   	outsl  %ds:(%rsi),(%dx)
   6:	20 00                	and    %al,(%rax)
   8:	21 21                	and    %esp,(%rcx)
   a:	0a 00                	or     (%rax),%al

Disassembly of section .init_array:

0000000000000000 <.init_array>:
	...

Disassembly of section .comment:

0000000000000000 <.comment>:
   0:	00 47 43             	add    %al,0x43(%rdi)
   3:	43 3a 20             	rex.XB cmp (%r8),%spl
   6:	28 55 62             	sub    %dl,0x62(%rbp)
   9:	75 6e                	jne    79 <_Z41__static_initialization_and_destruction_0ii+0x3f>
   b:	74 75                	je     82 <_Z41__static_initialization_and_destruction_0ii+0x48>
   d:	20 37                	and    %dh,(%rdi)
   f:	2e 35 2e 30 2d 33    	cs xor $0x332d302e,%eax
  15:	75 62                	jne    79 <_Z41__static_initialization_and_destruction_0ii+0x3f>
  17:	75 6e                	jne    87 <_GLOBAL__sub_I_main+0x4>
  19:	74 75                	je     90 <_GLOBAL__sub_I_main+0xd>
  1b:	31 7e 31             	xor    %edi,0x31(%rsi)
  1e:	38 2e                	cmp    %ch,(%rsi)
  20:	30 34 29             	xor    %dh,(%rcx,%rbp,1)
  23:	20 37                	and    %dh,(%rdi)
  25:	2e                   	cs
  26:	35                   	.byte 0x35
  27:	2e 30 00             	xor    %al,%cs:(%rax)

Disassembly of section .eh_frame:

0000000000000000 <.eh_frame>:
   0:	14 00                	adc    $0x0,%al
   2:	00 00                	add    %al,(%rax)
   4:	00 00                	add    %al,(%rax)
   6:	00 00                	add    %al,(%rax)
   8:	01 7a 52             	add    %edi,0x52(%rdx)
   b:	00 01                	add    %al,(%rcx)
   d:	78 10                	js     1f <.eh_frame+0x1f>
   f:	01 1b                	add    %ebx,(%rbx)
  11:	0c 07                	or     $0x7,%al
  13:	08 90 01 00 00 1c    	or     %dl,0x1c000001(%rax)
  19:	00 00                	add    %al,(%rax)
  1b:	00 1c 00             	add    %bl,(%rax,%rax,1)
  1e:	00 00                	add    %al,(%rax)
  20:	00 00                	add    %al,(%rax)
  22:	00 00                	add    %al,(%rax)
  24:	3a 00                	cmp    (%rax),%al
  26:	00 00                	add    %al,(%rax)
  28:	00 41 0e             	add    %al,0xe(%rcx)
  2b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  31:	75 0c                	jne    3f <.eh_frame+0x3f>
  33:	07                   	(bad)  
  34:	08 00                	or     %al,(%rax)
  36:	00 00                	add    %al,(%rax)
  38:	1c 00                	sbb    $0x0,%al
  3a:	00 00                	add    %al,(%rax)
  3c:	3c 00                	cmp    $0x0,%al
  3e:	00 00                	add    %al,(%rax)
  40:	00 00                	add    %al,(%rax)
  42:	00 00                	add    %al,(%rax)
  44:	49 00 00             	rex.WB add %al,(%r8)
  47:	00 00                	add    %al,(%rax)
  49:	41 0e                	rex.B (bad) 
  4b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  51:	02 44 0c 07          	add    0x7(%rsp,%rcx,1),%al
  55:	08 00                	or     %al,(%rax)
  57:	00 1c 00             	add    %bl,(%rax,%rax,1)
  5a:	00 00                	add    %al,(%rax)
  5c:	5c                   	pop    %rsp
  5d:	00 00                	add    %al,(%rax)
  5f:	00 00                	add    %al,(%rax)
  61:	00 00                	add    %al,(%rax)
  63:	00 15 00 00 00 00    	add    %dl,0x0(%rip)        # 69 <.eh_frame+0x69>
  69:	41 0e                	rex.B (bad) 
  6b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  71:	50                   	push   %rax
  72:	0c 07                	or     $0x7,%al
  74:	08 00                	or     %al,(%rax)
	...
