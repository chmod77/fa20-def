
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013b3e4(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  
  _DAT_ffff66c2 = _DAT_fffff442;
  pcVar3 = (code *)&SUB_fffea000;
  for (pcVar5 = (code *)&DAT_00004de8; pcVar5 < FUN_00005008; pcVar5 = pcVar5 + 1) {
    *pcVar3 = *pcVar5;
    pcVar3 = pcVar3 + 1;
  }
  (*(code *)&SUB_fffea000)();
  _DAT_ffff65ac = &DAT_ffff0000;
  _DAT_ffff65a8 = *(int *)(&DAT_00004da4 + (uint)DAT_ffff65a4 * 8);
  for (uVar6 = 0; uVar6 < 0x20; uVar6 = uVar6 + 1) {
    puVar2 = _DAT_ffff65ac;
    for (uVar4 = 0; uVar4 < 0x80; uVar4 = uVar4 + 1) {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
      *(undefined1 *)(uVar4 - 0x9a50) = uVar1;
    }
    (*(code *)&SUB_fffea0a8)();
    _DAT_ffff65a8 = _DAT_ffff65a8 + 0x80;
    _DAT_ffff65ac = _DAT_ffff65ac + 0x80;
  }
  return;
}

