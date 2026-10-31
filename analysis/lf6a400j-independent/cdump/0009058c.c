
/* WARNING: Removing unreachable block (ram,0x00090672) */

void FUN_0009058c(char param_1,uint param_2,uint param_3,uint param_4,ushort param_5,ushort param_6,
                 ushort param_7,undefined1 *param_8,undefined1 *param_9,undefined1 *param_10,
                 undefined1 *param_11)

{
  bool bVar1;
  uint uVar2;
  ushort uVar4;
  uint uVar3;
  int iVar5;
  uint uVar6;
  
  bVar1 = false;
  if ((((0x18 < param_6) && (param_6 < 0x44d)) && (param_1 != '\0')) && (param_7 < 0x5001)) {
    bVar1 = true;
  }
  if (bVar1) {
    uVar2 = LK_133B38((uint)&T_02D178,param_2 & 0xff);
    DAT_fffebd7d = (undefined1)uVar2;
    iVar5 = (int)(short)((short)((int)(param_4 & 0xffff) >> 6) - (param_5 & 0xff));
    uVar6 = 0xff;
    if ((iVar5 < 0x80) && (uVar6 = 0, -0x81 < iVar5)) {
      uVar6 = iVar5 + 0x80;
    }
    DAT_fffebd7e = (undefined1)uVar6;
    uVar6 = LK_135798((uint)&T_02D184,uVar6,param_3 & 0xff);
    DAT_fffebd7f = (undefined1)uVar6;
    uVar4 = 0;
    if (param_6 < 0x44d) {
      uVar4 = 0x44c - param_6;
    }
    uVar3 = __udiv32_r1_by_r0((uint)uVar4 << 8,0x44c);
    if (0xff < uVar3) {
      uVar3 = 0xff;
    }
    DAT_fffebd80 = (undefined1)uVar3;
    uVar6 = (uVar3 & 0xff) * (uVar6 & 0xff) * (uVar2 & 0xff);
    uVar2 = 0xff;
    if (uVar6 < 0x7f8001) {
      uVar2 = uVar6 >> 0xf;
    }
    if ((uVar2 & 0xff) == 0) {
      DAT_fffebd7c = 0;
    }
    else {
      DAT_fffebd7c = (undefined1)uVar2;
    }
  }
  if (bVar1) {
    *param_11 = DAT_fffebd7f;
    *param_10 = DAT_fffebd7e;
    *param_9 = DAT_fffebd7d;
    *param_8 = DAT_fffebd7c;
  }
  else {
    *param_11 = 0;
    *param_10 = 0x80;
    *param_9 = 0;
    *param_8 = 0;
  }
  return;
}

