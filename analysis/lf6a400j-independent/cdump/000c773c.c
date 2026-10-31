
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000c773c(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte local_14 [4];
  byte abStack_10 [4];
  byte abStack_c [4];
  byte abStack_8 [8];
  
  FUN_000cbb48((DAT_fffeef76 & 8) != 0,(int)DAT_fffef30b,(int)_v_Control_Module_Voltage_EF18,
               (DAT_fffeeec2 & 2) != 0,DAT_fffef3ff & 1,(DAT_fffef3ff & 2) != 0,DAT_fffee677,
               abStack_8,abStack_c,abStack_10,&DAT_ffff055a,&DAT_ffff0558,&DAT_ffff0559,local_14);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff056e | 2;
  if ((abStack_8[0] & 1) == 0) {
    bVar2 = DAT_ffff056e & 0xfd;
  }
  bVar3 = bVar2 | 4;
  if ((abStack_c[0] & 1) == 0) {
    bVar3 = bVar2 & 0xfb;
  }
  bVar2 = bVar3 | 8;
  if ((abStack_10[0] & 1) == 0) {
    bVar2 = bVar3 & 0xf7;
  }
  DAT_ffff056e = bVar2 | 0x10;
  if ((local_14[0] & 1) == 0) {
    DAT_ffff056e = bVar2 & 0xef;
  }
  uVar1 = FUN_00001550(uVar1);
  return uVar1;
}

