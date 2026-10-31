
uint FUN_0007c2d4(void)

{
  char *pcVar1;
  uint uVar2;
  
  pcVar1 = DAT_0007c584;
  if (*DAT_0007c568 == 1) {
    if ((*DAT_0007c56c == '\x01') &&
       (uVar2 = (*(code *)PTR_FUN_0007c578)(*DAT_0007c570,*DAT_0007c570 + *DAT_0007c574),
       (uVar2 & 0xffff) == (int)DAT_0007c3ac)) {
      *DAT_0007c57c = 0;
      *DAT_0007c56c = '\0';
      *DAT_0007c584 = *DAT_0007c580 + '@';
      *DAT_0007c588 = 1;
      *DAT_0007c58c = 1;
      return uVar2;
    }
    pcVar1 = DAT_0007c584;
    *DAT_0007c584 = '\x7f';
    pcVar1[1] = '7';
    uVar2 = 0x22;
    pcVar1[2] = '\"';
  }
  else {
    *DAT_0007c584 = '\x7f';
    pcVar1[1] = '7';
    uVar2 = 0x13;
    pcVar1[2] = '\x13';
  }
  *DAT_0007c588 = 3;
  return uVar2;
}

