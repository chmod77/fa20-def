
uint FUN_0008f8c0(uint param_1,uint param_2,char param_3,byte param_4,char param_5,
                 undefined1 *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 uVar6;
  
  param_1 = param_1 & 0xffff;
  param_2 = param_2 & 0xff;
  uVar1 = LK_13869C((uint)&T_02D028,param_1,param_2);
  uVar1 = uVar1 & 0xff;
  uVar6 = 100;
  uVar2 = LK_133C68((uint)&T_02D064,(int)param_5);
  if (param_4 < 0x10) {
    uVar3 = LK_13869C((uint)&T_02D03C,param_1,param_2);
    uVar2 = (uVar3 & 0xff) + uVar2;
    uVar4 = (undefined1)uVar2;
    uVar6 = uVar4;
    if ((uVar2 & 0xff) < (uVar3 & 0xff)) {
      uVar6 = 0xff;
    }
  }
  else {
    uVar4 = (undefined1)(uVar1 + uVar2);
    uVar3 = uVar2;
    if ((uVar1 + uVar2 & 0xff) < uVar1) {
      uVar4 = 0xff;
    }
  }
  if (param_3 == '\0') {
    uVar2 = 0;
    if (-0x11 < (short)-(ushort)param_4) {
      uVar2 = (int)(short)-(ushort)param_4 + 0x10;
    }
    uVar3 = LK_13869C((uint)&T_02D050,param_1,param_2);
    uVar2 = (uVar2 & 0xff) * (uVar3 & 0xff);
    if (uVar2 < 0xff1) {
      iVar5 = (int)uVar2 >> 4;
    }
    else {
      iVar5 = 0xff;
    }
    uVar6 = (undefined1)(iVar5 + uVar1);
    if ((iVar5 + uVar1 & 0xff) < uVar1) {
      uVar6 = 0xff;
    }
    *param_6 = uVar6;
  }
  else if (param_4 < 0x10) {
    *param_6 = uVar6;
  }
  else {
    *param_6 = uVar4;
  }
  return uVar3;
}

