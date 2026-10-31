
/* WARNING: Removing unreachable block (ram,0x0010be24) */

void FUN_0010bdf4(uint param_1,undefined1 *param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)__udiv32_r1_by_r0((param_1 & 0xff) * 0x1fe,0x72);
  if (&DAT_0000ffff < puVar1) {
    puVar1 = &DAT_0000ffff;
  }
  if (((uint)puVar1 & 0xffff) < 0x100) {
    if (0xff < ((uint)puVar1 & 0xffff)) {
      puVar1 = &UNK_000000ff;
    }
    *param_2 = (char)puVar1;
  }
  else {
    *param_2 = 0xff;
  }
  return;
}

