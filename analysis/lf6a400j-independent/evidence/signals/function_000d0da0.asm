000d0da0 sts.l macl,@-r15
000d0da2 extu.w r4,r4
000d0da4 mov.w @(0xd0db6,pc),r2
000d0da6 mul.l r4,r2
000d0da8 sts macl,r6
000d0daa shlr8 r6
000d0dac shlr2 r6
000d0dae shlr2 r6
000d0db0 mov.w r6,@r5
000d0db2 rts
000d0db4 _lds.l @r15+,macl
