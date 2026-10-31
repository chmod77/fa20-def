
undefined4 FUN_00144504(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_0016bd40((int)DAT_ffff2b65,0x10);
  iVar3 = (uVar1 & 0xff) * 4;
  if ((DAT_ffff1a59 == '\0') || (DAT_ffff1a59 == '\x02')) {
    uVar2 = *(undefined4 *)(&DAT_00161fc0 + iVar3);
  }
  else {
    uVar2 = *(undefined4 *)(&DAT_00162004 + iVar3);
  }
  return uVar2;
}

