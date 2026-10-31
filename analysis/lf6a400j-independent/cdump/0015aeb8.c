
/* WARNING: Removing unreachable block (ram,0x0015af04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015aeb8(void)

{
  short sVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  sVar1 = _DAT_fffff4e0;
  uVar2 = FUN_00001550(0xf0);
  _DAT_fffff480 = _DAT_fffff480 & 0xf7ff;
  _DAT_fffff4e4 = sVar1 + 2;
  DAT_fffff4eb = DAT_fffff4eb & 0x8f | 0x10;
  FUN_00001550(uVar2);
  if ((_DAT_fffff480 & 0x800) != 0x800) {
    do {
    } while( true );
  }
  uVar3 = FUN_00001550(0xf0);
  _DAT_fffff722 = _DAT_fffff722 | 0x400;
  _DAT_fffff480 = _DAT_fffff480 & 0xf7ff;
  _DAT_fffff482 = _DAT_fffff482 | 0x800;
  FUN_0015af60(0,_DAT_fffff4e0 + 1,1);
  FUN_00001550(uVar3);
  return;
}

