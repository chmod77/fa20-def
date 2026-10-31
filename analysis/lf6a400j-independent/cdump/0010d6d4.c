
void FUN_0010d6d4(char param_1,int param_2,char *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_2 + 0x12);
  bVar2 = *(byte *)(param_2 + 0x54);
  DAT_fffedcd4 = (bVar1 & 1) != 0;
  if ((((param_1 == '\0') || ((*(byte *)(param_2 + 0x4e) & 0x20) == 0)) ||
      ((*(byte *)(param_2 + 0x4d) & 2) == 0)) ||
     (((bVar1 & 8) == 0 || ((*(byte *)(param_2 + 0x4d) & 8) == 0)))) {
    DAT_fffedcd2 = '\0';
  }
  else {
    DAT_fffedcd2 = '\x04';
  }
  if ((((*(byte *)(param_2 + 0x11) & 1) == 0) && ((*(byte *)(param_2 + 0x39) & 1) == 0)) &&
     ((uVar3 = (uint)*(char *)(param_2 + 0x4f), (uVar3 & 4) == 0 &&
      ((((uVar3 & 8) == 0 && ((uVar3 & 0x40) == 0)) && ((uVar3 & 0x80) == 0)))))) {
    DAT_fffedcd0 = '\0';
  }
  else {
    DAT_fffedcd0 = ' ';
  }
  if (((*(byte *)(param_2 + 0x28) & 0x20) == 0) && ((*(byte *)(param_2 + 0x10) & 0x20) == 0)) {
    DAT_fffedcd3 = '\0';
  }
  else {
    DAT_fffedcd3 = '@';
  }
  if (((((bVar1 & 0x10) == 0) && ((*(byte *)(param_2 + 0xc) & 4) == 0)) &&
      (((*(byte *)(param_2 + 0xc) & 8) == 0 &&
       (((((*(byte *)(param_2 + 0x3b) & 1) == 0 && ((*(byte *)(param_2 + 0x3b) & 2) == 0)) &&
         ((bVar2 & 1) == 0)) && (((bVar2 & 2) == 0 && ((bVar2 & 4) == 0)))))))) &&
     ((bVar2 & 8) == 0)) {
    DAT_fffedcd1 = '\0';
  }
  else {
    DAT_fffedcd1 = -0x80;
  }
  *param_3 = DAT_fffedcd1 + DAT_fffedcd3 + DAT_fffedcd0 + DAT_fffedcd2 + DAT_fffedcd4;
  return;
}

