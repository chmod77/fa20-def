
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00041c98(void)

{
  ushort uVar1;
  uint uVar2;
  
  if ((((DAT_fffef371 & 4) == 0) && (((int)(char)DAT_fffef371 & 0x80U) == 0)) ||
     (DAT_ffff08dd != '\0')) {
    DAT_fffef8b8 = 0;
    DAT_fffef8b9 = 0;
    DAT_fffef8ba = 0;
    DAT_fffef8bb = 0;
    DAT_fffef8bc = 0;
    return (int)(char)DAT_fffef371;
  }
  uVar1 = _DAT_fffef0e6 & 0xc00;
  if ((v_CPC_Valve_Duty_Ratio_043B < 0x32) || (uVar1 != 0xc00)) {
    if ((v_CPC_Valve_Duty_Ratio_043B < 0x32) || (uVar1 != 0)) {
      DAT_fffef8bb = 0;
    }
    else {
      DAT_fffef8bb = FUN_0000152c(DAT_fffef8bb + 1);
      if (99 < DAT_fffef8bb) {
        DAT_fffef8b8 = 0;
        DAT_fffef8b7 = DAT_fffef8b7 & 0x7f;
        goto LAB_00041d38;
      }
    }
  }
  else {
    DAT_fffef8b8 = FUN_0000152c(DAT_fffef8b8 + 1);
    DAT_fffef8bb = 0;
    if (7 < DAT_fffef8b8) {
      DAT_fffef8b7 = DAT_fffef8b7 | 0x80;
LAB_00041d38:
      DAT_fffef981 = '\x01';
    }
  }
  if (((v_CPC_Valve_Duty_Ratio_043B < 0xc9) && (uVar1 == 0x800)) &&
     (DAT_fffef8b9 = FUN_0000152c(DAT_fffef8b9 + 1), 7 < DAT_fffef8b9)) {
    DAT_fffef8b7 = DAT_fffef8b7 | 0x40;
    DAT_fffef982 = '\x01';
  }
  if (((v_CPC_Valve_Duty_Ratio_043B < 0xc9) && (uVar1 == 0x400)) &&
     (DAT_fffef8ba = FUN_0000152c(DAT_fffef8ba + 1), 7 < DAT_fffef8ba)) {
    DAT_fffef8b7 = DAT_fffef8b7 | 0x20;
    DAT_fffef983 = '\x01';
  }
  if ((v_CPC_Valve_Duty_Ratio_043B < 0xc9) && (uVar1 == 0)) {
    DAT_fffef8bc = FUN_0000152c(DAT_fffef8bc + 1);
    if (99 < DAT_fffef8bc) {
      DAT_fffef8b9 = 0;
      DAT_fffef982 = '\x01';
      DAT_fffef8ba = 0;
      DAT_fffef8b7 = DAT_fffef8b7 & 0x9f;
      DAT_fffef983 = '\x01';
    }
  }
  else {
    DAT_fffef8bc = 0;
  }
  if (((DAT_fffef8b7 & 0x40) == 0) && ((DAT_fffef8b7 & 0x20) == 0)) {
    if ((DAT_fffef982 != '\x01') || (DAT_fffef983 != '\x01')) goto LAB_00041ed4;
    DAT_fffef9b4 = DAT_fffef9b4 & 0xfe;
  }
  else {
    DAT_fffef9b4 = DAT_fffef9b4 | 1;
  }
  DAT_fffef984 = 1;
LAB_00041ed4:
  if (((int)(char)DAT_fffef8b7 & 0x80U) == 0) {
    if ((int)DAT_fffef981 != 1) {
      return (int)DAT_fffef981;
    }
    uVar2 = (int)(char)DAT_fffef9b4 & 0xfd;
    DAT_fffef9b4 = (byte)uVar2;
  }
  else {
    uVar2 = (int)(char)DAT_fffef9b4 | 2;
    DAT_fffef9b4 = (byte)uVar2;
  }
  DAT_fffef985 = 1;
  return uVar2;
}

