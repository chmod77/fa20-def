
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005109c(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  byte bVar5;
  
  _DAT_fffef04c = _DAT_fffef046;
  if ((DAT_fffeef9c != '\x03') || ((DAT_fffeef98 >> 2 & 7) != 4)) {
    DAT_fffeeff0 = '\0';
    DAT_fffeeff1 = 0;
    goto LAB_00051322;
  }
  if (0x13 < DAT_fffeeff0) {
    iVar2 = 0;
    DAT_fffeeff0 = 0;
    iVar1 = 0;
    for (bVar5 = 0; bVar5 < 0x14; bVar5 = bVar5 + 1) {
      iVar1 = iVar1 + (uint)*(ushort *)(&DAT_fffeefb2 + iVar2);
      *(undefined2 *)(&DAT_fffeefb2 + iVar2) = 0;
      iVar2 = iVar2 + 2;
    }
    puVar3 = &DAT_fffeeff2;
    if (DAT_fffeeff2 == 0) {
      _DAT_fffeefda = 0x78d;
    }
    else {
      iVar1 = __udiv32_r1_by_r0(iVar1,(uint)DAT_fffeeff2);
      _DAT_fffeefda = (short)iVar1;
      DAT_fffef3e8 = DAT_fffef3e8 | 0x80;
      *puVar3 = 0;
    }
    for (uVar4 = 2; (uVar4 & 0xff) != 0; uVar4 = uVar4 - 1) {
      uVar4 = uVar4 & 0xff;
      (&DAT_fffeefe6)[uVar4] = (&DAT_fffeefe5)[uVar4];
    }
    DAT_fffeefe6 = FUN_0016bcec(&PTR_DAT_00163ae4,(int)_DAT_fffeefda);
    if (DAT_fffeeff1 < 2) {
      DAT_fffeeff1 = DAT_fffeeff1 + 1;
    }
    else {
      DAT_fffeeff1 = 0;
      iVar1 = 0;
      for (uVar4 = 0; (uVar4 & 0xff) < 3; uVar4 = (uVar4 & 0xff) + 1) {
        iVar1 = iVar1 + (uint)(byte)(&DAT_fffeefe6)[uVar4 & 0xff];
      }
      iVar1 = __udiv32_r1_by_r0(iVar1 << 8,3);
      _DAT_fffeefea = (short)iVar1;
      if ((ushort)((ushort)DAT_fffeefe6 << 8) == _DAT_fffeefea) {
        if (_DAT_fffeefea == 0x100) {
          DAT_fffeefe4 = DAT_fffeefe4 | 0x10;
          goto LAB_00051250;
        }
        if (_DAT_fffeefea == 0x1800) {
          DAT_fffeefe4 = DAT_fffeefe4 | 8;
          goto LAB_00051250;
        }
        DAT_fffeefec = (char)((uint)iVar1 >> 8);
      }
      else {
LAB_00051250:
        DAT_fffeefec = '\f';
      }
      _DAT_fffeefee = FUN_0016b238(&PTR_DAT_00163af0,(int)DAT_fffeefec);
      DAT_fffeefe5 = DAT_fffeefe5 | 0x80;
    }
  }
  DAT_fffeeff0 = DAT_fffeeff0 + 1;
  for (uVar4 = 0x13; (uVar4 & 0xff) != 0; uVar4 = uVar4 - 1) {
    uVar4 = uVar4 & 0xff;
    *(undefined2 *)(&DAT_fffeefb2 + uVar4 * 2) = *(undefined2 *)(&DAT_fffeefb2 + (uVar4 - 1) * 2);
  }
  if (_DAT_fffef04c == 0) {
    if (_DAT_fffeefb0 == 0) {
      _DAT_fffeefb2 = 0xffff;
    }
    else {
      iVar1 = __sdiv32_r1_by_r0((uint)_v_Control_Module_Voltage_EF18 * 0x9c4,(uint)_DAT_fffeefb0);
      _DAT_fffeefb2 = FUN_0016b5d4(iVar1 + -0x870);
    }
    DAT_fffeeff2 = FUN_0000152c(DAT_fffeeff2 + 1);
  }
  else {
    _DAT_fffeefb2 = 0;
  }
  if (((((int)(char)DAT_fffeefe5 & 0x80U) != 0) && ((DAT_fffeef99 & 0x40) != 0)) &&
     (0x37 < DAT_fffef030)) {
    DAT_fffeef9a = DAT_fffeef9a | 4;
  }
LAB_00051322:
  if ((DAT_fffeef99 & 0x40) == 0) {
    DAT_fffef030 = 0;
  }
  else {
    DAT_fffef030 = FUN_0000152c(DAT_fffef030 + 1);
  }
  return;
}

