
/* WARNING: Removing unreachable block (ram,0x000ae3b8) */

void FUN_000ae348(char param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar5;
  uint uVar4;
  uint uVar6;
  
  if (param_1 != '\x03') {
    DAT_fffec591 = '\0';
  }
  else {
    if (DAT_fffec591 == '\0') {
      DAT_fffec592 = 0;
      DAT_fffec591 = '\x01';
    }
    uVar1 = LK_133B38((uint)&T_02DFB0,param_2 & 0xff);
    uVar2 = LK_133998((uint)&T_02DFBC,param_2 & 0xff);
    uVar2 = uVar2 & 0xff;
    uVar3 = 0;
    if (uVar2 < 0x100) {
      uVar3 = -uVar2 - 1;
    }
    bVar5 = DAT_fffec592 + 1;
    if (bVar5 == 0) {
      bVar5 = 0xff;
    }
    uVar6 = (uint)DAT_fffec592;
    if ((uVar3 & 0xff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar4 = 0;
      if (uVar6 < 0x100) {
        uVar4 = -uVar6 - 1;
      }
      uVar3 = __sdiv32_r1_by_r0((uVar4 & 0xff) << 8,uVar3 & 0xff);
      if (0xff < (uVar3 & 0xffff)) {
        uVar3 = 0xff;
      }
    }
    if (((uVar6 < uVar2) || (0xfe < uVar6)) ||
       (uVar3 = (uVar3 & 0xff) * (uVar1 & 0xff) >> 8, uVar3 == 0)) {
      uVar3 = 0;
    }
    if (uVar6 < uVar2) {
      uVar3 = uVar1 & 0xff;
    }
    DAT_fffec592 = bVar5;
    if (uVar3 < 0xc0) {
      DAT_fffec590 = (undefined1)uVar3;
    }
    else {
      DAT_fffec590 = 0xc0;
    }
  }
  if (param_1 != '\x03') {
    *param_3 = 0;
  }
  else {
    *param_3 = DAT_fffec590;
  }
  return;
}

