
void FUN_000bce84(int param_1,byte param_2,char param_3,char param_4,char *param_5)

{
  short sVar1;
  byte bVar2;
  
  bVar2 = param_2 + 1;
  if (0xfe < param_2) {
    bVar2 = 0xff;
  }
  if (bVar2 < 0x24) {
    if (bVar2 == 0) {
      bVar2 = 1;
    }
  }
  else {
    bVar2 = 0x23;
  }
  sVar1 = *(short *)(param_1 + (uint)(byte)(bVar2 - 1) * 2);
  if ((param_3 != '\0') || (param_4 != '\0')) {
    DAT_fffec8d0 = '\0';
  }
  *param_5 = DAT_fffec8d0;
  if (-0x301 < sVar1) {
    return;
  }
  if (DAT_fffec8d0 != -1) {
    DAT_fffec8d0 = DAT_fffec8d0 + '\x01';
    return;
  }
  DAT_fffec8d0 = 0xff;
  return;
}

