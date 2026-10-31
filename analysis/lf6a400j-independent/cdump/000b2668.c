
/* WARNING: Removing unreachable block (ram,0x000b2896) */
/* WARNING: Removing unreachable block (ram,0x000b27e0) */
/* WARNING: Removing unreachable block (ram,0x000b2810) */
/* WARNING: Removing unreachable block (ram,0x000b28c2) */
/* WARNING: Removing unreachable block (ram,0x000b28f2) */
/* WARNING: Removing unreachable block (ram,0x000b29ec) */
/* WARNING: Removing unreachable block (ram,0x000b2a0e) */
/* WARNING: Removing unreachable block (ram,0x000b29dc) */

void FUN_000b2668(byte param_1,uint param_2,char param_3,uint param_4,char param_5,ushort param_6,
                 byte param_7,char param_8,char param_9,char param_10,ushort param_11,
                 ushort param_12,uint param_13,byte param_14,uint param_15,char param_16,
                 char param_17,char param_18,char param_19,char param_20,char param_21,char param_22
                 ,char param_23,char param_24,char param_25,char param_26,char param_27,
                 byte param_28,undefined1 *param_29,char *param_30)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  byte bVar6;
  int iVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  undefined1 uVar13;
  
  param_2 = param_2 & 0xff;
  uVar2 = LK_133B38((uint)&T_02E1D4,param_2);
  iVar7 = (int)(short)((param_11 & 0xff) - (param_12 & 0xff));
  uVar3 = __sdiv32_r1_by_r0((param_13 & 0xff) << 1,3);
  cVar8 = '\x7f';
  if ((iVar7 < 0x80) && (cVar8 = -0x80, -0x81 < iVar7)) {
    cVar8 = (char)iVar7;
  }
  uVar4 = param_15 >> 8 & 0xff;
  uVar12 = uVar4 + 5;
  uVar11 = uVar12 & 0xff;
  if (uVar11 < uVar4) {
    uVar11 = 0xff;
    uVar12 = uVar11;
  }
  cVar10 = '\x01';
  if ((param_10 == '\0') && (cVar10 = DAT_fffec6a9, cVar8 < '\x01')) {
    cVar10 = '\0';
  }
  *param_30 = cVar10;
  if (DAT_fffec6a7 == '\0') {
    bVar9 = 0xfa;
  }
  else {
    bVar9 = 0xff;
  }
  if (DAT_fffec6a2 == '\0') {
    uVar4 = 0xf8;
  }
  else {
    uVar4 = 0xfc;
  }
  if (DAT_fffec6a6 == '\0') {
    uVar2 = uVar2 & 0xff;
  }
  else {
    uVar2 = (int)(char)uVar2 + 5U & 0xff;
    if (uVar2 < 5) {
      uVar2 = 0xff;
    }
  }
  DAT_fffec6a6 = (param_4 & 0xff) <= uVar2;
  if (DAT_fffec6a4 != '\0') {
    uVar2 = 0;
    if (4 < uVar11) {
      uVar2 = uVar12 - 5;
    }
    uVar11 = uVar2 & 0xff;
  }
  DAT_fffec6a4 = uVar11 <= (uVar3 & 0xff);
  if (DAT_fffec6a8 == '\0') {
    uVar5 = 0x4800;
  }
  else {
    uVar5 = 0x4000;
  }
  if (DAT_fffec6a3 == '\0') {
    bVar6 = 2;
  }
  else {
    bVar6 = 1;
  }
  uVar13 = 1;
  if (param_27 == '\0') {
    if (((param_1 <= bVar9) && (param_2 <= uVar4)) &&
       (((((bool)DAT_fffec6a6 && (param_3 != '\0')) || (param_3 == '\0')) &&
        ((((0x7c < param_7 && (uVar5 <= param_6)) && (param_9 == '\x03')) &&
         ((param_8 != '\0' && (cVar10 == '\0')))))))) {
      bVar1 = true;
      if ((((param_16 != '\0') || (param_5 == '\0')) &&
          (((param_17 == '\0' && (param_18 == '\0')) && (param_19 == '\0')))) &&
         (((((param_20 == '\0' && (param_21 == '\0')) && (param_22 == '\0')) &&
           ((param_23 == '\0' && (param_24 == '\0')))) && ((param_25 == '\0' && (param_26 == '\0')))
          ))) {
        bVar1 = false;
      }
      if (((!bVar1) && (3 < param_14)) && (((bool)DAT_fffec6a4 && (bVar6 <= param_28))))
      goto LAB_000b2b28;
    }
    uVar13 = 0;
  }
LAB_000b2b28:
  *param_29 = uVar13;
  DAT_fffec6a9 = cVar10;
  DAT_fffec6a7 = param_1 <= bVar9;
  DAT_fffec6a2 = param_2 <= uVar4;
  DAT_fffec6a1 = 1;
  DAT_fffec6a5 = 1;
  DAT_fffec6a0 = 1;
  DAT_fffec6a8 = uVar5 <= param_6;
  DAT_fffec6a3 = bVar6 <= param_28;
  return;
}

