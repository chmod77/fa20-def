
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a4000(char param_1,int param_2,int param_3,int param_4,byte param_5,undefined4 param_6,
                 undefined1 *param_7)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined1 local_18 [4];
  
  bVar1 = param_5 == 0;
  if (!bVar1) {
    bVar3 = 4;
    if (param_5 < 4) {
      bVar3 = param_5;
    }
    iVar2 = (short)(bVar3 - 1) * 2;
    _DAT_fffec300 = *(ushort *)(param_2 + iVar2);
    _DAT_fffec302 = *(ushort *)(param_3 + iVar2);
    _DAT_fffec304 = *(short *)(param_4 + iVar2);
  }
  if (((param_1 != '\0') && (DAT_fffec306 = '\x01', _DAT_fffec300 <= _DAT_fffec302)) &&
     (_DAT_fffec304 != -1)) {
    DAT_fffec306 = '\0';
  }
  cVar4 = '\0';
  if (param_1 != '\0') {
    cVar4 = DAT_fffec306;
  }
  if (!bVar1) {
    if (param_5 == 4) {
      DAT_fffec30b = cVar4;
    }
    if (param_5 == 3) {
      DAT_fffec30a = cVar4;
    }
    if (param_5 == 2) {
      DAT_fffec309 = cVar4;
    }
    if (param_5 == 1) {
      DAT_fffec308 = cVar4;
    }
    local_18[0] = 0;
    if (DAT_fffec308 != '\0') {
      local_18[0] = 0x10;
    }
    local_18[1] = 0;
    if (DAT_fffec309 != '\0') {
      local_18[1] = 0x20;
    }
    local_18[2] = 0;
    if (DAT_fffec30a != '\0') {
      local_18[2] = 0x30;
    }
    local_18[3] = 0;
    if (DAT_fffec30b != '\0') {
      local_18[3] = 0x40;
    }
    if (3 < param_5) {
      param_5 = 4;
    }
    DAT_fffec307 = local_18[(short)(param_5 - 1)];
  }
  if (bVar1) {
    *param_7 = 0;
  }
  else {
    *param_7 = DAT_fffec307;
  }
  *(bool *)param_6 = cVar4 != '\0';
  return;
}

