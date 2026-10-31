
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00142d8c(uint param_1)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  bVar2 = true;
  iVar5 = param_1 * 0x20;
  sVar1 = **(short **)(&DAT_00161f08 + iVar5);
  uVar3 = FUN_00001550(0xf0);
  iVar7 = _DAT_fffff430 + ((int)**(short **)(&DAT_00161f0c + iVar5) - (int)sVar1 & 0xffffU) * -0x10;
  FUN_00001550(uVar3);
  uVar4 = (uint)**(char **)(&DAT_00161efc + iVar5);
  if ((uVar4 & 0x80) == 0) {
    bVar2 = false;
    pcVar6 = *(char **)(&DAT_00161efc + iVar5);
    uVar4 = (int)*pcVar6 | 0x80;
    *pcVar6 = (char)uVar4;
  }
  else if (0x3e < (uint)(iVar7 - **(int **)(&DAT_00161f00 + iVar5)) >> 4) {
    bVar2 = false;
  }
  if (bVar2) {
    DAT_ffff1a19 = DAT_ffff1a19 + '\x01';
  }
  else {
    **(int **)(&DAT_00161f00 + iVar5) = iVar7;
    **(short **)(&DAT_00161f04 + iVar5) = sVar1;
    (&DAT_ffff2624)[param_1] = (&DAT_ffff2624)[param_1] + '\x01';
    if (param_1 == 0) {
      DAT_ffff260c = DAT_ffff260c | 2;
      DAT_ffff2bf8 = DAT_ffff2bf8 | 0x80;
    }
    else if (param_1 == 1) {
      DAT_ffff260c = DAT_ffff260c | 1;
      DAT_ffff2bf8 = DAT_ffff2bf8 | 0x40;
    }
    if (param_1 == 2) {
      DAT_ffff260c = DAT_ffff260c | 8;
    }
    else if (param_1 == 3) {
      DAT_ffff260c = DAT_ffff260c | 4;
    }
    *(char *)(param_1 - 0xd9f8) = *(char *)(param_1 - 0xd9f8) + '\x01';
    if (((&DAT_00161ef8)[param_1] & DAT_ffff2bfd) == 0) {
      DAT_ffff2bfd = DAT_ffff2bfd | (&DAT_00161ef8)[param_1];
      FUN_0014305e(param_1);
    }
    if ((((int)(char)DAT_ffff2bfa & 0x80U) != 0) && ((DAT_ffff2bfa & 0x40) == 0)) {
      if (param_1 == 2) {
        DAT_ffff2bfe = DAT_ffff2bfe & 0xfe | 2;
      }
      else if (param_1 == 3) {
        DAT_ffff2bfe = DAT_ffff2bfe & 0xfd | 1;
      }
    }
    uVar4 = (int)(char)DAT_ffff2bfa;
    if (((((int)(char)DAT_ffff2bfa & 0x20U) != 0) &&
        (uVar4 = (int)(char)DAT_ffff2bfa, ((int)(char)DAT_ffff2bfa & 0x10U) == 0)) &&
       ((uVar4 = param_1, param_1 == 0 || (param_1 == 1)))) {
      DAT_ffff2bfe = DAT_ffff2bfe | (&DAT_00161ef8)[param_1];
    }
  }
  return uVar4;
}

