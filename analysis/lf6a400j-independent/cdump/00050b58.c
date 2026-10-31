
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00050b58(void)

{
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar1;
  byte bVar5;
  undefined4 uVar2;
  
  uVar3 = FUN_0016bd34(0x600);
  uVar4 = FUN_00001550(0x70);
  uVar1 = FUN_0016b428(uVar3,(int)_v_Engine_Speed_OBD_copy_2ADA,0x400,DAT_fffeeec7 & 1);
  bVar5 = DAT_fffeeec7 | 1;
  if ((uVar1 & 1) == 0) {
    bVar5 = DAT_fffeeec7 & 0xfe;
  }
  DAT_fffeeec7 = bVar5;
  FUN_00001550(uVar4);
  if ((DAT_fffeeec7 & 1) == 0) {
    uVar2 = FUN_00001550(0x70);
    DAT_fffeeec1 = DAT_fffeeec1 & 0xfe;
  }
  else {
    uVar2 = FUN_00001550(0x70);
    DAT_fffeeec1 = DAT_fffeeec1 | 1;
  }
  FUN_00001550(uVar2);
  return;
}

