
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00059a7c(void)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = FUN_0016b428((int)_v_Control_Module_Voltage_EF18,0,0,DAT_fffef25c & 1);
  bVar1 = (uVar2 & 1) == 0;
  bVar3 = DAT_fffef25c | 1;
  if (bVar1) {
    bVar3 = DAT_fffef25c & 0xfe;
  }
  DAT_fffef25c = bVar3;
  if (bVar1) {
    uVar2 = (int)DAT_fffef25b & 0x7f;
    DAT_fffef25b = (char)uVar2;
  }
  else {
    uVar2 = (int)DAT_fffef25b | 0x80;
    DAT_fffef25b = (char)uVar2;
  }
  return uVar2;
}

