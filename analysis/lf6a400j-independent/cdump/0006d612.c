
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006d612(void)

{
  byte bVar2;
  int iVar1;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  uVar3 = 0;
  while ((uVar3 & 0xff) < 7) {
    uVar4 = uVar3 & 0xff;
    iVar1 = uVar4 * 3;
    pbVar5 = (byte *)(iVar1 + -0x11441);
    pbVar7 = (byte *)(iVar1 + -0x1143f);
    pbVar6 = &DAT_fffeebc0 + iVar1;
    if (((&DAT_0002abe9)[(uint)*(byte *)((int)&PTR_DAT_0002ac10 + uVar4) * 6] & 0x10) != 0) {
      if (((((int)(char)*pbVar5 & 0xa9U) == 8) || (((int)(char)*pbVar5 & 0xa8U) == 0x88)) &&
         (((int)DAT_fffee7e8 & 0x80U) == 0)) {
        bVar2 = FUN_0016bd28(*pbVar7 - 1);
        *pbVar7 = bVar2;
        if (((*pbVar7 == 0) && (((int)(char)*pbVar5 & 0x80U) == 0)) &&
           (*(char *)(uVar4 - 0x113de) == '\0')) {
          *pbVar5 = *pbVar5 & 0x10;
          iVar1 = __shl_r0_by_r1(1,uVar3 & 0xff);
          DAT_fffeec32 = DAT_fffeec32 & ~(byte)iVar1;
        }
      }
      if ((((int)(char)*pbVar5 & 0xe0U) == 0x80) && ((DAT_fffeebb6 & 0x40) != 0)) {
        bVar2 = FUN_0016bd28(*pbVar6 - 1);
        *pbVar6 = bVar2;
        if (*pbVar6 == 0) {
          *pbVar5 = *pbVar5 & 0x7f;
          FUN_0006d79c();
        }
      }
      if ((((DAT_fffeebb6 & 0x20) == 0) && ((*pbVar5 & 0x61) == 1)) && ((DAT_fffeebb6 & 0x40) != 0))
      {
        *pbVar5 = *pbVar5 & 0xfe;
        DAT_fffeec2b = 0;
        _DAT_fffeec2e = 0;
        if (((int)(char)DAT_fffeebbe & 0x80U) != 0) {
          DAT_fffeebd1 = DAT_fffeebd1 & 0xfe;
          DAT_fffeebe6 = DAT_fffeebe6 & 0xfe;
          DAT_fffeebbe = DAT_fffeebbe & 0x7f;
        }
      }
    }
    uVar3 = uVar4 + 1;
  }
  FUN_0006df52();
  return;
}

