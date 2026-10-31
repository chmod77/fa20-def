
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010641c(char param_1,ushort param_2,char param_3,char param_4,char param_5,short param_6,
                 uint param_7,uint param_8,uint param_9,ushort *param_10)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  ushort local_24;
  
  if (param_1 == '\0') {
    DAT_fffedab0 = '\0';
  }
  else {
    if (DAT_fffedab0 == '\0') {
      DAT_fffedab0 = '\x01';
    }
    if ((param_7 & 0xffff) == 0) {
      local_24 = 16000;
    }
    else {
      iVar1 = __sdiv32_r1_by_r0((int)param_6 << 0xc,param_7 & 0xffff);
      if (iVar1 < (int)&DAT_0000c180) {
        if (iVar1 < -16000) {
          local_24 = 0;
        }
        else {
          local_24 = (short)iVar1 + 16000;
        }
      }
      else {
        local_24 = 0xffff;
      }
    }
    if ((param_4 == '\0') || (param_5 == '\0')) {
      iVar1 = _DAT_fffedaae - 0x41a0;
      uVar2 = 0xffffffff;
      if ((iVar1 < (int)&DAT_0000c180) && (uVar2 = 0, -0x3e81 < iVar1)) {
        uVar2 = _DAT_fffedaae - 800;
      }
      uVar5 = (ushort)uVar2;
    }
    else {
      iVar1 = _DAT_fffedaae - 0x41a0;
      uVar2 = 0xffffffff;
      if ((iVar1 < (int)&DAT_0000c180) && (uVar2 = 0, -0x3e81 < iVar1)) {
        uVar2 = _DAT_fffedaae - 800;
      }
      uVar5 = (ushort)uVar2;
    }
    if ((uVar2 & 0xffff) < 0x3e81) {
      uVar5 = 16000;
    }
    if (param_3 != '\0') {
      uVar2 = LK_133E10((uint)&T_02FBC0,param_9 & 0xff);
      puVar4 = (undefined *)((uVar2 & 0xffff) + (param_8 & 0xffff));
      puVar3 = (undefined *)0xffffffff;
      if ((puVar4 < &UNK_00013e80) && (puVar3 = (undefined *)0x0, (undefined *)0x3e7f < puVar4)) {
        puVar3 = puVar4 + -16000;
      }
      uVar5 = (ushort)puVar3;
      if ((uint)local_24 < ((uint)puVar3 & 0xffff)) {
        uVar5 = local_24;
      }
    }
    _DAT_fffedaac = uVar5;
    if (((param_3 != '\0') && (param_4 != '\0')) && (param_5 != '\0')) {
      _DAT_fffedaac = param_2;
    }
  }
  _DAT_fffedaae = 16000;
  if (param_1 != '\0') {
    _DAT_fffedaae = _DAT_fffedaac;
  }
  *param_10 = _DAT_fffedaae;
  return;
}

