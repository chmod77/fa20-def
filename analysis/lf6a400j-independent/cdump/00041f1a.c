
/* WARNING: Removing unreachable block (ram,0x00041f3e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00041f1a(void)

{
  byte bVar2;
  uint uVar1;
  ushort uVar3;
  
  if ((((int)DAT_fffef371 & 4U) == 0) || (DAT_ffff08dc != '\0')) {
    DAT_fffeff4e = 0;
    DAT_fffeff4f = 0;
    DAT_fffeff50 = 0;
    DAT_fffeff51 = 0;
    DAT_fffeff52 = 0;
    return (int)DAT_fffef371;
  }
  uVar3 = _DAT_fffef0e6 & 0x300;
  if ((((int)DAT_ffff0438 & 0x80U) == 0) || (uVar3 != 0x300)) {
    if ((((int)DAT_ffff0438 & 0x80U) == 0) || (uVar3 != 0)) {
      DAT_fffeff51 = 0;
    }
    else {
      DAT_fffeff51 = FUN_0000152c(DAT_fffeff51 + 1);
      if (99 < DAT_fffeff51) {
        DAT_fffeff4e = 0;
        DAT_fffeff4d = DAT_fffeff4d & 0x7f;
        goto LAB_00041fba;
      }
    }
  }
  else {
    DAT_fffeff4e = FUN_0000152c(DAT_fffeff4e + 1);
    DAT_fffeff51 = 0;
    if (7 < DAT_fffeff4e) {
      DAT_fffeff4d = DAT_fffeff4d | 0x80;
LAB_00041fba:
      DAT_fffeff53 = '\x01';
    }
  }
  if (((((int)DAT_ffff0438 & 0x80U) == 0) && (uVar3 == 0x200)) &&
     (DAT_fffeff4f = FUN_0000152c(DAT_fffeff4f + 1), 7 < DAT_fffeff4f)) {
    DAT_fffeff4d = DAT_fffeff4d | 0x40;
    DAT_fffeff54 = '\x01';
  }
  if (((((int)DAT_ffff0438 & 0x80U) == 0) && (uVar3 == 0x100)) &&
     (DAT_fffeff50 = FUN_0000152c(DAT_fffeff50 + 1), 7 < DAT_fffeff50)) {
    DAT_fffeff4d = DAT_fffeff4d | 0x20;
    DAT_fffeff55 = '\x01';
  }
  bVar2 = ((int)DAT_ffff0438 & 0x80U) == 0;
  if ((((bool)bVar2) && (bVar2 = uVar3 == 0, uVar3 == 0)) &&
     (bVar2 = FUN_0000152c(DAT_fffeff52 + 1), 99 < bVar2)) {
    DAT_fffeff4f = 0;
    DAT_fffeff54 = '\x01';
    DAT_fffeff50 = 0;
    DAT_fffeff4d = DAT_fffeff4d & 0x9f;
    DAT_fffeff55 = '\x01';
  }
  DAT_fffeff52 = bVar2;
  if (((DAT_fffeff4d & 0x40) == 0) && ((DAT_fffeff4d & 0x20) == 0)) {
    if ((DAT_fffeff54 != '\x01') || (DAT_fffeff55 != '\x01')) goto LAB_000420ce;
    DAT_fffeff4c = DAT_fffeff4c & 0xfe;
  }
  else {
    DAT_fffeff4c = DAT_fffeff4c | 1;
  }
  DAT_fffeff56 = 1;
LAB_000420ce:
  if (((int)(char)DAT_fffeff4d & 0x80U) == 0) {
    if ((int)DAT_fffeff53 != 1) {
      return (int)DAT_fffeff53;
    }
    uVar1 = (int)(char)DAT_fffeff4c & 0xfd;
    DAT_fffeff4c = (byte)uVar1;
  }
  else {
    uVar1 = (int)(char)DAT_fffeff4c | 2;
    DAT_fffeff4c = (byte)uVar1;
  }
  DAT_fffeff57 = 1;
  return uVar1;
}

