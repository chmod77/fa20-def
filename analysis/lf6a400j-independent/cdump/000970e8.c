
void FUN_000970e8(char param_1,ushort param_2,undefined *param_3,uint param_4,undefined1 *param_5)

{
  uint uVar1;
  undefined1 uVar2;
  
  if ((param_2 < 0xdccd) || (uVar2 = DAT_fffebf6c, (undefined *)0xfffe < param_3)) {
    uVar1 = LK_13A54C((uint)&T_02D4C0,(uint)param_3,param_4);
    uVar2 = (char)uVar1;
  }
  if ((param_3 <= &UNK_0000efff) && (0xdfff < param_2)) {
    uVar1 = LK_13A54C((uint)&T_02D4AC,(uint)param_3,param_4 & 0xff);
    uVar2 = (char)uVar1;
  }
  if (param_1 == '\0') {
    *param_5 = 0;
  }
  else {
    *param_5 = uVar2;
  }
  DAT_fffebf6c = uVar2;
  return;
}

