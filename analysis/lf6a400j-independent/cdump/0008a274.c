
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008a274(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte local_10 [8];
  
  FUN_00093218((int)_v_Engine_Speed_2994,(int)_DAT_fffeeede,(int)_DAT_fffeef10,(int)_DAT_fffeeed6,
               (DAT_fffef32a & 2) != 0,DAT_fffef3fc & 1,(DAT_ffff064b & 8) != 0,local_10);
  uVar1 = FUN_00001550(0xf0);
  bVar2 = DAT_ffff03df | 2;
  if ((local_10[0] & 1) == 0) {
    bVar2 = DAT_ffff03df & 0xfd;
  }
  DAT_ffff03df = bVar2;
  FUN_00001550(uVar1);
  FUN_0008cbe4((int)_v_Engine_Speed_2994,(int)_DAT_fffeeede,(DAT_ffff03df & 2) != 0,
               (int)DAT_ffff03a0,&DAT_ffff0b42);
  return;
}

