
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c7bcc(void)

{
  byte bVar2;
  undefined4 uVar1;
  byte local_48 [4];
  byte abStack_44 [4];
  byte abStack_40 [4];
  byte abStack_3c [4];
  byte abStack_38 [4];
  byte abStack_34 [4];
  byte abStack_30 [4];
  byte abStack_2c [4];
  char cStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_fffef2f0;
  FUN_000c26e8((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_fffee675,
               (int)DAT_fffee66f,_DAT_fffef086,&DAT_ffff0ea2);
  FUN_000c3364((DAT_fffef310 & 0x10) != 0,(DAT_fffef310 & 8) != 0,(DAT_fffef081 & 0x10) != 0,
               (DAT_fffef081 & 0x20) != 0,(DAT_fffef081 & 0x40) != 0,
               ((int)(char)DAT_fffef081 & 0x80U) != 0,DAT_fffee674,DAT_fffee66e,&DAT_ffff0554);
  cStack_28 = '\x01' - (((int)(char)DAT_fffef404 & 0x80U) == 0);
  FUN_000c4814((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_fffee666,
               (int)DAT_fffee66e,cStack_28,(DAT_fffef404 & 0x40) != 0,(DAT_fffef404 & 0x20) != 0,
               (DAT_fffef404 & 0x10) != 0,(DAT_fffef404 & 8) != 0,(DAT_fffef404 & 4) != 0,
               (DAT_fffef404 & 2) != 0,DAT_fffef404 & 1,(DAT_fffef403 & 2) != 0,DAT_fffef403 & 1,
               _DAT_fffef2f0,_DAT_fffef308,&DAT_ffff0ede);
  FUN_000c8f00((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_fffee673,
               (int)DAT_fffee66c,DAT_fffef07b & 1,_DAT_fffef07c,&DAT_ffff0efa);
  FUN_000c9af8((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_fffee674,
               (int)DAT_fffee66e,(DAT_fffef07f & 0x20) != 0,(DAT_fffef07f & 0x40) != 0,
               ((int)(char)DAT_fffef07f & 0x80U) != 0,&DAT_ffff0588);
  FUN_000cc6a4((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(DAT_fffef07f & 2) != 0,
               (int)DAT_fffee674,DAT_fffee66e,abStack_44,local_48);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff056f | 4;
  if ((abStack_44[0] & 1) == 0) {
    bVar2 = DAT_ffff056f & 0xfb;
  }
  DAT_ffff056f = bVar2 | 8;
  if ((local_48[0] & 1) == 0) {
    DAT_ffff056f = bVar2 & 0xf7;
  }
  FUN_00001550();
  FUN_000cc7bc((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,DAT_fffef07f & 1,
               (DAT_ffff056f & 0x20) != 0,DAT_fffee674,DAT_fffee66e,abStack_40);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff056f | 0x10;
  if ((abStack_40[0] & 1) == 0) {
    bVar2 = DAT_ffff056f & 0xef;
  }
  DAT_ffff056f = bVar2;
  FUN_00001550();
  FUN_000ccaf0((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(DAT_fffef085 & 0x10) != 0,
               (int)DAT_fffee675,DAT_fffee66f,abStack_38,abStack_3c);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff056f | 0x40;
  if ((abStack_38[0] & 1) == 0) {
    bVar2 = DAT_ffff056f & 0xbf;
  }
  DAT_ffff056f = bVar2 | 0x80;
  if ((abStack_3c[0] & 1) == 0) {
    DAT_ffff056f = bVar2 & 0x7f;
  }
  FUN_00001550();
  FUN_000cc8a8((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_fffee674,
               (int)DAT_fffee66e,abStack_34);
  FUN_00001550(0xf0);
  bVar2 = DAT_ffff056f | 0x20;
  if ((abStack_34[0] & 1) == 0) {
    bVar2 = DAT_ffff056f & 0xdf;
  }
  DAT_ffff056f = bVar2;
  FUN_00001550();
  FUN_000ccd94((DAT_fffef310 & 8) != 0,(DAT_fffef310 & 0x10) != 0,(int)DAT_ffff0554,
               (int)DAT_fffee674,DAT_fffee66e,abStack_2c,abStack_30);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff056f | 1;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff056f & 0xfe;
  }
  DAT_ffff056f = bVar2 | 2;
  if ((abStack_30[0] & 1) == 0) {
    DAT_ffff056f = bVar2 & 0xfd;
  }
  FUN_00001550(uVar1);
  return;
}

