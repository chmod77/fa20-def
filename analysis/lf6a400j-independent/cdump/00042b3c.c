
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00042b3c(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  
  if ((((int)DAT_fffef371 & 4U) == 0) || (DAT_ffff0910 != '\0')) {
    DAT_fffef8b2 = 0;
    DAT_fffef8b3 = 0;
    DAT_fffef8b4 = 0;
    DAT_fffef8b5 = 0;
    DAT_fffef8b6 = 0;
    return (int)DAT_fffef371;
  }
  uVar1 = _DAT_fffef0e4 & 0xc00;
  if ((_v_Primary_Wastegate_Duty_0E5E < 0x1400) || (uVar1 != 0xc00)) {
    bVar2 = 0x13ff < _v_Primary_Wastegate_Duty_0E5E;
    if ((0x13ff < _v_Primary_Wastegate_Duty_0E5E) &&
       ((bVar2 = uVar1 == 0, uVar1 == 0 &&
        (DAT_fffef8b5 = FUN_0000152c(DAT_fffef8b5 + 1), bVar2 = DAT_fffef8b5, 99 < DAT_fffef8b5))))
    {
      DAT_fffef8b2 = 0;
      DAT_fffef8b1 = DAT_fffef8b1 & 0x7f;
      goto LAB_00042bd8;
    }
  }
  else {
    DAT_fffef8b2 = FUN_0000152c(DAT_fffef8b2 + 1);
    DAT_fffef8b5 = 0;
    bVar2 = DAT_fffef8b5;
    if (7 < DAT_fffef8b2) {
      DAT_fffef8b1 = DAT_fffef8b1 | 0x80;
LAB_00042bd8:
      DAT_fffef991 = '\x01';
      bVar2 = DAT_fffef8b5;
    }
  }
  DAT_fffef8b5 = bVar2;
  if (((_v_Primary_Wastegate_Duty_0E5E < 0x5001) && (uVar1 == 0x800)) &&
     (DAT_fffef8b3 = FUN_0000152c(DAT_fffef8b3 + 1), 7 < DAT_fffef8b3)) {
    DAT_fffef8b1 = DAT_fffef8b1 | 0x40;
    DAT_fffef992 = '\x01';
  }
  if (((_v_Primary_Wastegate_Duty_0E5E < 0x5001) && (uVar1 == 0x400)) &&
     (DAT_fffef8b4 = FUN_0000152c(DAT_fffef8b4 + 1), 7 < DAT_fffef8b4)) {
    DAT_fffef8b1 = DAT_fffef8b1 | 0x20;
    DAT_fffef993 = '\x01';
  }
  if ((_v_Primary_Wastegate_Duty_0E5E < 0x5001) && (uVar1 == 0)) {
    DAT_fffef8b6 = FUN_0000152c(DAT_fffef8b6 + 1);
    if (99 < DAT_fffef8b6) {
      DAT_fffef8b3 = 0;
      DAT_fffef992 = '\x01';
      DAT_fffef8b4 = 0;
      DAT_fffef8b1 = DAT_fffef8b1 & 0x9f;
      DAT_fffef993 = '\x01';
    }
  }
  else {
    DAT_fffef8b6 = 0;
  }
  if (((DAT_fffef8b1 & 0x40) == 0) && ((DAT_fffef8b1 & 0x20) == 0)) {
    if ((DAT_fffef992 != '\x01') || (DAT_fffef993 != '\x01')) goto LAB_00042d5c;
    DAT_fffef9ba = DAT_fffef9ba & 0xfe;
  }
  else {
    DAT_fffef9ba = DAT_fffef9ba | 1;
  }
  DAT_fffef994 = 1;
LAB_00042d5c:
  if (((int)(char)DAT_fffef8b1 & 0x80U) == 0) {
    if ((int)DAT_fffef991 != 1) {
      return (int)DAT_fffef991;
    }
    uVar3 = (int)(char)DAT_fffef9ba & 0xfd;
    DAT_fffef9ba = (byte)uVar3;
  }
  else {
    uVar3 = (int)(char)DAT_fffef9ba | 2;
    DAT_fffef9ba = (byte)uVar3;
  }
  DAT_fffef995 = 1;
  return uVar3;
}

