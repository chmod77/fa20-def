
/* WARNING: Removing unreachable block (ram,0x0005fd5e) */
/* WARNING: Removing unreachable block (ram,0x0005fd8a) */
/* WARNING: Removing unreachable block (ram,0x0005fd44) */
/* WARNING: Removing unreachable block (ram,0x0005fd58) */
/* WARNING: Removing unreachable block (ram,0x0005fd6e) */
/* WARNING: Removing unreachable block (ram,0x0005fd84) */
/* WARNING: Removing unreachable block (ram,0x0005fd74) */
/* WARNING: Removing unreachable block (ram,0x0005fd4a) */

void FUN_000588a4(void)

{
  bool bVar1;
  byte bVar3;
  undefined4 uVar2;
  int iVar4;
  uint uVar5;
  undefined1 uStack_1c;
  
  FUN_000588da();
  FUN_0005fbfe(0xaa);
  FUN_0005fbfe(0xac);
  FUN_00058946();
  FUN_00058990();
  FUN_00058b38();
  FUN_0005fbfe(0x141);
  uVar5 = 0x32f;
  bVar1 = false;
  bVar3 = FUN_0016c834();
  iVar4 = (uVar5 & 0xffff) * 0x18;
  if (((DAT_fffef050 & 1) != 0) || ((bVar3 & 0xc3) == 0)) goto LAB_0005fccc;
  if ((((&DAT_00163dac)[iVar4] & **(byte **)(&DAT_00163da8 + iVar4)) == 0) &&
     (((&DAT_00163dac)[iVar4] & **(byte **)(&DAT_00163da4 + iVar4)) != 0)) {
LAB_0005fcc6:
    uStack_1c = 2;
  }
  else {
    if ((((**(char **)(&DAT_00163db4 + iVar4) != '\0') ||
         (**(char **)(&DAT_00163db0 + iVar4) == '\0')) ||
        (((&DAT_00163dac)[iVar4] & **(byte **)(&DAT_00163da4 + iVar4)) != 0)) &&
       ((((&DAT_00163dac)[iVar4] & **(byte **)(&DAT_00163da8 + iVar4)) == 0 ||
        (((&DAT_00163dac)[iVar4] & **(byte **)(&DAT_00163da4 + iVar4)) != 0)))) {
      if ((((&DAT_00163dac)[iVar4] & **(byte **)(&DAT_00163da4 + iVar4)) == 0) ||
         ((**(char **)(&DAT_00163db8 + iVar4) != '\0' || ((DAT_ffff07db & 1) == 0))))
      goto LAB_0005fccc;
      goto LAB_0005fcc6;
    }
    uStack_1c = 4;
  }
  bVar1 = true;
LAB_0005fccc:
  if (bVar1) {
    uVar2 = FUN_00001550(0xf0);
    if (*(char *)((uint)DAT_fffefa49 * 3 + -0x105b5) == '\0') {
      *(undefined1 *)((uint)DAT_fffefa49 * 3 + -0x105b5) = uStack_1c;
      *(undefined1 *)((uint)DAT_fffefa49 * 3 + -0x105b4) = 0x65;
      *(byte *)((uint)DAT_fffefa49 * 3 + -0x105b3) = bVar3;
      DAT_fffefa49 = DAT_fffefa49 + 1;
    }
    FUN_00001550(uVar2);
  }
  **(byte **)(&DAT_00163da8 + iVar4) = **(byte **)(&DAT_00163da8 + iVar4) & ~(&DAT_00163dac)[iVar4];
  **(byte **)(&DAT_00163da8 + iVar4) =
       **(byte **)(&DAT_00163da8 + iVar4) |
       **(byte **)(&DAT_00163da4 + iVar4) & (&DAT_00163dac)[iVar4];
  **(undefined1 **)(&DAT_00163db4 + iVar4) = **(undefined1 **)(&DAT_00163db0 + iVar4);
  return;
}

