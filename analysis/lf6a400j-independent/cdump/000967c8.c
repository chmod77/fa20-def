
/* WARNING: Removing unreachable block (ram,0x000968f4) */
/* WARNING: Removing unreachable block (ram,0x000968fe) */
/* WARNING: Removing unreachable block (ram,0x000968f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000967c8(char param_1,byte param_2,char param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  char cVar4;
  byte bVar5;
  
  if (param_2 == 0) {
    DAT_fffebf41 = '\0';
  }
  else {
    if (DAT_fffebf41 == '\0') {
      DAT_fffebf43 = '\0';
      _DAT_fffebf3e = 0;
      DAT_fffebf47 = 0;
      DAT_fffebf45 = 0;
      DAT_fffebf44 = 0;
      DAT_fffebf42 = 0;
      DAT_fffebf41 = '\x01';
    }
    bVar5 = DAT_fffebf47;
    if ((DAT_fffebf47 < 8) && (bVar5 = 0xff, DAT_fffebf47 != 0xff)) {
      bVar5 = DAT_fffebf47 + 1;
    }
    if (7 < DAT_fffebf47) {
      bVar5 = 1;
    }
    cVar4 = '\x01';
    if (param_2 <= DAT_fffebf45) {
      cVar4 = DAT_fffebf43;
    }
    if (DAT_fffebf44 < DAT_fffebf42) {
      cVar4 = '\0';
    }
    bVar1 = false;
    if (cVar4 == '\0') {
      _DAT_fffebf3e = 0;
      uVar3 = _DAT_fffebf3e;
    }
    else {
      bVar1 = _DAT_fffebf3e < 0x33;
      uVar3 = 0xffff;
      if (_DAT_fffebf3e != 0xffff) {
        uVar3 = _DAT_fffebf3e + 1;
      }
    }
    _DAT_fffebf3e = uVar3;
    bVar2 = false;
    if ((cVar4 != '\0') && (bVar1)) {
      bVar2 = true;
    }
    if ((param_1 != '\0') || (bVar2)) {
      bVar5 = 0;
    }
    DAT_fffebf3c = 7 < bVar5;
    DAT_fffebf42 = DAT_fffebf44;
    DAT_fffebf43 = cVar4;
    DAT_fffebf44 = bVar2;
    DAT_fffebf45 = param_2;
    DAT_fffebf47 = bVar5;
  }
  bVar5 = 0;
  if (DAT_fffebf46 < 4) {
    bVar5 = DAT_fffebf46;
  }
  DAT_fffebf46 = bVar5;
  if ((param_3 != DAT_fffebf40) && (DAT_fffebf46 = 0xff, bVar5 != 0xff)) {
    DAT_fffebf46 = bVar5 + 1;
  }
  if (param_1 != '\0') {
    DAT_fffebf46 = 0;
  }
  *(bool *)param_4 = 3 < DAT_fffebf46;
  DAT_fffebf40 = param_3;
  return;
}

