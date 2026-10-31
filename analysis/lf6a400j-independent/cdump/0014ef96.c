
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014ef96(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_00001550(0xf0,FUN_00001550);
  DAT_fffff5c6 = DAT_fffff5c6 & 0xf;
  _DAT_fffff5ca = _DAT_fffff5ca & 0xfffd;
  _DAT_fffff5cc = _DAT_fffff5cc & 0xfffd;
  FUN_00001550(uVar1,FUN_00001550);
  DAT_ffff2ca9 = *(byte *)((int)&PTR_DAT_00162a38 + (uint)DAT_ffff2ca6);
  uVar3 = (uint)DAT_ffff2ca9;
  *(undefined2 *)(uVar3 * 2 + -0xd34a) = _DAT_fffff5c4;
  uVar2 = __udiv32_r1_by_r0((uint)DAT_ffff2cbe * (int)&DAT_0000c350,0x30);
  _DAT_ffff2cc0 = FUN_00001540(uVar2 >> 6);
  if (*(char *)(&DAT_00162a28)[uVar3] == '\0') {
    *(undefined1 *)(&DAT_00162a28)[uVar3] = 2;
  }
  else {
    *(undefined1 *)(&DAT_00162a28)[uVar3] = 1;
  }
  return;
}

