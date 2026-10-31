
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006a6d4(void)

{
  byte bVar1;
  undefined2 uVar3;
  undefined4 uVar2;
  byte bVar4;
  uint uVar5;
  
  if ((DAT_fffee706 & 8) == 0) {
    DAT_fffee70e = DAT_fffee70e & 0xfd;
  }
  else {
    DAT_fffee70e = DAT_fffee70e | 2;
  }
  if (((DAT_fffef72c & 0x10) == 0) && ((DAT_fffee70e & 2) != 0)) {
    uVar5 = 0;
    uVar3 = 0;
    if ((DAT_fffee70e & 1) != 0) {
      uVar5 = _DAT_fffee708 + _DAT_fffee704;
      if (((_DAT_fffee708 & 0x80000000) != 0) && ((uVar5 & 0x80000000) == 0)) {
        uVar5 = 0xffffffff;
      }
      uVar3 = FUN_00001540((uVar5 >> 8) * 0xd >> 8);
    }
    uVar2 = FUN_00001550(0x70);
    _DAT_fffee708 = uVar5;
    _DAT_fffee70c = uVar3;
    FUN_00001550(uVar2);
  }
  bVar4 = DAT_fffee70e & 0xfe;
  bVar1 = DAT_fffee70e & 2;
  DAT_fffee70e = bVar4;
  if (bVar1 != 0) {
    DAT_fffee70e = bVar4 | 1;
  }
  return;
}

