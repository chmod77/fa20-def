
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d7d20(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_30 [4];
  byte abStack_2c [4];
  byte abStack_28 [4];
  undefined1 *local_24;
  
  local_24 = &DAT_fffeeec6;
  FUN_000d8128((int)_DAT_ffff0b46,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)DAT_ffff0404,
               (int)_DAT_ffff0bc8,&DAT_ffff0fde,&DAT_ffff0fe0);
  FUN_000d83e0((int)_DAT_fffeeee0,(int)_DAT_fffeef12,(DAT_fffee710 & 0x20) != 0,(int)_DAT_fffeeede,
               DAT_fffeef33,_DAT_fffeeee2,v_Vehicle_Speed_byte_65A1,(DAT_ffff0000 & 2) != 0,local_30
              );
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0675 | 8;
  if ((local_30[0] & 1) == 0) {
    bVar2 = DAT_ffff0675 & 0xf7;
  }
  DAT_ffff0675 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d8038();
  FUN_000d7ef4((DAT_ffff0000 & 2) != 0,(DAT_fffee710 & 0x20) != 0,
               ((int)(char)DAT_ffff66b1 & 0x80U) != 0,DAT_fffeeec6 & 1,(DAT_ffff66b1 & 0x40) != 0,
               DAT_ffff091f & 1,((int)DAT_fffef054 & 0x80U) != 0,(DAT_fffeef76 & 8) != 0,
               DAT_fffeef73,_v_Control_Module_Voltage_EF18,_DAT_fffeef10,(DAT_ffff056e & 2) != 0,
               DAT_ffff0678,(DAT_ffff0675 & 8) != 0,&DAT_ffff0676,&DAT_ffff0677);
  FUN_000d8224((int)DAT_ffff0676,abStack_2c);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0675 | 0x40;
  if ((abStack_2c[0] & 1) == 0) {
    bVar2 = DAT_ffff0675 & 0xbf;
  }
  DAT_ffff0675 = bVar2;
  FUN_00001550(uVar1);
  FUN_000d8238((int)DAT_ffff0676,abStack_28);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff0675 | 0x80;
  if ((abStack_28[0] & 1) == 0) {
    bVar2 = DAT_ffff0675 & 0x7f;
  }
  DAT_ffff0675 = bVar2;
  FUN_00001550(uVar1);
  return;
}

