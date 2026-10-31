
/* WARNING: Removing unreachable block (ram,0x000821fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00082154(uint param_1,uint param_2,undefined4 param_3,char param_4,undefined2 *param_5,
                 undefined2 *param_6,undefined2 *param_7,byte *param_8,short *param_9)

{
  byte bVar2;
  short sVar1;
  undefined2 uVar3;
  
  *param_7 = 0;
  if ((param_4 == '\0') ||
     (bVar2 = 1,
     (param_1 & 0xff) <= (uint)((ulonglong)((longlong)(int)(param_2 & 0xffff) * 0x2000000) >> 0x20))
     ) {
    bVar2 = DAT_fffebb02;
  }
  if (param_4 == '\0') {
    bVar2 = 0;
  }
  *param_8 = bVar2;
  if (DAT_fffebb03 < bVar2) {
    sVar1 = 300;
  }
  else {
    sVar1 = 0;
    if (_DAT_fffebb00 != 0) {
      sVar1 = _DAT_fffebb00 + -1;
    }
    if (sVar1 == 0) {
      sVar1 = 0;
    }
  }
  *param_9 = sVar1;
  if (bVar2 == 0) {
    uVar3 = 0x400;
  }
  else if (sVar1 == 0) {
    uVar3 = 0x1000;
  }
  else {
    uVar3 = 0x1a00;
  }
  *param_6 = uVar3;
  *param_5 = uVar3;
  DAT_fffebb03 = bVar2;
  DAT_fffebb02 = bVar2;
  _DAT_fffebb00 = sVar1;
  return;
}

