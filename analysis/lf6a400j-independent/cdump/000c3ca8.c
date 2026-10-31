
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c3ca8(uint param_1,short param_2,int param_3,uint *param_4,byte *param_5)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = _DAT_fffecaa4 + 1;
  if (uVar4 == 0) {
    uVar4 = 0xffffffff;
  }
  if (0xfffffe < uVar4) {
    uVar4 = 0xfffffe;
  }
  bVar3 = DAT_fffecaa8 + 1;
  if (bVar3 < DAT_fffecaa8) {
    bVar3 = 0xff;
  }
  bVar1 = 4 < bVar3;
  bVar2 = false;
  if (((param_2 != -1) && (param_3 != 0xffffff)) && (bVar1)) {
    bVar2 = true;
  }
  if ((bVar2) || (bVar1)) {
    bVar3 = 0;
  }
  *param_5 = bVar3;
  if (bVar1) {
    _DAT_fffecaa4 = uVar4;
  }
  if ((bVar2) && (_DAT_fffecaa4 = param_1, param_1 <= uVar4)) {
    _DAT_fffecaa4 = uVar4;
  }
  *param_4 = _DAT_fffecaa4;
  DAT_fffecaa8 = bVar3;
  return;
}

