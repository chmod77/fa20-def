
bool FUN_000054da(byte param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  bVar5 = false;
  if ((param_1 != 0) && (param_1 != 0x1f)) {
    iVar6 = 1;
    uVar7 = (uint)param_1;
    for (uVar8 = uVar7; 0 < (int)uVar8; uVar8 = uVar8 - 1) {
      iVar6 = iVar6 << 1;
    }
    iVar3 = FUN_00005412(param_1,iVar6);
    if (iVar3 != 0) {
      if ((DAT_ffff6569 & 2) == 0) {
        bVar2 = (byte)*(undefined2 *)(uVar7 * 6 + -0x74d2);
      }
      else {
        bVar2 = (byte)(&DAT_000074ac)[uVar7 * 3];
      }
      for (uVar8 = 0; (uVar8 & 0xff) < (uint)(bVar2 & 0xf); uVar8 = uVar8 + 1) {
        uVar4 = FUN_00005a02(param_1,uVar8);
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        FUN_000059f4(uVar4,(int)cVar1);
      }
      bVar5 = DAT_ffff8b1c == '\0';
      FUN_000054b4(param_1,iVar6);
    }
  }
  return bVar5;
}

