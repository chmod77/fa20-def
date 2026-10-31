
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012614c(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_5c;
  byte abStack_58 [4];
  byte abStack_54 [4];
  byte abStack_50 [4];
  char cStack_4c;
  char cStack_48;
  char cStack_44;
  char cStack_40;
  char cStack_3c;
  char cStack_38;
  char cStack_34;
  char cStack_30;
  char cStack_2c;
  uint uStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff0782;
  cStack_4c = '\x01' - ((DAT_ffff0786 & 0x40) == 0);
  cStack_48 = '\x01' - ((DAT_ffff0792 & 2) == 0);
  cStack_44 = '\x01' - ((DAT_ffff0791 & 4) == 0);
  cStack_40 = '\x01' - ((DAT_ffff0791 & 8) == 0);
  cStack_3c = '\x01' - ((DAT_ffff0786 & 0x10) == 0);
  cStack_38 = '\x01' - ((DAT_ffff078a & 4) == 0);
  cStack_34 = '\x01' - (((int)DAT_ffff0798 & 0x80U) == 0);
  cStack_30 = '\x01' - ((DAT_ffff0790 & 4) == 0);
  cStack_2c = '\x01' - ((DAT_ffff0799 & 8) == 0);
  uStack_28 = (uint)((DAT_ffff0784 & 8) != 0);
  FUN_00126704(DAT_fffef316 & 1);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0959 | 0x10;
  if ((local_5c & 1) == 0) {
    bVar2 = DAT_ffff0959 & 0xef;
  }
  DAT_ffff0959 = bVar2;
  FUN_00001550();
  FUN_00126994(((int)(char)DAT_ffff0787 & 0x80U) != 0,((int)DAT_ffff0788 & 0x80U) != 0,
               (DAT_ffff0787 & 0x40) != 0,(DAT_ffff0959 & 0x10) != 0,abStack_58);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff0959 | 0x20;
  if ((abStack_58[0] & 1) == 0) {
    bVar2 = DAT_ffff0959 & 0xdf;
  }
  DAT_ffff0959 = bVar2;
  FUN_00001550();
  FUN_00126950((DAT_ffff0790 & 0x40) != 0,(DAT_ffff0959 & 0x20) != 0,(int)_DAT_ffff12b4,abStack_54);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff095c | 2;
  if ((abStack_54[0] & 1) == 0) {
    bVar2 = DAT_ffff095c & 0xfd;
  }
  DAT_ffff095c = bVar2;
  FUN_00001550();
  FUN_00126670((DAT_fffef3ea & 0x40) != 0,(DAT_fffef316 & 2) != 0,(DAT_ffff095c & 2) != 0,abStack_50
              );
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff095b | 1;
  if ((abStack_50[0] & 1) == 0) {
    bVar2 = DAT_ffff095b & 0xfe;
  }
  DAT_ffff095b = bVar2;
  FUN_00001550(uVar1);
  return;
}

