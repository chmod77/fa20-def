
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b22ac(uint param_1,char param_2,char param_3,char param_4,byte param_5,byte *param_6)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  
  param_1 = param_1 & 0xffff;
  iVar2 = param_1 - _DAT_fffec698;
  sVar3 = 0x7fff;
  if ((iVar2 < 0x8000) && (sVar3 = (short)iVar2, iVar2 < -0x8000)) {
    sVar3 = -0x8000;
  }
  uVar1 = (uint)sVar3;
  if ((int)uVar1 < 0) {
    uVar1 = -uVar1;
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  if ((((param_2 == '\0') && (param_1 != 0)) && ((uVar1 & 0xffff) >> 8 < 2)) ||
     (((char)((ushort)sVar3 >> 8) < '\x03' && (param_2 != '\0')))) {
    param_1 = (uint)(short)_DAT_fffec698;
  }
  if (((param_3 == '\0') || (param_4 == '\0')) || (param_5 == 0)) {
    param_5 = (byte)(param_1 >> 8);
  }
  else if (0x39 < param_5) {
    param_5 = 0x39;
  }
  *param_6 = param_5;
  _DAT_fffec698 = (ushort)param_5 << 8;
  return;
}

