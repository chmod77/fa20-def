
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000c0fd0(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  byte local_74;
  byte bStack_70;
  byte bStack_6c;
  byte abStack_68 [4];
  byte abStack_64 [4];
  byte bStack_60;
  byte abStack_5c [4];
  byte bStack_58;
  byte abStack_54 [4];
  byte bStack_50;
  byte abStack_4c [4];
  byte bStack_48;
  byte bStack_44;
  byte bStack_40;
  byte abStack_3c [4];
  byte abStack_38 [4];
  undefined1 *puStack_34;
  char cStack_30;
  char cStack_2c;
  char cStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_fffeed74;
  puStack_34 = &DAT_ffff0e7a;
  FUN_000c0670((DAT_ffff054c & 0x20) != 0,((int)DAT_fffee710 & 0x80U) != 0,
               (DAT_fffeef76 & 0x40) != 0,&DAT_ffff0e7a);
  FUN_000c0834((int)DAT_ffff054d,&DAT_ffff0e84);
  FUN_000c0890((int)DAT_ffff054d);
  FUN_000c2144(DAT_fffeeec6 & 1,((int)DAT_fffef32b & 0x80U) != 0,DAT_ffff03ca & 1,(int)_DAT_fffeecae
              );
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff054c | 0x80;
  if ((local_74 & 1) == 0) {
    bVar3 = DAT_ffff054c & 0x7f;
  }
  DAT_ffff054c = bVar3;
  FUN_00001550(uVar2);
  FUN_000c24bc((int)_DAT_fffeef3c,(int)_DAT_fffeef3a,(int)_DAT_ffff2f98,(int)_DAT_ffff2f94);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff054b | 0x80;
  if ((bStack_70 & 1) == 0) {
    bVar3 = DAT_ffff054b & 0x7f;
  }
  DAT_ffff054b = bVar3;
  FUN_00001550(uVar2);
  FUN_000c2524((int)_DAT_fffeef3c,(int)_DAT_fffeef3a,(int)_DAT_ffff2f96,(int)_DAT_ffff2f92);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff054b | 0x40;
  if ((bStack_6c & 1) == 0) {
    bVar3 = DAT_ffff054b & 0xbf;
  }
  DAT_ffff054b = bVar3;
  FUN_00001550(uVar2);
  (*(code *)&SUB_000c25b4)((int)_DAT_ffff0e7c,abStack_68);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff054c | 0x10;
  if ((abStack_68[0] & 1) == 0) {
    bVar3 = DAT_ffff054c & 0xef;
  }
  DAT_ffff054c = bVar3;
  FUN_00001550(uVar2);
  FUN_000c25cc((int)DAT_ffff054d,abStack_64);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff054c | 4;
  if ((abStack_64[0] & 1) == 0) {
    bVar3 = DAT_ffff054c & 0xfb;
  }
  DAT_ffff054c = bVar3;
  FUN_00001550(uVar2);
  FUN_000c2680((int)_DAT_fffeef3c,(int)_DAT_fffeef3a,(int)_DAT_ffff2f98,(int)_DAT_ffff2f94);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff054b | 0x20;
  if ((bStack_60 & 1) == 0) {
    bVar3 = DAT_ffff054b & 0xdf;
  }
  DAT_ffff054b = bVar3;
  FUN_00001550(uVar2);
  FUN_000c22b8((int)DAT_ffff054d,abStack_5c);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff054a | 0x40;
  if ((abStack_5c[0] & 1) == 0) {
    bVar3 = DAT_ffff054a & 0xbf;
  }
  DAT_ffff054a = bVar3;
  FUN_00001550();
  FUN_000c236c((DAT_fffeeec2 & 2) != 0,DAT_fffeeec6 & 1,(int)DAT_ffff0541);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff054a | 4;
  if ((bStack_58 & 1) == 0) {
    bVar3 = DAT_ffff054a & 0xfb;
  }
  DAT_ffff054a = bVar3;
  FUN_00001550(uVar2);
  FUN_000c241c((int)DAT_ffff054d,abStack_54);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff054a | 0x20;
  if ((abStack_54[0] & 1) == 0) {
    bVar3 = DAT_ffff054a & 0xdf;
  }
  DAT_ffff054a = bVar3;
  FUN_00001550(uVar2);
  FUN_000c07dc((int)_DAT_ffff0e86,(int)_DAT_ffff0e84,puStack_34 + 8);
  FUN_000c0ab0((DAT_fffeeec2 & 2) != 0,(DAT_ffff054a & 0x20) != 0,(DAT_fffef32c & 8) != 0);
  FUN_000c1ddc((int)_DAT_fffeeede,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)_DAT_ffff0a76,
               (int)_DAT_ffff0f56);
  FUN_000c2314((DAT_ffff054a & 0x20) != 0,(DAT_fffeeec2 & 2) != 0,(int)DAT_ffff054d);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff054a | 2;
  if ((bStack_50 & 1) == 0) {
    bVar3 = DAT_ffff054a & 0xfd;
  }
  DAT_ffff054a = bVar3;
  FUN_00001550(uVar2);
  FUN_000c0934();
  FUN_000c0974((DAT_fffeeec2 & 2) != 0,(DAT_ffff054a & 0x20) != 0);
  FUN_000c2588((int)DAT_ffff0550,abStack_4c);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff054b | 8;
  if ((abStack_4c[0] & 1) == 0) {
    bVar3 = DAT_ffff054b & 0xf7;
  }
  DAT_ffff054b = bVar3;
  FUN_00001550();
  cStack_30 = '\x01' - ((DAT_ffff054a & 0x20) == 0);
  cStack_2c = '\x01' - ((DAT_ffff054a & 0x10) == 0);
  cStack_28 = '\x01' - ((DAT_fffef32c & 4) == 0);
  FUN_000c1880((DAT_fffeeec2 & 2) != 0,DAT_fffeeec6 & 1,(DAT_ffff054a & 4) != 0,(int)cStack_30);
  FUN_000c244c((int)_DAT_ffff0e8a);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff054c | 0x20;
  if ((bStack_48 & 1) == 0) {
    bVar3 = DAT_ffff054c & 0xdf;
  }
  DAT_ffff054c = bVar3;
  FUN_00001550(uVar2);
  FUN_000c2604((int)DAT_ffff054d,(DAT_fffeeec2 & 2) != 0,(DAT_ffff054a & 0x20) != 0,
               (DAT_fffef32c & 4) != 0);
  FUN_00001550(0xf0);
  bVar3 = DAT_ffff054c | 2;
  if ((bStack_44 & 1) == 0) {
    bVar3 = DAT_ffff054c & 0xfd;
  }
  DAT_ffff054c = bVar3;
  FUN_00001550();
  FUN_000c08f0((DAT_ffff054c & 0x20) != 0,puStack_34 + 0xe);
  FUN_000c0be4((int)_DAT_ffff0f56,(int)DAT_ffff054d);
  FUN_000c2240(DAT_fffef3fc & 1,DAT_fffef32a & 1,(DAT_fffef32a & 2) != 0,(DAT_fffeef76 & 0x40) != 0)
  ;
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff054a | 0x10;
  if ((bStack_40 & 1) == 0) {
    bVar3 = DAT_ffff054a & 0xef;
  }
  DAT_ffff054a = bVar3;
  FUN_00001550(uVar2);
  FUN_000c22f8((int)DAT_ffff054d,abStack_3c);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff054a | 1;
  if ((abStack_3c[0] & 1) == 0) {
    bVar3 = DAT_ffff054a & 0xfe;
  }
  DAT_ffff054a = bVar3;
  FUN_00001550(uVar2);
  FUN_000c23dc((int)DAT_ffff054d,abStack_38);
  uVar2 = FUN_00001550(0xf0);
  bVar3 = DAT_ffff054a | 0x80;
  if ((abStack_38[0] & 1) == 0) {
    bVar3 = DAT_ffff054a & 0x7f;
  }
  DAT_ffff054a = bVar3;
  FUN_00001550(uVar2);
  puVar1 = puStack_34;
  FUN_000c0e3c((DAT_fffef32c & 0x20) != 0,(DAT_ffff054a & 0x10) != 0,(int)_DAT_fffeef3c,
               (int)_DAT_fffeef3a);
  puStack_34 = puVar1 + 0x1c;
  FUN_000c1d74((int)DAT_ffff0545,(int)_DAT_fffeeede,(int)DAT_ffffab41,(DAT_ffff054c & 2) != 0);
  return;
}

