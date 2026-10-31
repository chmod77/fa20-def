000d1090 mov r4,r6
000d1092 extu.b r4,r2
000d1094 mov #0xa,r4
000d1096 cmp/ge r4,r2
000d1098 bf 0x000d10a0
000d109a add -0xa,r6
000d109c rts
000d109e _mov.b r6,@r5
000d10a0 mov #0x0,r2
000d10a2 rts
000d10a4 _mov.b r2,@r5
