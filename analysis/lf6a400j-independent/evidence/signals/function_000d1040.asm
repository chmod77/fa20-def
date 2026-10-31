000d1040 sts.l macl,@-r15
000d1042 extu.w r4,r4
000d1044 mov.l @(0xd1068,pc),r2
000d1046 mul.l r4,r2
000d1048 sts macl,r2
000d104a mov.l @(0xd106c,pc),r6
000d104c cmp/hi r6,r2
000d104e bf 0x000d1056
000d1050 mov.w @(0xd1064,pc),r2
000d1052 bra 0x000d105e
000d1054 _nop
000d1056 shlr16 r2
000d1058 shlr2 r2
000d105a shlr2 r2
000d105c shlr2 r2
000d105e mov.b r2,@r5
000d1060 rts
000d1062 _lds.l @r15+,macl
