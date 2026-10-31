000d0f28 mov r4,r6
000d0f2a extu.b r4,r2
000d0f2c mov #0xa,r4
000d0f2e cmp/ge r4,r2
000d0f30 bf 0x000d0f38
000d0f32 add -0xa,r6
000d0f34 rts
000d0f36 _mov.b r6,@r5
000d0f38 mov #0x0,r2
000d0f3a rts
000d0f3c _mov.b r2,@r5
