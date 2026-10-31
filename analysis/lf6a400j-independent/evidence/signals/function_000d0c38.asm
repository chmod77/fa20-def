000d0c38 sts.l macl,@-r15
000d0c3a extu.w r4,r4
000d0c3c mov #0x19,r2
000d0c3e mul.l r4,r2
000d0c40 sts macl,r6
000d0c42 shlr2 r6
000d0c44 shlr2 r6
000d0c46 shlr r6
000d0c48 mov.w r6,@r5
000d0c4a rts
000d0c4c _lds.l @r15+,macl
