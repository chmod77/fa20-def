
/* WARNING: Removing unreachable block (ram,0x000a41f4) */
/* WARNING: Removing unreachable block (ram,0x000a421c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a412c(char param_1,char param_2,char param_3,char param_4,undefined4 param_5,
                 char param_6,byte param_7,char param_8,byte param_9,uint param_10,char param_11,
                 char param_12,char param_13,char param_14,char param_15,undefined1 *param_16)

{
  uint uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  
  uVar4 = (param_10 & 0xffff) >> 8;
  if (param_6 != '\0') {
    DAT_fffec314 = '\0';
  }
  else {
    if (DAT_fffec314 == '\0') {
      _DAT_fffec30e = 0;
      DAT_fffec314 = '\x01';
    }
    DAT_fffec30c = 4 < _DAT_fffec30e;
    _DAT_fffec30e = _DAT_fffec30e + 1;
    if (_DAT_fffec30e == 0) {
      _DAT_fffec30e = 0xffff;
    }
  }
  cVar6 = '\0';
  if (param_6 == '\0') {
    cVar6 = DAT_fffec30c;
  }
  if (DAT_fffec310 == '\0') {
    uVar5 = 0x8c;
  }
  else {
    uVar5 = 0x8e;
  }
  if (DAT_fffec313 == '\0') {
    bVar3 = 0x1e;
  }
  else {
    bVar3 = 0x14;
  }
  if (DAT_fffec311 == '\0') {
    uVar1 = 0x14;
  }
  else {
    uVar1 = 0x12;
  }
  uVar2 = 0;
  if (((((param_1 != '\0') && (param_2 == '\0')) && (param_3 == '\x03')) &&
      (((param_4 != '\0' && (cVar6 != '\0')) &&
       (((int)(uint)param_7 >> 1 == 0 && ((param_8 == '\0' && (bVar3 <= param_9)))))))) &&
     ((uVar1 <= uVar4 &&
      (((((uVar4 <= uVar5 && (param_11 == '\0')) && (param_12 == '\0')) &&
        ((param_13 == '\0' && (param_14 == '\0')))) && (param_15 == '\x04')))))) {
    uVar2 = 1;
  }
  *param_16 = uVar2;
  DAT_fffec310 = uVar4 <= uVar5;
  DAT_fffec312 = 1;
  DAT_fffec313 = bVar3 <= param_9;
  DAT_fffec311 = uVar1 <= uVar4;
  return;
}

