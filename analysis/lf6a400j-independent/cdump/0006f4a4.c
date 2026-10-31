
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0006f4a4(void)

{
  uint uVar1;
  undefined4 in_r0;
  uint uVar2;
  undefined4 in_r1;
  int extraout_r1;
  byte extraout_r3;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  
  FUN_00001550(0xf0);
  _DAT_fffff482 = _DAT_fffff482 & 0xbfff;
  pbVar6 = &DAT_ffff2b5c;
  DAT_ffff2b60 = '\0';
  do {
    while( true ) {
      iVar3 = (int)DAT_ffff2b60;
      uVar2 = (uint)(char)*pbVar6;
      if ((uVar2 & 0x80) != 0) goto LAB_0006f52a;
      if (uVar2 == 0) break;
      do {
        uVar1 = uVar2 & 1;
        uVar2 = uVar2 >> 1;
      } while (uVar1 != 1);
      FUN_00001550(0xf0);
      *pbVar6 = *pbVar6 & extraout_r3 | 0x80;
      puVar5 = (undefined4 *)(&PTR_DAT_00168c20)[iVar3 * 8 + extraout_r1];
      if (puVar5 != (undefined4 *)0x0) {
        while( true ) {
          pcVar4 = (code *)*puVar5;
          puVar5 = puVar5 + 1;
          if (pcVar4 == (code *)0x0) break;
          (*pcVar4)();
        }
      }
      pbVar6 = &DAT_ffff2b5c + DAT_ffff2b60;
      *pbVar6 = *pbVar6 & 0x7f;
    }
    DAT_ffff2b60 = (char)(iVar3 + 1U);
    pbVar6 = pbVar6 + 1;
  } while (iVar3 + 1U < (uint)(int)DAT_ffff2b61);
LAB_0006f52a:
  return CONCAT44(in_r1,in_r0);
}

