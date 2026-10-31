
void FUN_000608b4(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  code *pcVar5;
  byte bVar6;
  
  bVar6 = DAT_fffef3e4;
  if (DAT_ffff312a == '\0') {
    pbVar4 = &DAT_fffef3e3;
    pcVar5 = __sdiv32b_r1_by_r0;
    iVar1 = __sdiv32b_r1_by_r0((uint)DAT_fffef3e3,0x32);
    if (iVar1 == 0) {
      uVar2 = __sdiv32_r1_by_r0((uint)*pbVar4,0x32);
      uVar2 = uVar2 & 0xff;
      uVar3 = (*pcVar5)();
      FUN_00060be2(uVar3,0);
      if (uVar2 == 0) {
        DAT_ffff3028 = 1;
      }
      else if (uVar2 == 1) {
        DAT_ffff3028 = 1;
        DAT_ffff3068 = 2;
      }
      else if ((uVar2 == 2) || (uVar2 == 5)) {
        DAT_ffff3028 = 1;
        DAT_ffff3068 = 2;
        DAT_ffff30a8 = 3;
      }
      else if (uVar2 == 3) {
        DAT_ffff3028 = 3;
        DAT_ffff3068 = 1;
        DAT_ffff30a8 = 2;
      }
      else {
        DAT_ffff3028 = 2;
        DAT_ffff3068 = 3;
        DAT_ffff30a8 = 1;
      }
      bVar6 = 0;
    }
  }
  uVar2 = DAT_fffef3e3 + 1;
  if (0xfa < uVar2) {
    uVar2 = DAT_fffef3e3 - 0x95;
  }
  DAT_fffef3e3 = (byte)uVar2;
  DAT_fffef3e4 = FUN_0000152c(bVar6 + 1);
  return;
}

