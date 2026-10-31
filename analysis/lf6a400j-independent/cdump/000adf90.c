
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000adf90(char param_1,uint param_2,uint param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == '\x03') {
    uVar1 = LK_133BCC((uint)&T_02DF68,param_2);
    uVar2 = LK_133BCC((uint)&T_02DF74,param_3);
    _DAT_fffec57c = ((ushort)uVar1 & 0xff) * ((ushort)uVar2 & 0xff);
  }
  *param_4 = (char)((int)(uint)_DAT_fffec57c >> 6);
  return;
}

