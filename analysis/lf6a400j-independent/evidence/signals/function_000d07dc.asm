000d07dc sts.l macl,@-r15
000d07de extu.w r4,r4
000d07e0 mov.l @(0xd0804,pc),r2
000d07e2 mul.l r4,r2
000d07e4 sts macl,r2
000d07e6 mov.l @(0xd0808,pc),r6
000d07e8 cmp/hi r6,r2
000d07ea bf 0x000d07f2
000d07ec mov.w @(0xd0800,pc),r2
000d07ee bra 0x000d07fa
000d07f0 _nop
000d07f2 shlr16 r2
000d07f4 shlr2 r2
000d07f6 shlr2 r2
000d07f8 shlr2 r2
000d07fa mov.b r2,@r5
000d07fc rts
000d07fe _lds.l @r15+,macl
