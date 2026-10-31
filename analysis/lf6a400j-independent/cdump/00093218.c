
/* WARNING: Removing unreachable block (ram,0x000932c8) */

void FUN_00093218(uint param_1,ushort param_2,ushort param_3,uint param_4,char param_5,char param_6,
                 char param_7,undefined1 *param_8)

{
  uint uVar1;
  ushort uVar2;
  undefined1 uVar3;
  
  uVar1 = LK_1351FC((uint)&T_02D348,param_1);
  if (DAT_fffebe6e == '\0') {
    uVar2 = 0xe000;
  }
  else {
    uVar2 = 0xdccd;
  }
  if (DAT_fffebe6c != '\0') {
    uVar1 = 0;
  }
  DAT_fffebe6c = (uVar1 & 0xffff) <= (param_4 & 0xffff);
  uVar3 = 0;
  if ((((999 < param_3) && ((uVar2 <= param_2 || (param_5 != '\0')))) &&
      (((bool)DAT_fffebe6c || (param_6 != '\0')))) && (param_7 != '\0')) {
    uVar3 = 1;
  }
  *param_8 = uVar3;
  DAT_fffebe6e = uVar2 <= param_2;
  DAT_fffebe6d = 1;
  return;
}

