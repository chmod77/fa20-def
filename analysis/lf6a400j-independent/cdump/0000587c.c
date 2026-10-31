
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0000587c(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  _DAT_ffff8b14 = 0;
  _DAT_ffff8b20 = 0;
  _DAT_ffffd000 = 0;
  for (uVar3 = 0; (uVar3 & 0xff) < 0x20; uVar3 = (uVar3 & 0xff) + 1) {
    iVar2 = (uVar3 & 0xff) * 0x20;
    *(undefined2 *)(iVar2 + -0x2f00) = 0;
    *(undefined2 *)(iVar2 + -0x2efe) = 0;
    *(undefined2 *)(iVar2 + -0x2efc) = 0;
    *(undefined2 *)(iVar2 + -0x2efa) = 0;
    *(undefined1 *)(iVar2 + -0x2ef8) = 0;
    *(undefined1 *)(iVar2 + -0x2ef7) = 0;
    *(undefined1 *)(iVar2 + -0x2ef6) = 0;
    *(undefined1 *)(iVar2 + -0x2ef5) = 0;
    *(undefined1 *)(iVar2 + -0x2ef4) = 0;
    *(undefined1 *)(iVar2 + -0x2ef3) = 0;
    *(undefined1 *)(iVar2 + -0x2ef2) = 0;
    *(undefined1 *)(iVar2 + -0x2ef1) = 0;
    *(undefined2 *)(iVar2 + -0x2ef0) = 0;
    *(undefined2 *)(iVar2 + -0x2eee) = 0;
  }
  _DAT_ffffd008 = 1;
  DAT_ffff8b0f = FUN_00005614();
  bVar1 = DAT_ffff8b0f == '\0';
  do {
  } while ((_DAT_ffffd002 & 8) != 0);
  if (bVar1) {
    DAT_ffff8aec = DAT_ffff8aec | 0x80;
    _DAT_ffffd00a = _DAT_ffffd00a & 0xfe9d;
    FUN_00005d10();
  }
  else {
    DAT_ffff8aec = DAT_ffff8aec & 0x7f;
  }
  return bVar1;
}

