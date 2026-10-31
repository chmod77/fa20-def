
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005036c(void)

{
  ushort uVar1;
  uint uVar2;
  byte bVar6;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  uint uVar7;
  int iVar8;
  
  uVar1 = _v_Engine_Speed_OBD_copy_2ADA;
  iVar8 = (int)(short)_v_Engine_Speed_OBD_copy_2ADA;
  uVar2 = FUN_00052b4a(&PTR_DAT_00163a90,(int)_DAT_fffeeee0);
  bVar6 = FUN_0016ba80(&PTR_DAT_00163a9c,(int)(short)_DAT_fffeeede);
  uVar3 = FUN_00052b4a(&PTR_DAT_00163aa8,iVar8);
  sVar4 = FUN_0016bbc4(&PTR_DAT_00163ab4,(int)DAT_ffff29a7);
  uVar5 = FUN_0016bc08(&PTR_DAT_00163ac0,(int)(short)_DAT_fffeeede);
  uVar7 = (uint)_DAT_ffff0d06;
  if (0x1e00 < _DAT_ffff0c70) {
    DAT_fffef63c = DAT_fffef63c | 1;
  }
  if ((200 < _DAT_fffeef10) && (uVar5 <= _DAT_ffff0ffa)) {
    DAT_fffef5c7 = FUN_0000152c(DAT_fffef5c7 + 1);
  }
  if (1 < DAT_fffef5c7) {
    DAT_fffef63c = DAT_fffef63c | 2;
  }
  if (((0xb800 < _DAT_fffeeede) || (uVar2 <= _DAT_ffff166c)) ||
     ((((DAT_fffef152 & 0x20) != 0 &&
       (((((bVar6 < DAT_ffff03a0 || (uVar3 < _DAT_fffeecb0)) || (sVar4 < _DAT_fffeeed2)) ||
         (((int)(uint)uVar1 < (int)(uVar7 - 0x8000) ||
          ((0x1a00 < _DAT_ffff0c70 && (99 < _DAT_fffef5ce)))))) || ((DAT_fffef63c & 1) != 0)))) &&
      ((DAT_fffef63c & 2) != 0)))) {
    DAT_fffef3b8 = DAT_fffef3b8 & 0xfd;
  }
  if (_DAT_ffff0c70 < 0x1a01) {
    _DAT_fffef5ce = 0;
  }
  else {
    _DAT_fffef5ce = FUN_00001540(_DAT_fffef5ce + 1);
  }
  return;
}

