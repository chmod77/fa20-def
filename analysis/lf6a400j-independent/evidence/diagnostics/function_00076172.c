
void FUN_00076172(void)

{
  undefined1 *puVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar1 = DAT_000763ac;
  cVar3 = '\0';
  if ((*DAT_000763b8 < 3) || ((*DAT_000763b8 & 1) == 0)) {
    *DAT_000763ac = 0x7f;
    puVar1[1] = 0x22;
    puVar1[2] = 0x13;
  }
  else {
    uVar6 = (int)((*DAT_000763b8 - 1) + (uint)((int)(*DAT_000763b8 - 1) < 0)) >> 1 & 0xffff;
    if (uVar6 < 0x65) {
      *DAT_000763ac = 0x62;
      psVar2 = DAT_000763b0;
      *DAT_000763b0 = 1;
      for (uVar7 = 0; (uVar7 & 0xff) < uVar6; uVar7 = uVar7 + 1) {
        iVar4 = (uVar7 & 0xff) * 2;
        uVar5 = (uint)*(byte *)(DAT_000763bc + 1 + iVar4) * 0x100 +
                (uint)*(byte *)(DAT_000763bc + 2 + iVar4);
        if ((uVar5 & (int)DAT_000762f6) == (uint)DAT_000762f8) {
          if (((int)PTR_DAT_000763c0 <= (int)uVar5) && ((int)uVar5 <= (int)PTR_DAT_000763c4)) {
            cVar3 = FUN_00076268();
          }
        }
        else if ((uVar5 & (int)DAT_000762f6) == (uint)DAT_000762fa) {
          if (((int)PTR_DAT_000763c8 <= (int)uVar5) && ((int)uVar5 <= (int)PTR_DAT_000763cc)) {
            cVar3 = FUN_00076300();
          }
        }
        else {
          cVar3 = FUN_00076420();
        }
        puVar1 = DAT_000763ac;
        if (cVar3 != '\0') {
          *DAT_000763ac = 0x7f;
          puVar1[1] = 0x22;
          puVar1[2] = cVar3;
          *psVar2 = 3;
          break;
        }
      }
      if (*psVar2 != 1) {
        return;
      }
    }
    puVar1 = DAT_000763ac;
    *DAT_000763ac = 0x7f;
    puVar1[1] = 0x22;
    puVar1[2] = 0x31;
  }
  *DAT_000763b0 = 3;
  return;
}

