
void FUN_000a2f20(uint param_1,char param_2,uint param_3,ushort param_4,undefined1 *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == '\0') {
    if ((int)-(param_3 & 0xffff) < 0) {
      uVar3 = (int)&DAT_00010000 + -(param_3 & 0xffff);
    }
    else {
      uVar3 = 0xffffffff;
    }
    uVar1 = LK_138984((uint)&T_02DA94,param_1 & 0xffff,(uint)param_4);
    uVar2 = LK_138984((uint)&T_02DA80,param_1 & 0xffff,(uint)param_4);
    uVar1 = ((uVar3 & 0xffff) * (uVar2 & 0xff) >> 0x10) +
            ((param_3 & 0xffff) * (uVar1 & 0xff) >> 0x10);
    uVar3 = 0xff;
    if (uVar1 < 0x100) {
      uVar3 = uVar1;
    }
    DAT_fffec2ac = (undefined1)uVar3;
  }
  *param_5 = DAT_fffec2ac;
  return;
}

