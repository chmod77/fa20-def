000d0fcc sts.l macl,@-r15
000d0fce mov.w @r4,r2
000d0fd0 extu.w r2,r2
000d0fd2 mov.w @(0xd0ff0,pc),r6
000d0fd4 mul.l r2,r6
000d0fd6 sts macl,r6
000d0fd8 mov.l @(0xd0ff4,pc),r2
000d0fda cmp/hi r2,r6
000d0fdc bf 0x000d0fe4
000d0fde mov.w @(0xd0ff2,pc),r6
000d0fe0 bra 0x000d0fea
000d0fe2 _nop
000d0fe4 shlr16 r6
000d0fe6 shlr2 r6
000d0fe8 shlr2 r6
000d0fea mov.b r6,@r5
000d0fec rts
000d0fee _lds.l @r15+,macl
