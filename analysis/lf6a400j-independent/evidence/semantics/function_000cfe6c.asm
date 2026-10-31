000cfe6c shlr8 r4
000cfe6e mov.l @(0xcfe7c,pc),r2
000cfe70 cmp/hi r2,r4
000cfe72 bf/s 0x000cfe78
000cfe74 _mov r4,r2
000cfe76 mov.l @(0xcfe7c,pc),r2
000cfe78 rts
000cfe7a _mov.w r2,@r5
