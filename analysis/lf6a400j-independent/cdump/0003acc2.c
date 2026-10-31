
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003acc2(void)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  byte local_c;
  
  local_c = DAT_ffffab40;
  cVar3 = DAT_ffff66b0;
  if (DAT_ffff66b0 == '\x04') {
    bVar2 = DAT_ffff0000 & 2;
joined_r0x0003acde:
    if (bVar2 == 0) goto LAB_0003ad9a;
LAB_0003ad94:
    cVar3 = '\x01';
  }
  else {
    if (DAT_ffff66b0 == '\x01') {
      if ((DAT_ffff0000 & 2) != 0) {
        if (((DAT_ffff3bb4 == '\0') || ((DAT_fffee6bb & 0x20) != 0)) &&
           ((((DAT_fffeec55 & 1) == 0 && ((DAT_ffff0000 & 1) != 0)) || (DAT_ffff2ac7 != '\0')))) {
          DAT_ffff2983 = 0;
          _DAT_fffeef1c = 0;
          DAT_fffee6ad = DAT_fffee6ad & 0xf7;
          DAT_ffff29d6 = DAT_ffff29d6 | 8;
          cVar3 = '\x02';
        }
        goto LAB_0003ad9a;
      }
    }
    else if (DAT_ffff66b0 == '\x02') {
      if ((DAT_ffff0000 & 2) != 0) {
        if (((DAT_fffeec55 & 1) == 0) && ((DAT_ffff0000 & 1) != 0)) {
          DAT_ffff2983 = 0;
          _DAT_fffeef1c = 0;
          DAT_fffee6ad = DAT_fffee6ad & 0xf7;
          DAT_ffff29d6 = DAT_ffff29d6 | 8;
          goto LAB_0003ad9a;
        }
        if ((DAT_fffee6ad & 8) == 0) {
          if (((int)DAT_fffeec53 & 0x80U) != 0) {
            local_c = 0;
            cVar3 = '\x03';
          }
          goto LAB_0003ad9a;
        }
        goto LAB_0003ad94;
      }
    }
    else if ((DAT_ffff0000 & 2) != 0) {
      bVar2 = DAT_fffee6ad & 8;
      goto joined_r0x0003acde;
    }
    cVar3 = '\x04';
  }
LAB_0003ad9a:
  uVar1 = FUN_00001550(0x70);
  DAT_fffeec54 = DAT_ffff66b0;
  bVar2 = DAT_ffffab40 | 0x40;
  if ((local_c & 0x40) == 0) {
    bVar2 = DAT_ffffab40 & 0xbf;
  }
  DAT_ffff66b0 = cVar3;
  DAT_ffffab40 = bVar2;
  FUN_00001550(uVar1);
  return;
}

