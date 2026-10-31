
uint FUN_0016ca32(void)

{
  uint in_r0;
  
  return in_r0 >> 0x18 | (in_r0 >> 0x10 & 0xff) << 8 | in_r0 << 0x10 | 0xffffff80;
}

