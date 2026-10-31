
/* WARNING: Removing unreachable block (ram,0x000cd978) */

void FUN_000cd910(char param_1,char param_2,char param_3,undefined4 param_4,ushort param_5,
                 char param_6,char param_7,undefined4 param_8,undefined2 *param_9)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  
  *param_9 = 0xffff;
  uVar1 = 0xffff;
  if (DAT_fffecc9c != '\0') {
    uVar1 = 0;
  }
  uVar2 = (uint)(uVar1 <= param_5);
  if ((param_6 == '\0') && (param_7 == '\0')) {
    uVar2 = 0;
  }
  else {
    bVar3 = param_1 == '\0';
    if ((bVar3) && (bVar3 = param_2 == '\0', bVar3)) {
      if (param_3 == '\0') {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = (uint)bVar3;
    }
    uVar2 = __sdiv32_r1_by_r0(uVar2 * 0x7d,0x31);
  }
  *(bool *)param_8 = (uVar2 & 0xff) != 0;
  DAT_fffecc9c = uVar1 <= param_5;
  return;
}

