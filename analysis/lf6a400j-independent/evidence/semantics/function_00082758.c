
void FUN_00082758(undefined2 param_1,undefined2 param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar6;
  uint uVar4;
  uint uVar5;
  short sVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined *puVar12;
  ushort uVar14;
  undefined *puVar13;
  char cVar15;
  char in_stack_00000007;
  char in_stack_0000000b;
  char in_stack_0000000f;
  char in_stack_00000013;
  char in_stack_00000017;
  char in_stack_0000001b;
  ushort in_stack_0000001e;
  ushort *in_stack_00000020;
  undefined2 *in_stack_00000024;
  ushort *in_stack_00000028;
  ushort *in_stack_0000002c;
  ushort *in_stack_00000030;
  short *in_stack_00000034;
  char *in_stack_00000038;
  
  puVar13 = PTR_FUN_00082a54;
  (*(code *)PTR_FUN_00082a54)(PTR_DAT_00082a50,param_1);
  (*(code *)puVar13)(PTR_DAT_00082a58,param_1,param_2);
  (*(code *)puVar13)(PTR_DAT_00082a5c,param_1,param_2);
  puVar13 = PTR_FUN_00082a60;
  uVar2 = (*(code *)PTR_FUN_00082a60)();
  uVar2 = uVar2 & 0xffff;
  uVar3 = (*(code *)puVar13)();
  iVar10 = uVar2 - (uVar3 & 0xffff);
  uVar6 = 0xffff;
  if (iVar10 <= (int)PTR_DAT_00082a64) {
    uVar6 = (short)iVar10 + DAT_00082986;
  }
  uVar2 = (*(code *)puVar13)();
  uVar2 = uVar2 & 0xffff;
  uVar3 = (*(code *)puVar13)();
  iVar10 = uVar2 - (uVar3 & 0xffff);
  uVar2 = 0xffffffff;
  if (iVar10 <= (int)PTR_DAT_00082a64) {
    uVar2 = iVar10 + DAT_00082986;
  }
  uVar3 = (*(code *)puVar13)();
  uVar3 = uVar3 & 0xffff;
  uVar4 = (*(code *)puVar13)();
  iVar10 = uVar3 - (uVar4 & 0xffff);
  uVar3 = 0xffffffff;
  if (iVar10 <= (int)PTR_DAT_00082a64) {
    uVar3 = iVar10 + DAT_00082986;
  }
  uVar4 = (*(code *)puVar13)();
  uVar4 = uVar4 & 0xffff;
  uVar5 = (*(code *)puVar13)();
  iVar10 = uVar4 - (uVar5 & 0xffff);
  uVar4 = 0xffffffff;
  if (iVar10 <= (int)PTR_DAT_00082a64) {
    uVar4 = iVar10 + DAT_00082986;
  }
  puVar12 = (undefined *)((uVar3 & 0xffff) + (uVar4 & 0xffff));
  uVar14 = 0xffff;
  if ((puVar12 <= PTR_DAT_00082a68) && (uVar14 = 0, (undefined *)(int)DAT_00082986 <= puVar12)) {
    uVar14 = (short)puVar12 - DAT_00082986;
  }
  *in_stack_00000030 = uVar14;
  uVar3 = (*(code *)puVar13)();
  uVar3 = uVar3 & 0xffff;
  uVar4 = (*(code *)puVar13)();
  iVar10 = uVar3 - (uVar4 & 0xffff);
  uVar3 = 0xffffffff;
  if (iVar10 <= (int)PTR_DAT_00082a64) {
    uVar3 = iVar10 + DAT_00082986;
  }
  puVar12 = (undefined *)((uVar2 & 0xffff) + (uVar3 & 0xffff));
  uVar2 = 0xffffffff;
  if ((puVar12 <= PTR_DAT_00082a68) && (uVar2 = 0, (undefined *)(int)DAT_00082986 <= puVar12)) {
    uVar2 = (int)puVar12 - (int)DAT_00082986;
  }
  *in_stack_0000002c = (ushort)uVar2;
  uVar3 = (*(code *)puVar13)();
  uVar3 = uVar3 & 0xffff;
  uVar4 = (*(code *)puVar13)();
  iVar10 = uVar3 - (uVar4 & 0xffff);
  uVar3 = 0xffffffff;
  if (iVar10 <= (int)PTR_DAT_00082a64) {
    uVar3 = iVar10 + DAT_00082986;
  }
  puVar13 = (undefined *)((uint)uVar6 + (uVar3 & 0xffff));
  uVar3 = 0xffffffff;
  if ((puVar13 <= PTR_DAT_00082a68) && (uVar3 = 0, (undefined *)(int)DAT_00082a4a <= puVar13)) {
    uVar3 = (int)puVar13 - (int)DAT_00082a4a;
  }
  *in_stack_00000028 = (ushort)uVar3;
  if ((in_stack_00000007 == '\0') || (uVar4 = uVar3, in_stack_0000000b != '\x02')) {
    if ((in_stack_00000007 == '\0') || (in_stack_0000000b != '\x03')) {
      if ((in_stack_00000007 == '\0') || (in_stack_0000000b != '\x04')) {
        uVar4 = uVar2;
        if ((in_stack_00000007 == '\0') &&
           ((((in_stack_0000000f == '\0' || (in_stack_00000013 != '\0')) &&
             (in_stack_0000000f != '\0')) && (in_stack_00000013 != '\0')))) goto LAB_000829fc;
      }
      else {
        uVar4 = (int)(short)in_stack_0000001e;
      }
    }
    else {
LAB_000829fc:
      uVar4 = (int)(short)uVar14;
    }
  }
  *in_stack_00000024 = (short)uVar4;
  puVar1 = DAT_00082a6c;
  uVar5 = uVar4;
  if (*(char *)((int)DAT_00082a6c + 0xd) != '\0') {
    uVar5 = (uint)(short)DAT_00082a6c[3];
  }
  uVar5 = uVar5 & 0xffff;
  uVar11 = (uVar4 & 0xffff) - uVar5;
  uVar9 = 0xffffffff;
  if (((int)uVar11 <= (int)PTR_DAT_00082a64) && (uVar9 = 0, (int)DAT_00082a4c <= (int)uVar11)) {
    uVar9 = uVar11 + (int)DAT_00082a4a;
  }
  if ((int)uVar11 < 0) {
    uVar11 = -uVar11;
    if ((int)uVar11 < 0) {
      uVar11 = 0;
    }
  }
  else if ((int)uVar11 < 0) {
    uVar11 = 0;
  }
  if (((in_stack_0000000b == '\x04') && (*(char *)(DAT_00082a6c + 5) != '\x04')) ||
     ((*(char *)(DAT_00082a6c + 5) == '\x04' && (in_stack_0000000b != '\x04')))) {
    cVar15 = '\x01';
  }
  else {
    cVar15 = *(char *)(DAT_00082a6c + 6);
  }
  if ((uVar11 & 0xffff) < 0x51) {
    cVar15 = '\0';
  }
  *(char *)(DAT_00082a6c + 6) = cVar15;
  *in_stack_00000038 = cVar15;
  if (in_stack_0000000b != '\x04') {
    sVar7 = (short)((int)(uVar2 & 0xffff) >> 1) - (short)((int)(uint)puVar1[1] >> 1);
  }
  else {
    sVar7 = (short)((int)(uint)in_stack_0000001e >> 1) - (short)((int)(uint)*puVar1 >> 1);
  }
  if (in_stack_0000000b == '\x03') {
    sVar7 = (short)((int)(uint)uVar14 >> 1) - (short)((int)(uint)puVar1[2] >> 1);
  }
  if (in_stack_0000000b == '\x02') {
    sVar7 = (short)((int)(uVar3 & 0xffff) >> 1) - (short)((int)(uint)puVar1[4] >> 1);
  }
  sVar8 = 0;
  if (*(char *)((int)puVar1 + 0xb) != '\0') {
    sVar8 = sVar7;
  }
  *in_stack_00000034 = sVar8;
  if ((int)(uVar9 & 0xffff) < (int)DAT_00082c1e) {
    if (cVar15 == '\0') {
      uVar6 = *(ushort *)(PTR_DAT_00082c24 + 8);
    }
    else {
      uVar6 = *(ushort *)(PTR_DAT_00082c24 + 10);
    }
    iVar10 = sVar8 * 2 - (uint)uVar6;
    uVar11 = 0xffffffff;
    if ((iVar10 <= (int)PTR_DAT_00082c30) && (uVar11 = 0, DAT_00082c20 <= iVar10)) {
      uVar11 = iVar10 + DAT_00082c22;
    }
    puVar13 = (undefined *)(uVar5 + (uVar11 & 0xffff));
    uVar5 = 0xffffffff;
    if ((puVar13 <= PTR_DAT_00082c2c) && (uVar5 = 0, (undefined *)(int)DAT_00082c1e <= puVar13)) {
      uVar5 = (int)puVar13 - (int)DAT_00082c1e;
    }
    if ((uVar4 & 0xffff) <= (uVar5 & 0xffff)) goto LAB_00082bdc;
  }
  else {
    if (in_stack_00000017 == '\0') {
      if (cVar15 == '\0') {
        uVar6 = *(ushort *)PTR_DAT_00082c24;
      }
      else {
        uVar6 = *(ushort *)(PTR_DAT_00082c24 + 2);
      }
    }
    else if (in_stack_0000001b == '\0') {
      uVar6 = *(ushort *)(PTR_DAT_00082c24 + 6);
    }
    else {
      uVar6 = *(ushort *)(PTR_DAT_00082c24 + 4);
    }
    puVar12 = (undefined *)(sVar8 * 2 + (uint)uVar6);
    puVar13 = PTR_DAT_00082c28;
    if (((int)puVar12 <= (int)PTR_DAT_00082c28) && (puVar13 = puVar12, (int)puVar12 < 0)) {
      puVar13 = (undefined *)0x0;
    }
    puVar13 = (undefined *)(((uint)puVar13 & 0xffff) + uVar5);
    uVar5 = 0xffffffff;
    if ((puVar13 <= PTR_DAT_00082c2c) && (uVar5 = 0, (undefined *)(int)DAT_00082c1e <= puVar13)) {
      uVar5 = (int)puVar13 - (int)DAT_00082c1e;
    }
    if ((uVar5 & 0xffff) <= (uVar4 & 0xffff)) goto LAB_00082bdc;
  }
  uVar5 = uVar4 & 0xffff;
LAB_00082bdc:
  *in_stack_00000020 = (ushort)uVar5;
  puVar1[4] = (ushort)uVar3;
  *(undefined1 *)((int)puVar1 + 0xb) = 1;
  puVar1[1] = (ushort)uVar2;
  puVar1[2] = uVar14;
  puVar1[3] = (ushort)uVar5;
  *(undefined1 *)((int)puVar1 + 0xd) = 1;
  *(char *)(puVar1 + 5) = in_stack_0000000b;
  *puVar1 = in_stack_0000001e;
  return;
}

