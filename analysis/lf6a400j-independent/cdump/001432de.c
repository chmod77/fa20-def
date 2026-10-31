
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001432de(void)

{
  int iVar1;
  int iVar2;
  
  DAT_ffff2bfd = 0;
  DAT_ffff19fc = DAT_ffff19fc & 0x7f;
  DAT_ffff19fd = DAT_ffff19fd & 0x7f;
  DAT_ffff19fe = DAT_ffff19fe & 0x7f;
  DAT_ffff19ff = DAT_ffff19ff & 0x7f;
  _DAT_ffff1a00 = 0;
  _DAT_ffff1a02 = 0;
  _DAT_ffff1a04 = 0;
  _DAT_ffff1a06 = 0;
  _DAT_ffff1a08 = 0;
  _DAT_ffff1a0c = 0;
  _DAT_ffff1a10 = 0;
  _DAT_ffff1a14 = 0;
  for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
    iVar1 = iVar2 * 2;
    *(undefined2 *)(iVar1 + -0xd430) = 0;
    *(undefined2 *)(iVar1 + -0xd428) = 0;
    *(undefined2 *)(iVar1 + -0xd420) = 0;
    *(undefined2 *)(iVar1 + -0xd418) = 0;
    *(undefined1 *)(iVar2 + -0xd440) = 0;
    *(undefined1 *)(iVar2 + -0xd43c) = 0;
    *(undefined1 *)(iVar2 + -0xd438) = 0;
    *(undefined1 *)(iVar2 + -0xd434) = 0;
    *(undefined2 *)(iVar1 + -0xd410) = 0;
  }
  DAT_ffff2624 = 0;
  DAT_ffff2625 = 0;
  DAT_ffff2626 = 0;
  DAT_ffff2627 = 0;
  return;
}

