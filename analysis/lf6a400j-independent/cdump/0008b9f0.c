
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008b9f0(uint param_1,uint param_2,char param_3,uint param_4,ushort param_5,char param_6,
                 ushort param_7,undefined2 *param_8,undefined1 *param_9,undefined1 *param_10,
                 short *param_11)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  
  param_1 = param_1 & 0xffff;
  param_2 = param_2 & 0xff;
  uVar1 = LK_13869C((uint)&T_02CC80,param_1,param_2);
  iVar4 = (int)(short)(((short)((param_4 & 0xff) * 0xb4 >> 8) + (param_5 & 0xff)) - (short)param_6);
  uVar3 = 0x7f;
  if ((iVar4 < 0xa0) && (uVar3 = 0xffffff80, -0x61 < iVar4)) {
    uVar3 = iVar4 - 0x20;
  }
  *param_9 = (char)uVar3;
  if (param_3 == '\0') {
    uVar3 = LK_133C68((uint)&T_02CCB4,uVar3);
    uVar2 = LK_138C74((uint)&T_02CC6C,param_1,param_2);
  }
  else {
    uVar3 = LK_133C68((uint)&T_02CCA8,uVar3);
    uVar2 = LK_138C74((uint)&T_02CC58,param_1,param_2);
  }
  uVar3 = (uVar3 & 0xff) * (uVar2 & 0xffff);
  iVar4 = (uint)param_7 - (uint)_DAT_fffebc50;
  sVar5 = 0x7fff;
  if ((iVar4 < 0x8000) && (sVar5 = (short)iVar4, iVar4 < -0x8000)) {
    sVar5 = -0x8000;
  }
  *param_11 = sVar5;
  if (sVar5 < 0) {
    uVar2 = LK_13869C((uint)&T_02CC94,param_1,param_2);
  }
  else {
    uVar2 = (uint)DAT_fffebc54;
  }
  if ((DAT_fffebc53 == '\0') || (0 < sVar5)) {
    uVar2 = uVar1;
  }
  if (DAT_fffebc55 == '\0') {
    DAT_fffebc52 = '\0';
    DAT_fffebc55 = '\x01';
  }
  if (DAT_fffebc52 == '\0') {
    _DAT_ffff19b4 = (undefined2)(uVar3 >> 8);
  }
  else {
    FUN_0016b4d8(&DAT_ffff19b4,uVar3 >> 8,(uVar2 & 0xff) << 8);
  }
  DAT_fffebc52 = 1;
  *param_8 = _DAT_ffff19b4;
  *param_10 = (char)uVar2;
  DAT_fffebc54 = (char)uVar2;
  DAT_fffebc53 = 1;
  _DAT_fffebc50 = param_7;
  return;
}

