0004d2d6 sts.l pr,@-r15
0004d2d8 mov.l @(0x4d424,pc),r6
0004d2da mov.w @r6,r2
0004d2dc extu.w r2,r1
0004d2de shll2 r1
0004d2e0 shll r1
0004d2e2 mov.w @(0x4d3d0,pc),r2
0004d2e4 add r2,r1
0004d2e6 mov.l @(0x4d41c,pc),r6
0004d2e8 jsr @r6
0004d2ea _mov #0x5,r0
0004d2ec mov.l @(0x4d420,pc),r2
0004d2ee jsr @r2
0004d2f0 _mov r0,r4
0004d2f2 mov.l @(0x4d3ec,pc),r2
0004d2f4 lds.l @r15+,pr
0004d2f6 rts
0004d2f8 _mov.w r0,@r2
