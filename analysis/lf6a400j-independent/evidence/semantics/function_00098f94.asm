00098f94 extu.b r4,r4
00098f96 tst r4,r4
00098f98 bf 0x00098fa0
00098f9a mov r5,r2
00098f9c mov.l @(0x98fa8,pc),r5
00098f9e mov.b r2,@r5
00098fa0 mov.l @(0x98fa8,pc),r5
00098fa2 mov.b @r5,r2
00098fa4 rts
00098fa6 _mov.b r2,@r6
