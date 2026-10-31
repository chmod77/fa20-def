
void FUN_0005fbfe(uint param_1,undefined1 param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined1 uVar14;
  uint uVar15;
  undefined1 uVar16;
  uint uVar17;
  undefined1 local_1c;
  
  bVar1 = false;
  uVar17 = param_1 & 0xffff;
  uVar15 = (int)uVar17 >> 3;
  uVar11 = __shl_r0_by_r1(1,param_1 & 7);
  iVar13 = (param_1 & 0xffff) * 0x18;
  if (((DAT_fffef050 & 1) != 0) ||
     (uVar15 = uVar15 & 0xff, (uVar11 & 0xff & (int)(char)(&DAT_00023b08)[uVar15]) == 0))
  goto LAB_0005fccc;
  param_2 = 0xa8;
  if ((((&DAT_00163dac)[iVar13] & **(byte **)(&DAT_00163da8 + iVar13)) == 0) &&
     (((&DAT_00163dac)[iVar13] & **(byte **)(&DAT_00163da4 + iVar13)) != 0)) {
LAB_0005fcc6:
    local_1c = 2;
  }
  else {
    if ((((**(char **)(&DAT_00163db4 + iVar13) != '\0') ||
         (**(char **)(&DAT_00163db0 + iVar13) == '\0')) ||
        (((&DAT_00163dac)[iVar13] & **(byte **)(&DAT_00163da4 + iVar13)) != 0)) &&
       ((((&DAT_00163dac)[iVar13] & **(byte **)(&DAT_00163da8 + iVar13)) == 0 ||
        (((&DAT_00163dac)[iVar13] & **(byte **)(&DAT_00163da4 + iVar13)) != 0)))) {
      if ((((&DAT_00163dac)[iVar13] & **(byte **)(&DAT_00163da4 + iVar13)) == 0) ||
         ((**(char **)(&DAT_00163db8 + iVar13) != '\0' || ((DAT_ffff07db & 1) == 0))))
      goto LAB_0005fccc;
      goto LAB_0005fcc6;
    }
    local_1c = 4;
  }
  bVar1 = true;
  param_2 = local_1c;
LAB_0005fccc:
  uVar2 = DAT_fffefd4b;
  uVar3 = DAT_fffefd4c;
  uVar4 = DAT_fffefd4d;
  uVar5 = DAT_fffefd4e;
  uVar6 = DAT_fffefd4f;
  uVar7 = DAT_fffefd50;
  uVar8 = DAT_fffefd57;
  uVar9 = DAT_fffefd58;
  uVar10 = DAT_fffefd59;
  if (bVar1) {
    uVar16 = (undefined1)uVar15;
    uVar14 = (undefined1)uVar11;
    if ((((uVar17 == 0x96) || (uVar17 == 0x97)) || (uVar17 == 0x166)) || (uVar17 == 0x16f)) {
      uVar2 = param_2;
      uVar3 = uVar16;
      uVar4 = uVar14;
      if (((uVar17 != 0x96) &&
          (uVar2 = DAT_fffefd4b, uVar3 = DAT_fffefd4c, uVar4 = DAT_fffefd4d, uVar5 = param_2,
          uVar6 = uVar16, uVar7 = uVar14, uVar17 != 0x97)) &&
         ((uVar5 = DAT_fffefd4e, uVar6 = DAT_fffefd4f, uVar7 = DAT_fffefd50, uVar8 = param_2,
          uVar9 = uVar16, uVar10 = uVar14, uVar17 != 0x166 &&
          (uVar8 = DAT_fffefd57, uVar9 = DAT_fffefd58, uVar10 = DAT_fffefd59, uVar17 == 0x16f)))) {
        DAT_fffefd5a = param_2;
        DAT_fffefd5b = uVar16;
        DAT_fffefd5c = uVar14;
      }
    }
    else {
      uVar12 = FUN_00001550(0xf0);
      if (*(char *)((uint)DAT_fffefa49 * 3 + -0x105b5) == '\0') {
        *(undefined1 *)((uint)DAT_fffefa49 * 3 + -0x105b5) = local_1c;
        *(undefined1 *)((uint)DAT_fffefa49 * 3 + -0x105b4) = uVar16;
        *(undefined1 *)((uint)DAT_fffefa49 * 3 + -0x105b3) = uVar14;
        DAT_fffefa49 = DAT_fffefa49 + 1;
      }
      FUN_00001550(uVar12);
      uVar2 = DAT_fffefd4b;
      uVar3 = DAT_fffefd4c;
      uVar4 = DAT_fffefd4d;
      uVar5 = DAT_fffefd4e;
      uVar6 = DAT_fffefd4f;
      uVar7 = DAT_fffefd50;
      uVar8 = DAT_fffefd57;
      uVar9 = DAT_fffefd58;
      uVar10 = DAT_fffefd59;
    }
  }
  DAT_fffefd59 = uVar10;
  DAT_fffefd58 = uVar9;
  DAT_fffefd57 = uVar8;
  DAT_fffefd50 = uVar7;
  DAT_fffefd4f = uVar6;
  DAT_fffefd4e = uVar5;
  DAT_fffefd4d = uVar4;
  DAT_fffefd4c = uVar3;
  DAT_fffefd4b = uVar2;
  **(byte **)(&DAT_00163da8 + iVar13) =
       **(byte **)(&DAT_00163da8 + iVar13) & ~(&DAT_00163dac)[iVar13];
  **(byte **)(&DAT_00163da8 + iVar13) =
       **(byte **)(&DAT_00163da8 + iVar13) |
       **(byte **)(&DAT_00163da4 + iVar13) & (&DAT_00163dac)[iVar13];
  **(undefined1 **)(&DAT_00163db4 + iVar13) = **(undefined1 **)(&DAT_00163db0 + iVar13);
  return;
}

