
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00060f24(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  
  bVar2 = false;
  bVar1 = false;
  cVar8 = '\0';
  bVar7 = 0;
  for (uVar4 = 0; (uVar4 & 0xff) < 5; uVar4 = (uVar4 & 0xff) + 1) {
    iVar3 = (uVar4 & 0xff) * 0x40;
    if (((((*(short *)(&DAT_ffff2fec + iVar3) != -0x6a89) &&
          (*(short *)(&DAT_ffff2fec + iVar3) != -0x6a8a)) &&
         (*(short *)(&DAT_ffff2fec + iVar3) != -0x6a8b)) &&
        ((((*(short *)(&DAT_ffff2fec + iVar3) != -0x6a8c &&
           (*(short *)(&DAT_ffff2fec + iVar3) != -0x6a88)) &&
          ((*(short *)(&DAT_ffff2fec + iVar3) != -0x6a8e &&
           ((*(short *)(&DAT_ffff2fec + iVar3) != -0x6a8f &&
            (*(short *)(&DAT_ffff2fec + iVar3) != -0x6a90)))))) &&
         (*(short *)(&DAT_ffff2fec + iVar3) != 0x1532)))) &&
       ((((*(short *)(&DAT_ffff2fec + iVar3) != 0x1531 &&
          (*(short *)(&DAT_ffff2fec + iVar3) != 0x1530)) &&
         (*(short *)(&DAT_ffff2fec + iVar3) != 0x517)) &&
        ((*(short *)(&DAT_ffff2fec + iVar3) != 0x516 && (*(short *)(&DAT_ffff2fec + iVar3) != 0)))))
       ) {
      if ((uVar4 & 0xff) == 0) {
        bVar2 = true;
      }
      bVar1 = true;
      (&DAT_ffff2fea)[iVar3] = 0;
      (&DAT_ffff2feb)[iVar3] = 0;
      *(undefined2 *)(&DAT_ffff2fec + iVar3) = 0;
      *(undefined2 *)(&DAT_ffff2fee + iVar3) = 0;
      for (uVar6 = 0; (uVar6 & 0xff) < 0x38; uVar6 = (uVar6 & 0xff) + 1) {
        *(undefined1 *)(iVar3 + -0xd010 + (uVar6 & 0xff)) = 0;
      }
      (&DAT_ffff3028)[iVar3] = 0;
    }
  }
  iVar3 = 0;
  for (bVar5 = 0; bVar5 < 5; bVar5 = bVar5 + 1) {
    if (*(short *)(&DAT_ffff2fec + iVar3) != 0) {
      cVar8 = cVar8 + '\x01';
      bVar7 = bVar5;
    }
    iVar3 = iVar3 + 0x40;
  }
  if (cVar8 == '\0') {
    DAT_ffff312a = 0;
    _DAT_ffff2fc2 = 0;
    _DAT_ffff2fc4 = 0;
    _DAT_ffff2fc6 = 0;
    DAT_fffef3e3 = 0;
    DAT_fffef3e4 = 0;
  }
  else if (bVar1) {
    if (bVar2) {
      DAT_ffff312a = 1;
      _DAT_ffff2fc2 = _DAT_ffff2fc4;
      iVar3 = (uint)bVar7 * 0x40;
      DAT_ffff2fea = (&DAT_ffff2fea)[iVar3];
      DAT_ffff2feb = (&DAT_ffff2feb)[iVar3];
      _DAT_ffff2fec = *(undefined2 *)(&DAT_ffff2fec + iVar3);
      _DAT_ffff2fee = *(undefined2 *)(&DAT_ffff2fee + iVar3);
      for (uVar4 = 0; (uVar4 & 0xff) < 0x38; uVar4 = uVar4 + 1) {
        uVar4 = uVar4 & 0xff;
        *(undefined1 *)(uVar4 - 0xd010) = *(undefined1 *)(iVar3 + -0xd010 + uVar4);
      }
      DAT_ffff3028 = 1;
      _DAT_ffff2fc4 = 0;
      (&DAT_ffff2fea)[iVar3] = 0;
      (&DAT_ffff2feb)[iVar3] = 0;
      *(undefined2 *)(&DAT_ffff2fec + iVar3) = 0;
      *(undefined2 *)(&DAT_ffff2fee + iVar3) = 0;
      for (uVar4 = 0; (uVar4 & 0xff) < 0x38; uVar4 = (uVar4 & 0xff) + 1) {
        *(undefined1 *)(iVar3 + -0xd010 + (uVar4 & 0xff)) = 0;
      }
      (&DAT_ffff3028)[iVar3] = 0;
    }
    else {
      DAT_ffff312a = 1;
      _DAT_ffff2fc4 = 0;
    }
  }
  return;
}

