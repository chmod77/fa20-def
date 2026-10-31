
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000679ac(void)

{
  bool bVar1;
  ushort uVar2;
  
  uVar2 = _DAT_fffef6e8 & 0xff;
  bVar1 = false;
  if (DAT_ffffabc7 == '\x01') {
    if (uVar2 == 0) {
      FUN_00067a2c(300,0);
      goto LAB_00067a18;
    }
    if (uVar2 == 0xff) {
      FUN_00067a2c(0,300);
      goto LAB_00067a18;
    }
    if (uVar2 == 0x80) {
      FUN_00067a2c(0,0);
      goto LAB_00067a18;
    }
  }
  else if ((DAT_ffffabc7 == '\x02') && (uVar2 == 0)) {
    FUN_00067a2c(300,0,1);
    goto LAB_00067a18;
  }
  bVar1 = true;
LAB_00067a18:
  if (bVar1) {
    FUN_00063612();
    return;
  }
  return;
}

