
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00059484(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  short sVar6;
  short sVar7;
  undefined4 uVar5;
  
  uVar2 = _DAT_fffef290;
  uVar1 = _DAT_fffef286;
  if ((DAT_fffeeec1 & 1) == 0) {
    iVar3 = __udiv32_r1_by_r0((int)_DAT_ffff1664 << 0x10,0x708);
    _DAT_fffef28c = FUN_00001540(iVar3);
    iVar4 = __udiv32_r1_by_r0((int)_DAT_ffff1666 << 0x10,0x708);
    _DAT_fffef296 = FUN_00001540(iVar4);
    sVar6 = FUN_0016b14c(&PTR_DAT_00163b30,(int)_DAT_fffeeede);
    sVar7 = FUN_0016b14c(&PTR_DAT_00163b48,(int)_v_Engine_Speed_OBD_copy_2ADA);
    uVar5 = FUN_0016b624((int)sVar7 + iVar3 + sVar6,0);
    _DAT_fffef284 = FUN_0016bd6c(uVar5,0xeb61);
    sVar6 = FUN_0016b14c(&PTR_DAT_00163b3c,(int)_DAT_fffeeede);
    sVar7 = FUN_0016b14c(&PTR_DAT_00163b54,(int)_v_Engine_Speed_OBD_copy_2ADA);
    uVar5 = FUN_0016b624((int)sVar7 + iVar4 + sVar6,0);
    _DAT_fffef28e = FUN_0016bd6c(uVar5,0xeb61);
    _DAT_fffef288 = FUN_0016b4d8(&DAT_fffef288,(int)_DAT_fffef284,0xffff8000);
    _DAT_fffef292 = FUN_0016b4d8(&DAT_fffef292,(int)_DAT_fffef28e,0xffff8000);
    _DAT_fffef286 = FUN_0016b4d8(&DAT_fffef286,(int)(short)_DAT_fffef288,0xfffff000);
    _DAT_fffef290 = FUN_0016b4d8(&DAT_fffef290,(int)(short)_DAT_fffef292,0xfffff000);
    uVar5 = FUN_0016b624((uint)_DAT_fffef288 - (uint)uVar1,0xffffce39);
    _DAT_fffef28a = FUN_0016bd6c(uVar5,0x31c7);
    uVar5 = FUN_0016b624((uint)_DAT_fffef292 - (uint)uVar2,0xffffce39);
    _DAT_fffef294 = FUN_0016bd6c(uVar5,0x31c7);
  }
  else {
    _DAT_fffef284 = 0;
    _DAT_fffef286 = 0;
    _DAT_fffef288 = 0;
    _DAT_fffef28a = 0;
    _DAT_fffef28c = 0;
    _DAT_fffef28e = 0;
    _DAT_fffef290 = 0;
    _DAT_fffef292 = 0;
    _DAT_fffef294 = 0;
    _DAT_fffef296 = 0;
  }
  return;
}

