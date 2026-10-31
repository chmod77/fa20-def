
void FUN_0007be70(void)

{
  char *pcVar1;
  char *pcVar2;
  uint *puVar3;
  char *pcVar4;
  
  puVar3 = DAT_0007c048;
  pcVar2 = DAT_0007c038;
  if (*DAT_0007c034 == 5) {
    *DAT_0007c048 = (uint)(byte)DAT_0007c038[1] << 0x10;
    *puVar3 = *puVar3 + (uint)(byte)pcVar2[2] * 0x100;
    *puVar3 = *puVar3 + (uint)(byte)pcVar2[3];
    if (*puVar3 < (uint)(int)DAT_0007bf1a) {
      pcVar4 = *(char **)(PTR_PTR_0007c04c + *puVar3 * 4);
      *pcVar4 = pcVar2[4];
      pcVar1 = DAT_0007c02c;
      if (*pcVar4 == pcVar2[4]) {
        *DAT_0007c02c = *pcVar2 + '@';
        pcVar1[1] = *pcVar4;
        *DAT_0007c030 = 2;
        return;
      }
      *DAT_0007c02c = '\x7f';
      pcVar1[1] = (char)DAT_0007bf1c;
      pcVar1[2] = '\x12';
      goto LAB_0007bed4;
    }
  }
  pcVar2 = DAT_0007c02c;
  *DAT_0007c02c = '\x7f';
  pcVar2[1] = (char)DAT_0007bf1c;
  pcVar2[2] = '\x13';
LAB_0007bed4:
  *DAT_0007c030 = 3;
  return;
}

