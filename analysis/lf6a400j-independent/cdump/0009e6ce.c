
/* WARNING: Removing unreachable block (ram,0x0009e840) */
/* WARNING: Removing unreachable block (ram,0x0009e888) */
/* WARNING: Removing unreachable block (ram,0x0009e88e) */
/* WARNING: Removing unreachable block (ram,0x0009e8f8) */
/* WARNING: Removing unreachable block (ram,0x0009e8fe) */
/* WARNING: Removing unreachable block (ram,0x0009e858) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009e6ce(byte param_1,char param_2,char param_3,uint param_4,ushort param_5,
                 undefined2 *param_6,undefined2 *param_7)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined2 local_64 [4];
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined1 *local_1c;
  
  local_1c = &DAT_fffec090;
  local_64[0] = *param_6;
  local_64[1] = param_6[1];
  local_64[2] = param_6[2];
  local_64[3] = param_6[3];
  uStack_5c = param_6[4];
  uStack_5a = param_6[5];
  uStack_58 = param_6[6];
  uStack_56 = param_6[7];
  uStack_54 = param_6[8];
  uStack_52 = param_6[9];
  uStack_50 = param_6[10];
  uStack_4e = param_6[0xb];
  uStack_4c = param_6[0xc];
  uStack_4a = param_6[0xd];
  uStack_48 = param_6[0xe];
  uStack_46 = param_6[0xf];
  uStack_44 = param_6[0x10];
  uStack_42 = param_6[0x11];
  uStack_40 = param_6[0x12];
  uStack_3e = param_6[0x13];
  uStack_3c = param_6[0x14];
  uStack_3a = param_6[0x15];
  uStack_38 = param_6[0x16];
  uStack_36 = param_6[0x17];
  uStack_34 = param_6[0x18];
  uStack_32 = param_6[0x19];
  uStack_30 = param_6[0x1a];
  uStack_2e = param_6[0x1b];
  uStack_2c = param_6[0x1c];
  uStack_2a = param_6[0x1d];
  uStack_28 = param_6[0x1e];
  uStack_26 = param_6[0x1f];
  uStack_24 = param_6[0x20];
  uStack_22 = param_6[0x21];
  uStack_20 = param_6[0x22];
  iVar3 = (param_4 & 0xff) * (int)(short)(0x10 - (param_5 & 0xff));
  sVar2 = 0x7fff;
  if (iVar3 < 0x800) {
    if (iVar3 < -0x800) {
      sVar2 = -0x8000;
    }
    else {
      sVar2 = (short)iVar3 * 0x10;
    }
  }
  DAT_ffff1988 = 0xf2;
  DAT_ffff1989 = 3;
  bVar1 = 0;
  iVar3 = 0;
  DAT_ffff1987 = param_1;
  do {
    *(undefined2 *)(&DAT_fffec090 + iVar3) = *(undefined2 *)((int)local_64 + iVar3);
    bVar1 = bVar1 + 1;
    iVar3 = iVar3 + 2;
  } while (bVar1 < 0x23);
  if (((param_2 == '\x01') || (param_2 == '\x02')) || (param_2 == '\x03')) {
    for (DAT_fffec0d8 = 0; DAT_fffec0d8 < 0x23; DAT_fffec0d8 = DAT_fffec0d8 + 1) {
      *(undefined2 *)(&DAT_fffec090 + (uint)DAT_fffec0d8 * 2) = 0;
    }
  }
  else {
    if (((param_3 == '\x05') || (param_3 == '\x06')) || (param_3 == '\a')) {
      _DAT_fffec0d6 = *(short *)(&DAT_fffec090 + (uint)DAT_ffff1987 * 2) + 0x100;
      if ((-1 < *(short *)(&DAT_fffec090 + (uint)DAT_ffff1987 * 2)) && (_DAT_fffec0d6 < 0)) {
        _DAT_fffec0d6 = 0x7fff;
      }
      if (sVar2 <= _DAT_fffec0d6) {
        _DAT_fffec0d6 = sVar2;
      }
    }
    else {
      if (param_3 == '\b') {
        _DAT_fffec0d6 = *(short *)(&DAT_fffec090 + (uint)DAT_ffff1987 * 2);
        sVar2 = *(short *)(&DAT_fffec090 + (uint)DAT_ffff1987 * 2);
      }
      else {
        if (((param_3 != '\t') && (param_3 != '\n')) && (param_3 != '\v')) goto LAB_0009e946;
        _DAT_fffec0d6 = *(short *)(&DAT_fffec090 + (uint)DAT_ffff1987 * 2);
        sVar2 = *(short *)(&DAT_fffec090 + (uint)DAT_ffff1987 * 2);
      }
      _DAT_fffec0d6 = _DAT_fffec0d6 + -0x400;
      if ((sVar2 < 0) && (-1 < _DAT_fffec0d6)) {
        _DAT_fffec0d6 = -0x8000;
      }
    }
    FUN_0009e68c();
  }
LAB_0009e946:
  *param_7 = _DAT_fffec090;
  param_7[1] = _DAT_fffec092;
  param_7[2] = _DAT_fffec094;
  param_7[3] = _DAT_fffec096;
  param_7[4] = _DAT_fffec098;
  param_7[5] = _DAT_fffec09a;
  param_7[6] = _DAT_fffec09c;
  param_7[7] = _DAT_fffec09e;
  param_7[8] = _DAT_fffec0a0;
  param_7[9] = _DAT_fffec0a2;
  param_7[10] = _DAT_fffec0a4;
  param_7[0xb] = _DAT_fffec0a6;
  param_7[0xc] = _DAT_fffec0a8;
  param_7[0xd] = _DAT_fffec0aa;
  param_7[0xe] = _DAT_fffec0ac;
  param_7[0xf] = _DAT_fffec0ae;
  param_7[0x10] = _DAT_fffec0b0;
  param_7[0x11] = _DAT_fffec0b2;
  param_7[0x12] = _DAT_fffec0b4;
  param_7[0x13] = _DAT_fffec0b6;
  param_7[0x14] = _DAT_fffec0b8;
  param_7[0x15] = _DAT_fffec0ba;
  param_7[0x16] = _DAT_fffec0bc;
  param_7[0x17] = _DAT_fffec0be;
  param_7[0x18] = _DAT_fffec0c0;
  param_7[0x19] = _DAT_fffec0c2;
  param_7[0x1a] = _DAT_fffec0c4;
  param_7[0x1b] = _DAT_fffec0c6;
  param_7[0x1c] = _DAT_fffec0c8;
  param_7[0x1d] = _DAT_fffec0ca;
  param_7[0x1e] = _DAT_fffec0cc;
  param_7[0x1f] = _DAT_fffec0ce;
  param_7[0x20] = _DAT_fffec0d0;
  param_7[0x21] = _DAT_fffec0d2;
  param_7[0x22] = _DAT_fffec0d4;
  return;
}

