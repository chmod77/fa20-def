
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b9bac(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  byte abStack_5c [4];
  undefined1 local_58 [4];
  char local_54 [4];
  char local_50 [4];
  byte abStack_4c [4];
  char local_48 [4];
  undefined1 local_44 [4];
  byte local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 *local_24;
  
  local_24 = &DAT_ffff0499;
  FUN_000b8750((int)DAT_fffeef33,local_64);
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xf206) = local_64[uVar4];
  }
  FUN_000b8f78((int)DAT_ffff66b0,&DAT_ffff0e02);
  FUN_000b9a7c((int)DAT_fffeef33,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)DAT_ffff66b0,
               (int)_DAT_ffff11ce,(int)_DAT_ffff11d4,local_60);
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xf1f2) = local_60[uVar4];
  }
  FUN_000ba504((int)DAT_ffff0499,abStack_5c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0519 | 0x20;
  if ((abStack_5c[0] & 1) == 0) {
    bVar2 = DAT_ffff0519 & 0xdf;
  }
  DAT_ffff0519 = bVar2;
  FUN_00001550(uVar1);
  FUN_000b8320(0xffff38fc,0xffff38fe,local_58);
  for (uVar4 = 0; uVar5 = 0, (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xf20a) = local_58[uVar4];
  }
  for (; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    local_54[uVar5] = '\x01' - ((*(byte *)(uVar5 - 0xc6fe) & 0x10) == 0);
  }
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    local_50[uVar4] = '\x01' - ((*(byte *)(uVar4 - 0xc6f4) & 0x10) == 0);
  }
  FUN_000ba42c((int)_DAT_ffff0e02,(int)v_Coolant_Temperature_29A5,(int)DAT_ffffab41,local_54,
               (DAT_ffff0519 & 0x20) != 0,local_50,1,DAT_ffff66b0,abStack_4c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0519 | 0x80;
  if ((abStack_4c[0] & 1) == 0) {
    bVar2 = DAT_ffff0519 & 0x7f;
  }
  DAT_ffff0519 = bVar2;
  FUN_00001550(uVar1);
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    local_48[uVar4] = '\x01' - (((int)*(char *)(uVar4 - 0xf1f0) & 0x80U) == 0);
  }
  FUN_000b9908(local_48,0xffff0df6,0xffff3900,local_44);
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xc700) = local_44[uVar4];
  }
  FUN_000ba548(0xffff3900,(int)_DAT_fffef2ac,(int)_DAT_fffef2ae,(int)_DAT_ffff11c0,
               (int)_DAT_ffff11c4,local_40);
  FUN_00001550(0xf0);
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    bVar2 = *(byte *)(uVar4 - 0xf1f0);
    bVar3 = bVar2 | 0x80;
    if ((local_40[uVar4] & 1) == 0) {
      bVar3 = bVar2 & 0x7f;
    }
    *(byte *)(uVar4 - 0xf1f0) = bVar3;
  }
  FUN_00001550();
  FUN_000b8f9c(((int)(char)DAT_ffff0519 & 0x80U) != 0,0xffff0e0e,0xffff0dfa,0xffff0e00,
               (int)_DAT_ffff11c0,(int)_DAT_ffff11c4,(int)_DAT_fffef2ac,(int)_DAT_fffef2ae,
               _DAT_ffff11e8,_DAT_ffff11f6,(DAT_ffff076d & 8) != 0,0xffff38fc,0xffff38fe,local_3c);
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xf1fc) = local_3c[uVar4];
  }
  FUN_000b8784(0xffff38fc,0xffff0e04,0xffff0df6,0xffff38fe,local_38);
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xc704) = local_38[uVar4];
  }
  FUN_000b8990(0xffff0e04,0xffff0df6,0xffff38fe,0xffff38fc,local_34);
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xc702) = local_34[uVar4];
  }
  FUN_000b9718((int)_v_Engine_Speed_2994,(int)DAT_fffeef33,0xffff38fc,0xffff38fe,0xffff3900,
               0xffff0e0e,(int)_DAT_ffff11ce,(int)_DAT_ffff11d4,local_28,local_2c,local_30);
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xf1f8) = local_28[uVar4];
  }
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xf1f6) = local_2c[uVar4];
  }
  for (uVar4 = 0; (uVar4 & 0xff) < 2; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined1 *)(uVar4 - 0xf1f4) = local_30[uVar4];
  }
  return;
}

