
/* WARNING: Removing unreachable block (ram,0x00080e04) */

void FUN_00080d84(ushort param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 undefined2 *param_7)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  
  iVar4 = -(param_3 & 0xffff);
  uVar7 = 0;
  if (-0x7d01 < iVar4) {
    uVar7 = (int)&DAT_00007d00 + iVar4;
  }
  uVar3 = 0;
  if (-0x7d01 < iVar4) {
    uVar3 = (int)&DAT_00007d00 + iVar4;
  }
  puVar8 = (undefined *)(param_4 & 0xffff);
  DAT_fffebac0 = (param_6 & 0xff) < 0x100;
  if (DAT_fffebac0) {
    uVar1 = 0x7a33;
  }
  else {
    uVar1 = 0x7a00;
  }
  if (DAT_fffebac0) {
    uVar2 = 0x7a33;
  }
  else {
    uVar2 = 0x7a00;
  }
  cVar5 = '\x01';
  if (((param_1 < uVar1) && (cVar5 = DAT_fffebac2, param_1 <= uVar2)) && (puVar8 <= &UNK_00009ab2))
  {
    cVar5 = '\0';
  }
  uVar9 = param_2;
  if (cVar5 != '\0') {
    uVar9 = uVar7;
  }
  cVar6 = '\x01';
  if ((puVar8 + 0xd4d < &LAB_00002800 + (param_5 & 0xff) * 0x100 || DAT_fffebac3 < 200) &&
     (cVar6 = DAT_fffebac1, puVar8 <= (undefined *)((param_5 & 0xff) * 0x100))) {
    cVar6 = '\0';
  }
  if (cVar6 == '\0') {
    uVar3 = param_2;
  }
  DAT_fffebac1 = cVar6;
  DAT_fffebac2 = cVar5;
  if ((uVar9 & 0xffff) < (uVar3 & 0xffff)) {
    *param_7 = (short)uVar9;
  }
  else {
    *param_7 = (short)uVar3;
  }
  if (puVar8 + 0xd4d < &LAB_00002800 + (param_5 & 0xff) * 0x100) {
    DAT_fffebac3 = '\0';
  }
  else {
    DAT_fffebac3 = DAT_fffebac3 + 1;
    if (DAT_fffebac3 == '\0') {
      DAT_fffebac3 = -1;
    }
  }
  return;
}

