
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00086d9c(ushort param_1,char param_2,short param_3,ushort param_4,undefined2 *param_5,
                 ushort *param_6,ushort *param_7,undefined2 *param_8,short *param_9)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  uint b;
  char cVar9;
  
  uVar3 = LK_138F64((uint)&T_02CA20,(uint)param_4,(uint)param_1);
  b = uVar3 & 0xffff;
  *param_7 = (ushort)uVar3;
  if (DAT_fffebbe2 == '\0') {
    DAT_fffebbe0 = '\0';
    DAT_fffebbe2 = '\x01';
  }
  uVar4 = LK_1351FC((uint)&T_02CA34,(uint)param_4);
  sVar1 = param_3;
  if (DAT_fffebbe0 != '\0') {
    FUN_0016b4d8(&DAT_ffff19ac,param_3,uVar4);
    sVar1 = _DAT_ffff19ac;
  }
  _DAT_ffff19ac = sVar1;
  DAT_fffebbe0 = 1;
  *param_9 = _DAT_ffff19ac;
  iVar6 = (uint)param_1 - (uint)_DAT_fffebbda;
  puVar8 = (undefined1 *)0xffffffff;
  if ((iVar6 < (int)&DAT_0000c180) && (puVar8 = (undefined1 *)0x0, -0x3e81 < iVar6)) {
    puVar8 = &LAB_00003e80 + iVar6;
  }
  _DAT_fffebbda = _DAT_fffebbdc;
  puVar7 = (undefined *)((uint)puVar8 & 0xffff);
  cVar9 = (undefined *)0x5dc0 < puVar7;
  if ((undefined *)0x5dc0 >= puVar7) {
    cVar9 = DAT_fffebbde;
  }
  if (&UNK_00001f3f >= puVar7) {
    cVar9 = &UNK_00001f3f < puVar7;
  }
  if (cVar9 == '\0') {
    uVar4 = LK_133F40((uint)&T_02CA4C,(int)_DAT_ffff19ac);
    uVar5 = (undefined2)uVar4;
  }
  else {
    uVar4 = LK_133F40((uint)&T_02CA40,(int)_DAT_ffff19ac);
    uVar5 = (undefined2)uVar4;
  }
  *param_8 = uVar5;
  if (DAT_fffebbdf == '\0') {
    DAT_fffebbe1 = '\0';
    DAT_fffebbdf = '\x01';
  }
  uVar2 = (ushort)uVar3;
  if (DAT_fffebbe1 != '\0') {
    FUN_0016b4d8(&DAT_ffff19ae,b);
    uVar2 = _DAT_ffff19ae;
  }
  _DAT_ffff19ae = uVar2;
  DAT_fffebbe1 = 1;
  *param_6 = _DAT_ffff19ae;
  if (param_2 == '\0') {
    puVar7 = (undefined *)0xffffffff;
    if ((b != 0) &&
       (puVar7 = (undefined *)__udiv32_r1_by_r0((uint)_DAT_ffff19ae << 0xf,b),
       &DAT_0000ffff < puVar7)) {
      puVar7 = &DAT_0000ffff;
    }
    if (((uint)puVar7 & 0xffff) < (int)&DAT_00008000 + 1U) {
      *param_5 = (short)puVar7;
      _DAT_fffebbdc = _DAT_fffebbd8;
      _DAT_fffebbd8 = param_1;
      DAT_fffebbde = cVar9;
      return;
    }
  }
  *param_5 = 0x8000;
  DAT_fffebbde = cVar9;
  _DAT_fffebbdc = _DAT_fffebbd8;
  _DAT_fffebbd8 = param_1;
  return;
}

