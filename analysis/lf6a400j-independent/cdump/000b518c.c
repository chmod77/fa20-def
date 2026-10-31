
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b518c(short param_1,char param_2,undefined2 param_3,short param_4,uint param_5,
                 uint param_6,undefined4 param_7,char param_8,char param_9,undefined2 *param_10,
                 undefined2 *param_11,byte *param_12,undefined2 *param_13,short *param_14,
                 undefined2 *param_15,undefined2 *param_16)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)param_4;
  param_6 = param_6 & 0xff;
  if (param_8 != '\0') {
    uVar4 = uVar5;
    if ((int)uVar5 < 0) {
      uVar4 = -uVar5;
    }
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    if ((undefined *)(uVar4 & 0xffff) < (undefined *)0xfffe) {
      if (((undefined *)(uVar4 & 0xffff) < &DAT_0000fffd) || (DAT_fffec72b == 0)) {
        DAT_fffec72b = 0x10;
      }
    }
    else {
      DAT_fffec72b = 0x10;
    }
    if (param_9 == '\0') {
      uVar4 = (int)((param_5 & 0xff) * 0x10) >> 4;
    }
    else {
      uVar4 = (uint)DAT_fffec72b * (param_5 & 0xff) * 0x10 >> 8;
    }
    iVar1 = (int)(uVar5 * uVar4) >> 6;
    _DAT_fffec726 = (undefined2)uVar4;
    _DAT_fffec728 = 0;
    if ((int)uVar5 < 0) {
      if (0x7fff < iVar1) goto LAB_000b5282;
      if (iVar1 < -0x8000) {
        iVar1 = -0x8000;
      }
    }
    else if (iVar1 < 0x8000) {
      if (iVar1 < -0x8000) {
        iVar1 = -0x8000;
      }
    }
    else {
LAB_000b5282:
      iVar1 = 0x7fff;
    }
    _DAT_fffec724 = (short)iVar1;
    DAT_fffec72a = DAT_fffec72b;
  }
  *param_14 = _DAT_fffec724;
  if (param_2 == '\x01') {
    param_6 = (uint)_DAT_fffec724;
  }
  else if (((((param_2 == '\x02') || (param_2 == '\x03')) || (param_2 == '\x04')) ||
           (((param_2 == '\x05' || (param_2 == '\x06')) ||
            ((param_2 == '\a' || ((param_2 == '\b' || (param_2 == '\t')))))))) || (param_2 == '\n'))
  {
    param_6 = 0;
  }
  iVar1 = (int)param_1 + param_6;
  uVar5 = 0xffffffff;
  if ((iVar1 < 0x8000) && (uVar5 = 0, -0x8001 < iVar1)) {
    uVar5 = iVar1 - 0x8000;
  }
  if ((uVar5 & 0xffff) < 0x3335) {
    uVar5 = 0x3334;
  }
  uVar2 = (undefined2)uVar5;
  if (&UNK_0000a53e < (undefined *)(uVar5 & 0xffff)) {
    uVar2 = 0xa53f;
  }
  *param_15 = uVar2;
  uVar3 = uVar2;
  if (param_2 == '\x01') goto LAB_000b5344;
  if (param_2 != '\x02') {
    if (param_2 == '\x03') {
      uVar3 = 0x8000;
      goto LAB_000b5344;
    }
    if (((param_2 != '\x04') && (param_2 != '\x05')) &&
       ((uVar3 = param_3, param_2 == '\x06' ||
        ((((param_2 != '\a' && (param_2 != '\b')) && (param_2 != '\t')) &&
         (uVar3 = uVar2, param_2 != '\n')))))) goto LAB_000b5344;
  }
  uVar3 = 0x8000;
LAB_000b5344:
  *param_10 = uVar3;
  *param_11 = (short)param_6;
  *param_12 = DAT_fffec72a;
  *param_13 = _DAT_fffec726;
  *param_16 = _DAT_fffec728;
  DAT_fffec72b = DAT_fffec72a;
  return;
}

