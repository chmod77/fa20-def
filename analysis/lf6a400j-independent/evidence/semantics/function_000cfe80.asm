000cfe80 mova @(0xcfecc,pc),r0
000cfe82 fmov.s @r0,fr8
000cfe84 fadd fr8,fr4
000cfe86 mova @(0xcfed0,pc),r0
000cfe88 fmov.s @r0,fr8
000cfe8a fcmp/gt fr8,fr4
000cfe8c bf 0x000cfe92
000cfe8e bra 0x000cfe9a
000cfe90 _fmov fr8,fr4
000cfe92 fldi0 fr9
000cfe94 fcmp/gt fr4,fr9
000cfe96 bf 0x000cfe9a
000cfe98 fmov fr9,fr4
000cfe9a fcmp/gt fr8,fr4
000cfe9c bt 0x000cfec6
000cfe9e fldi0 fr9
000cfea0 fcmp/gt fr4,fr9
000cfea2 bf 0x000cfeaa
000cfea4 mov #0x0,r2
000cfea6 rts
000cfea8 _mov.l r2,@r4
000cfeaa mova @(0xcfed4,pc),r0
000cfeac fmov.s @r0,fr8
000cfeae fmul fr8,fr4
000cfeb0 mov.l @(0xcfed8,pc),r2
000cfeb2 lds r2,fpul
000cfeb4 fsts fpul,fr8
000cfeb6 fcmp/gt fr4,fr8
000cfeb8 bt 0x000cfebe
000cfeba fadd fr8,fr8
000cfebc fsub fr8,fr4
000cfebe ftrc fr4,fpul
000cfec0 sts fpul,r2
000cfec2 rts
000cfec4 _mov.l r2,@r4
000cfec6 mov #-0x1,r2
000cfec8 rts
000cfeca _mov.l r2,@r4
