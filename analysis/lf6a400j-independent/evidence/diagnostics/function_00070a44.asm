00070a44 sts.l pr,@-r15
00070a46 add -0x4,r15
00070a48 mov.l @(0x70c7c,pc),r6
00070a4a mov.w @r6,r0
00070a4c cmp/eq 0x1,r0
00070a4e bf 0x00070a6c
00070a50 mov.l @(0x70c80,pc),r4
00070a52 mov.l @(0x70c84,pc),r3
00070a54 jsr @r3
00070a56 _nop
00070a58 mov.w r0,@r15
00070a5a mov.b @r15,r2
00070a5c extu.b r2,r2
00070a5e add 0x1,r2
00070a60 mov.l @(0x70c78,pc),r5
00070a62 mov.w r2,@r5
00070a64 mov.l @(0x70c74,pc),r6
00070a66 mov #0x47,r2
00070a68 bra 0x00070a80
00070a6a _mov.b r2,@r6
00070a6c mov.l @(0x70c74,pc),r2
00070a6e mov #0x7f,r6
00070a70 mov.b r6,@r2
00070a72 mov #0x7,r0
00070a74 mov.b r0,@(0x1,r2)
00070a76 mov #0x12,r0
00070a78 mov.b r0,@(0x2,r2)
00070a7a mov #0x3,r2
00070a7c mov.l @(0x70c78,pc),r5
00070a7e mov.w r2,@r5
00070a80 add 0x4,r15
00070a82 lds.l @r15+,pr
00070a84 rts
00070a86 _nop
