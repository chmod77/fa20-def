
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0015a822(void)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 uVar5;
  uint uVar4;
  char cVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = _DAT_fffff434;
  cVar2 = DAT_ffff2b65;
  if (((DAT_ffff2c08 & 2) == 0) || (((int)DAT_ffff2b64 & 0x80U) == 0)) {
    uVar4 = FUN_0015aa56();
  }
  else {
    cVar6 = DAT_ffff1a59 + 1;
    uVar4 = (uint)DAT_ffff1a59;
    bVar1 = *(byte *)((int)&PTR_DAT_00163820 + uVar4);
    uVar7 = 0;
    while ((uVar7 & 0xff) < 4) {
      if (((uVar7 & 0xff) == (uint)bVar1) && (cVar2 == '\x01')) {
        *(undefined1 *)((uVar7 & 0xff) - 0xd0f4) = 1;
        *(undefined1 *)((uVar7 & 0xff) - 0xd0f0) = 0;
      }
      else {
        uVar4 = uVar7 & 0xff;
        if (*(char *)(uVar4 - 0xd0f4) == '\x01') {
          if ((cVar2 == '\x0f') && ((cVar6 == '\x01' || (cVar6 == '\x03')))) {
            uVar5 = FUN_0000152c(*(byte *)(uVar4 - 0xd0f0) + 3);
            *(undefined1 *)(uVar4 - 0xd0f0) = uVar5;
          }
          else if ((cVar2 == '\x0e') && ((cVar6 == '\x02' || (cVar6 == '\x04')))) {
            uVar5 = FUN_0000152c(*(byte *)(uVar4 - 0xd0f0) + 4);
            *(undefined1 *)(uVar4 - 0xd0f0) = uVar5;
          }
          else {
            uVar5 = FUN_0000152c(*(byte *)(uVar4 - 0xd0f0) + 1);
            *(undefined1 *)(uVar4 - 0xd0f0) = uVar5;
          }
          if (cVar2 == '\r') {
            *(char *)(uVar4 - 0xd0bf) = *(char *)(uVar4 - 0xd0bf) + '\x01';
          }
        }
      }
      uVar8 = uVar7 & 0xff;
      if ((*(char *)(uVar8 - 0xd0f0) == '\x04') && (*(char *)(uVar8 - 0xd0f4) == '\x01')) {
        *(undefined4 *)(uVar8 * 8 - 0xd0e8) = uVar3;
        uVar4 = uVar8 * 8;
      }
      else if ((((0x14 < *(byte *)(uVar8 - 0xd0f0)) && (*(char *)(uVar8 - 0xd0bf) != '\0')) ||
               (uVar4 = uVar8, 0x27 < *(byte *)(uVar8 - 0xd0f0))) &&
              (uVar4 = (uint)*(char *)(uVar8 - 0xd0f4), uVar4 == 1)) {
        *(undefined4 *)(uVar8 * 8 + -0xd0e4) = uVar3;
        DAT_ffff2f14 = (byte)uVar7 | 0x80;
        *(undefined1 *)(uVar8 - 0xd0f4) = 0;
        if (*(char *)(uVar8 - 0xd0bf) == '\x01') {
          DAT_ffff2f40 = DAT_ffff2f40 | 0x80;
        }
        else {
          DAT_ffff2f40 = DAT_ffff2f40 & 0x7f;
        }
        DAT_ffff2f38 = cVar6;
        *(undefined1 *)(uVar8 - 0xd0bf) = 0;
        uVar4 = FUN_0006f6b8(5);
      }
      uVar7 = uVar8 + 1;
    }
  }
  return uVar4;
}

