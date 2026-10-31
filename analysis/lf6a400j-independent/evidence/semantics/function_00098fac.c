
void FUN_00098fac(char param_1,char param_2,char param_3,char param_4,undefined2 param_5,
                 char param_6,char param_7,char param_8,uint param_9,uint param_10,char param_11,
                 char param_12,char param_13,char param_14,char param_15,char param_16,char param_17
                 ,char param_18,char param_19,uint param_20,byte param_21,char param_22,
                 char param_23)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ushort uStack_34;
  char cStack_31;
  char cStack_2d;
  char cStack_29;
  char cStack_28;
  
  cStack_31 = param_2;
  cStack_2d = param_3;
  cStack_29 = param_4;
  uVar5 = *(undefined4 *)((int)&uStack_34 + (int)DAT_00099172);
  *(char *)((int)&uStack_34 + (int)DAT_00099176) =
       (char)*(undefined4 *)((int)&uStack_34 + (int)DAT_00099174);
  *(char *)((int)&uStack_34 + (int)DAT_0009917a) =
       (char)*(undefined4 *)((int)&uStack_34 + (int)DAT_00099178);
  *(short *)((int)&uStack_34 + (int)DAT_0009917e) =
       (short)*(undefined4 *)((int)&uStack_34 + (int)DAT_0009917c);
  *(char *)((int)&uStack_34 + (int)DAT_00099182) =
       (char)*(undefined4 *)((int)&uStack_34 + (int)DAT_00099180);
  *(char *)((int)&uStack_34 + (int)DAT_00099186) =
       (char)*(undefined4 *)((int)&uStack_34 + (int)DAT_00099184);
  *(char *)((int)&uStack_34 + (int)DAT_0009918a) =
       (char)*(undefined4 *)((int)&uStack_34 + (int)DAT_00099188);
  *(char *)((int)&uStack_34 + (int)DAT_0009918e) =
       (char)*(undefined4 *)((int)&uStack_34 + (int)DAT_0009918c);
  *(char *)((int)&uStack_34 + (int)DAT_00099192) =
       (char)*(undefined4 *)((int)&uStack_34 + (int)DAT_00099190);
  uVar6 = *(undefined4 *)((int)&uStack_34 + (int)DAT_00099194);
  uVar3 = (param_9 & 0xff) + (param_10 & 0xff);
  cStack_28 = '\x7f';
  if (((int)uVar3 <= (int)DAT_00099196) && (cStack_28 = -0x80, 0x1f < uVar3)) {
    cStack_28 = (char)uVar3 - (char)DAT_00099190;
  }
  **(char **)((int)&uStack_34 + (int)DAT_00099198) = cStack_28;
  if ((((param_11 != '\x01') && (param_12 = param_13, param_11 != '\x02')) &&
      (param_12 = param_14, param_11 != '\x03')) && (param_11 == '\x04')) {
    param_12 = param_15;
  }
  if (((param_6 == '\0') &&
      (uVar3 = (int)(param_20 & 0xffff) >> 2, (byte)PTR_DAT_000992e4[5] <= uVar3)) &&
     (uVar3 <= (byte)PTR_DAT_000992e4[4])) {
    cVar1 = (*(code *)PTR_FUN_000992ec)(PTR_DAT_000992e8,param_5);
  }
  else {
    cVar1 = PTR_DAT_000992e4[3];
  }
  if (param_1 == '\x03') {
    sVar2 = (((short)(char)((uint)((int)DAT_0009919a * (int)param_22) >> 8) + (short)cStack_31 +
             (short)param_23) - (ushort)param_21) + ((ushort)uVar5 & 0xff) +
            (short)*(char *)((int)&uStack_34 + (int)DAT_0009918a) +
            (ushort)*(byte *)((int)&uStack_34 + (int)DAT_0009918e) * -2 +
            (ushort)*(byte *)((int)&uStack_34 + (int)DAT_00099192) + (short)(char)uVar6;
    cVar4 = '\x7f';
    if (((int)sVar2 <= DAT_0009919a + 0x4b) && (cVar4 = -0x80, -1 < sVar2)) {
      cVar4 = (char)sVar2 + -0x80;
    }
  }
  else {
    cVar4 = '\n';
    if (param_1 == '\x02') {
      cVar4 = cStack_2d;
    }
  }
  if (((((param_16 != '\x01') && (param_11 == '\x01')) ||
       ((param_17 != '\x01' && (param_11 == '\x02')))) ||
      ((param_18 != '\x01' && (param_11 == '\x03')))) ||
     ((param_19 != '\x01' && (param_11 == '\x04')))) {
    sVar2 = (((short)(char)((uint)((int)DAT_000992d0 * (int)param_22) >> 8) + (short)param_12 +
             (short)param_23) - (ushort)param_21) +
            (short)*(char *)((int)&uStack_34 + (int)DAT_000992d2) +
            (ushort)*(byte *)((int)&uStack_34 + (int)DAT_000992d4) * -2 +
            (ushort)*(byte *)((int)&uStack_34 + (int)DAT_000992d6);
    cVar4 = '\x7f';
    if ((sVar2 < 0x80) && (cVar4 = -0x80, -0x81 < sVar2)) {
      cVar4 = (char)sVar2;
    }
  }
  if (cStack_29 == '\0') {
    if (*(char *)((int)&uStack_34 + (int)DAT_000992d8) == '\0') {
      if (param_7 == '\0') {
        if (param_8 != '\0') {
          cVar4 = cStack_28;
        }
      }
      else {
        cVar4 = *PTR_DAT_000992f8;
      }
    }
    else {
      cVar4 = *DAT_000992f4;
    }
  }
  else {
    cVar4 = *DAT_000992f0;
  }
  if ((((*(char *)((int)&uStack_34 + (int)DAT_000992da) != '\0') && (param_6 != '\0')) &&
      (*(char *)((int)&uStack_34 + (int)DAT_000992dc) < '\x01')) &&
     (*(ushort *)((int)&uStack_34 + (int)DAT_000992de) <= *(ushort *)PTR_DAT_000992fc)) {
    cVar4 = *(char *)((int)&uStack_34 + (int)DAT_000992e0) + -0x20;
  }
  if (cVar4 <= cVar1) {
    cVar4 = cVar1;
  }
  if ((char)*PTR_DAT_000992e4 <= cVar4) {
    cVar4 = *PTR_DAT_000992e4;
  }
  **(char **)((int)&uStack_34 + (int)DAT_000992e2) = cVar4;
  *DAT_000992f0 = cVar4;
  return;
}

