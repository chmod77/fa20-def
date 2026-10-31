
void FUN_0007bef0(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = DAT_0007c038;
  puVar1 = DAT_0007c02c;
  if ((*(char *)(DAT_0007c038 + 1) == '\x03') && (*(char *)(DAT_0007c038 + 2) == '\x01')) {
    if (*DAT_0007c034 == 3) {
      if ((((*DAT_0007c050 == '\x03') && ((*DAT_0007c054 & 1) != 0)) && ((*DAT_0007c058 & 1) != 0))
         && ((DAT_0007c058[1] & 1) != 0)) {
        *DAT_0007c02c = 0x68;
        puVar1[1] = *(undefined1 *)(iVar2 + 1);
        *DAT_0007c030 = 2;
        *DAT_0007c05c = *DAT_0007c05c | 1;
        *DAT_0007c060 = *DAT_0007c060 & 0x7f;
        return;
      }
      *DAT_0007c02c = 0x7f;
      puVar1[1] = 0x28;
      puVar1[2] = 0x22;
    }
    else {
      *DAT_0007c02c = 0x7f;
      puVar1[1] = 0x28;
      puVar1[2] = 0x13;
    }
  }
  else {
    *DAT_0007c02c = 0x7f;
    puVar1[1] = 0x28;
    puVar1[2] = 0x12;
  }
  *DAT_0007c030 = 3;
  return;
}

