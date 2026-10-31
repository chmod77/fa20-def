
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009523c(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,ushort param_10,uint param_11,uint param_12,
                 uint param_13,uint param_14,uint param_15,undefined1 *param_16,undefined2 *param_17
                 ,undefined1 *param_18)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  
  uVar1 = LK_133F40((uint)&T_02D3E0,param_12 & 0xffff);
  *param_17 = (short)uVar1;
  uVar2 = LK_135A74((uint)&T_02D3EC,param_13 & 0xff,param_14 & 0xffff);
  *param_18 = (char)uVar2;
  if (param_10 != 0) {
    if (param_10 == 0) {
      _DAT_fffebecc = 0xffff;
    }
    else {
      puVar3 = (undefined *)__udiv32_r1_by_r0((uVar2 & 0xff) * (uVar1 & 0xffff) * 2,(uint)param_10);
      if (&DAT_0000ffff < puVar3) {
        puVar3 = &DAT_0000ffff;
      }
      _DAT_fffebecc = (ushort)puVar3;
    }
  }
  if ((((((param_1 == '\0') && (param_2 == '\0')) && (param_3 == '\0')) &&
       ((param_4 == '\0' && (param_5 == '\0')))) &&
      ((param_6 == '\0' && ((param_7 == '\0' && (param_8 == '\0')))))) && (param_9 == '\0')) {
    if (param_10 == 0) {
      *param_16 = 0xff;
    }
    else {
      if (_DAT_fffebecc < 0x100) {
        uVar4 = (undefined1)_DAT_fffebecc;
      }
      else {
        uVar4 = 0xff;
      }
      *param_16 = uVar4;
    }
  }
  else {
    uVar1 = LK_135798((uint)&T_02D400,param_11 & 0xff,param_15 & 0xff);
    *param_16 = (char)uVar1;
  }
  return;
}

