
/* WARNING: Removing unreachable block (ram,0x0010c032) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010bfdc(uint param_1,char param_2,undefined1 param_3,undefined1 *param_4,ushort *param_5)

{
  uint uVar1;
  undefined1 uVar2;
  ushort uVar3;
  
  uVar3 = 0;
  if ((param_2 != '\0') && (uVar3 = 0xffff, _DAT_fffedcb4 != -1)) {
    uVar3 = _DAT_fffedcb4 + 1;
  }
  if (uVar3 < 0x2c) {
    *param_4 = param_3;
  }
  else {
    uVar1 = __sdiv32_r1_by_r0((param_1 & 0xff) * 0xff,0xdb);
    uVar2 = (undefined1)uVar1;
    if (0xff < (uVar1 & 0xffff)) {
      uVar2 = 0xff;
    }
    *param_4 = uVar2;
  }
  *param_5 = uVar3;
  _DAT_fffedcb4 = uVar3;
  return;
}

