
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e4620(char param_1,char param_2,char param_3,uint param_4,uint param_5,ushort *param_6)

{
  uint uVar1;
  undefined2 *puVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar1 = LK_135904((uint)&T_02F194,param_4,param_5 & 0xff);
  if ((uVar1 & 0xff) * 0x8000 < 0x7fff81) {
    puVar2 = (undefined2 *)((uVar1 & 0xff) << 8);
  }
  else {
    puVar2 = (undefined2 *)&DAT_0000ffff;
  }
  uVar3 = _DAT_fffed2dc;
  if (((param_1 == '\0') && (param_3 != '\0')) &&
     (uVar3 = _DAT_fffed2dc + 0x10, (ushort)(_DAT_fffed2dc + 0x10) < _DAT_fffed2dc)) {
    uVar3 = 0xffff;
  }
  if (0x828e < _DAT_fffed2dc) {
    uVar3 = 0x8000;
  }
  if (((param_1 != '\0') && (param_2 != '\0')) && (param_3 != '\0')) {
    uVar4 = 0;
    if (0xccc < _DAT_fffed2dc) {
      uVar4 = _DAT_fffed2dc - 0xccd;
    }
    uVar3 = (ushort)puVar2;
    if (puVar2 < (undefined2 *)(uint)uVar4) {
      uVar3 = uVar4;
    }
  }
  if (((param_1 != '\0') && (param_2 != '\0')) &&
     ((param_3 == '\0' && (uVar3 = (ushort)puVar2, puVar2 < &DAT_00008000)))) {
    uVar3 = 0x8000;
  }
  *param_6 = uVar3;
  _DAT_fffed2dc = uVar3;
  return;
}

