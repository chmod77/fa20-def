
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00058d0a(void)

{
  ushort uVar1;
  ushort uVar2;
  short sVar5;
  short sVar6;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar7;
  undefined *puVar8;
  
  uVar2 = _DAT_fffef2a4;
  uVar1 = _DAT_fffef29a;
  if ((DAT_fffeeec1 & 1) == 0) {
    _DAT_fffef2a0 = _DAT_ffff1668;
    _DAT_fffef2aa = _DAT_ffff166a;
    sVar5 = FUN_0016b14c(&PTR_DAT_00163b00,(int)_DAT_fffeeede);
    sVar6 = FUN_0016b14c(&PTR_DAT_00163b18,(int)_v_Engine_Speed_OBD_copy_2ADA);
    puVar7 = (undefined *)(sVar5 * 0x708);
    if ((int)puVar7 < 0) {
      puVar7 = &DAT_0000ffff + (int)puVar7;
    }
    puVar8 = (undefined *)(sVar6 * 0x708);
    if ((int)puVar8 < 0) {
      puVar8 = &DAT_0000ffff + (int)puVar8;
    }
    uVar3 = FUN_0016b624((int)(short)((uint)puVar7 >> 0x10) + (uint)_DAT_ffff1668 +
                         (int)(short)((uint)puVar8 >> 0x10),0);
    _DAT_fffef298 = FUN_0016bd6c(uVar3,0x89e);
    sVar5 = FUN_0016b14c(&PTR_DAT_00163b0c,(int)_DAT_fffeeede);
    sVar6 = FUN_0016b14c(&PTR_DAT_00163b24,(int)_v_Engine_Speed_OBD_copy_2ADA);
    puVar7 = (undefined *)(sVar5 * 0x708);
    if ((int)puVar7 < 0) {
      puVar7 = &DAT_0000ffff + (int)puVar7;
    }
    puVar8 = (undefined *)(sVar6 * 0x708);
    if ((int)puVar8 < 0) {
      puVar8 = &DAT_0000ffff + (int)puVar8;
    }
    uVar3 = FUN_0016b624((int)(short)((uint)puVar7 >> 0x10) + (uint)_DAT_ffff166a +
                         (int)(short)((uint)puVar8 >> 0x10),0);
    _DAT_fffef2a2 = FUN_0016bd6c(uVar3,0x89e);
    _DAT_fffef29c = FUN_0016b4d8(&DAT_fffef29c,(int)_DAT_fffef298,0xffff8000);
    _DAT_fffef2a6 = FUN_0016b4d8(&DAT_fffef2a6,(int)_DAT_fffef2a2,0xffff8000);
    _DAT_fffef29a = FUN_0016b4d8(&DAT_fffef29a,(int)(short)_DAT_fffef29c,0xfffff000);
    _DAT_fffef2a4 = FUN_0016b4d8(&DAT_fffef2a4,(int)(short)_DAT_fffef2a6,0xfffff000);
    if (_DAT_fffef29c < uVar1) {
      iVar4 = __udiv32_r1_by_r0(((uint)uVar1 - (uint)_DAT_fffef29c) * 0x10000,0x708);
      iVar4 = -iVar4;
    }
    else {
      iVar4 = __udiv32_r1_by_r0(((uint)_DAT_fffef29c - (uint)uVar1) * 0x10000,0x708);
    }
    uVar3 = FUN_0016b624(iVar4,0xffffd8e4);
    _DAT_fffef29e = FUN_0016bd6c(uVar3,&DAT_0000271c);
    if (_DAT_fffef2a6 < uVar2) {
      iVar4 = __udiv32_r1_by_r0(((uint)uVar2 - (uint)_DAT_fffef2a6) * 0x10000,0x708);
      iVar4 = -iVar4;
    }
    else {
      iVar4 = __udiv32_r1_by_r0(((uint)_DAT_fffef2a6 - (uint)uVar2) * 0x10000,0x708);
    }
    uVar3 = FUN_0016b624(iVar4,0xffffd8e4);
    _DAT_fffef2a8 = FUN_0016bd6c(uVar3,&DAT_0000271c);
  }
  else {
    _DAT_fffef298 = 0;
    _DAT_fffef29a = 0;
    _DAT_fffef29c = 0;
    _DAT_fffef29e = 0;
    _DAT_fffef2a0 = 0;
    _DAT_fffef2a2 = 0;
    _DAT_fffef2a4 = 0;
    _DAT_fffef2a6 = 0;
    _DAT_fffef2a8 = 0;
    _DAT_fffef2aa = 0;
  }
  return;
}

