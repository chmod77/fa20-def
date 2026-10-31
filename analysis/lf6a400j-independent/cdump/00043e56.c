
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00043e56(void)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  uVar2 = (uint)DAT_fffef371;
  if ((((uVar2 & 4) == 0) || (DAT_ffff08f3 != '\0')) ||
     ((DAT_fffee6af != '\x02' && (uVar2 = (uint)DAT_fffee6af, uVar2 != 3)))) {
    DAT_fffefec6 = 0;
    DAT_fffefec7 = 0;
    DAT_fffefec8 = 0;
    DAT_fffefec9 = 0;
    DAT_fffefeca = 0;
    DAT_fffefecb = 0;
    DAT_fffefecc = 0;
    DAT_fffefecd = 0;
    DAT_fffefece = 0;
    DAT_fffefecf = 0;
    DAT_fffefed0 = 0;
    DAT_fffefed1 = 0;
    puVar5 = &DAT_fffefee2;
    for (bVar4 = 0; uVar6 = (uint)(3 < bVar4), 3 >= bVar4; bVar4 = bVar4 + 1) {
      while (bVar1 = 2 < (uVar6 & 0xff), !bVar1) {
        puVar5[uVar6 & 0xff] = bVar1;
        uVar2 = (uVar6 & 0xff) + 1;
        uVar6 = uVar2;
      }
      puVar5 = puVar5 + 3;
    }
    return uVar2;
  }
  uVar3 = _DAT_fffef3e6 & 0xc00;
  if (uVar3 == 0xc00) {
    DAT_fffefec6 = FUN_0000152c(DAT_fffefec6 + 1);
    DAT_fffefee2 = 0;
    if (0x31 < DAT_fffefec6) {
      DAT_fffefec3 = DAT_fffefec3 | 0x80;
LAB_00043ef0:
      DAT_fffefed2 = '\x01';
    }
  }
  else {
    DAT_fffefee2 = FUN_0000152c(DAT_fffefee2 + 1);
    if (0x31 < DAT_fffefee2) {
      DAT_fffefec6 = 0;
      DAT_fffefec3 = DAT_fffefec3 & 0x7f;
      goto LAB_00043ef0;
    }
  }
  if (uVar3 == 0x800) {
    DAT_fffefec7 = FUN_0000152c(DAT_fffefec7 + 1);
    DAT_fffefee3 = 0;
    if (0x31 < DAT_fffefec7) {
      DAT_fffefec3 = DAT_fffefec3 | 0x40;
LAB_00043f50:
      DAT_fffefed3 = '\x01';
    }
  }
  else {
    DAT_fffefee3 = FUN_0000152c(DAT_fffefee3 + 1);
    if (0x31 < DAT_fffefee3) {
      DAT_fffefec7 = 0;
      DAT_fffefec3 = DAT_fffefec3 & 0xbf;
      goto LAB_00043f50;
    }
  }
  if (uVar3 == 0x400) {
    DAT_fffefec8 = FUN_0000152c(DAT_fffefec8 + 1);
    DAT_fffefee4 = 0;
    if (0x31 < DAT_fffefec8) {
      DAT_fffefec3 = DAT_fffefec3 | 0x20;
LAB_00043fae:
      DAT_fffefed4 = '\x01';
    }
  }
  else {
    DAT_fffefee4 = FUN_0000152c(DAT_fffefee4 + 1);
    if (0x31 < DAT_fffefee4) {
      DAT_fffefec8 = 0;
      DAT_fffefec3 = DAT_fffefec3 & 0xdf;
      goto LAB_00043fae;
    }
  }
  uVar3 = _DAT_fffef3e6 & 0x300;
  if (uVar3 == 0x300) {
    DAT_fffefec9 = FUN_0000152c(DAT_fffefec9 + 1);
    DAT_fffefee5 = 0;
    if (0x31 < DAT_fffefec9) {
      DAT_fffefec3 = DAT_fffefec3 | 8;
LAB_0004401e:
      DAT_fffefed5 = '\x01';
    }
  }
  else {
    DAT_fffefee5 = FUN_0000152c(DAT_fffefee5 + 1);
    if (0x31 < DAT_fffefee5) {
      DAT_fffefec9 = 0;
      DAT_fffefec3 = DAT_fffefec3 & 0xf7;
      goto LAB_0004401e;
    }
  }
  if (uVar3 == 0x200) {
    DAT_fffefeca = FUN_0000152c(DAT_fffefeca + 1);
    DAT_fffefee6 = 0;
    if (0x31 < DAT_fffefeca) {
      DAT_fffefec3 = DAT_fffefec3 | 4;
LAB_000440e2:
      DAT_fffefed6 = '\x01';
    }
  }
  else {
    DAT_fffefee6 = FUN_0000152c(DAT_fffefee6 + 1);
    if (0x31 < DAT_fffefee6) {
      DAT_fffefeca = 0;
      DAT_fffefec3 = DAT_fffefec3 & 0xfb;
      goto LAB_000440e2;
    }
  }
  if (uVar3 == 0x100) {
    DAT_fffefecb = FUN_0000152c(DAT_fffefecb + 1);
    DAT_fffefee7 = 0;
    if (0x31 < DAT_fffefecb) {
      DAT_fffefec3 = DAT_fffefec3 | 2;
LAB_00044140:
      DAT_fffefed7 = '\x01';
    }
  }
  else {
    DAT_fffefee7 = FUN_0000152c(DAT_fffefee7 + 1);
    if (0x31 < DAT_fffefee7) {
      DAT_fffefecb = 0;
      DAT_fffefec3 = DAT_fffefec3 & 0xfd;
      goto LAB_00044140;
    }
  }
  uVar3 = _DAT_fffef3e6 & 0xc0;
  if (uVar3 == 0xc0) {
    DAT_fffefecc = FUN_0000152c(DAT_fffefecc + 1);
    DAT_fffefee8 = 0;
    if (0x31 < DAT_fffefecc) {
      DAT_fffefec4 = DAT_fffefec4 | 0x80;
LAB_000441a4:
      DAT_fffefed8 = '\x01';
    }
  }
  else {
    DAT_fffefee8 = FUN_0000152c(DAT_fffefee8 + 1);
    if (0x31 < DAT_fffefee8) {
      DAT_fffefecc = 0;
      DAT_fffefec4 = DAT_fffefec4 & 0x7f;
      goto LAB_000441a4;
    }
  }
  if (uVar3 == 0x80) {
    DAT_fffefecd = FUN_0000152c(DAT_fffefecd + 1);
    DAT_fffefee9 = 0;
    if (0x31 < DAT_fffefecd) {
      DAT_fffefec4 = DAT_fffefec4 | 0x40;
LAB_00044202:
      DAT_fffefed9 = '\x01';
    }
  }
  else {
    DAT_fffefee9 = FUN_0000152c(DAT_fffefee9 + 1);
    if (0x31 < DAT_fffefee9) {
      DAT_fffefecd = 0;
      DAT_fffefec4 = DAT_fffefec4 & 0xbf;
      goto LAB_00044202;
    }
  }
  if (uVar3 == 0x40) {
    DAT_fffefece = FUN_0000152c(DAT_fffefece + 1);
    DAT_fffefeea = 0;
    if (0x31 < DAT_fffefece) {
      DAT_fffefec4 = DAT_fffefec4 | 0x20;
LAB_00044264:
      DAT_fffefeda = '\x01';
    }
  }
  else {
    DAT_fffefeea = FUN_0000152c(DAT_fffefeea + 1);
    if (0x31 < DAT_fffefeea) {
      DAT_fffefece = 0;
      DAT_fffefec4 = DAT_fffefec4 & 0xdf;
      goto LAB_00044264;
    }
  }
  uVar3 = _DAT_fffef3e6 & 0x30;
  if (uVar3 == 0x30) {
    DAT_fffefecf = FUN_0000152c(DAT_fffefecf + 1);
    DAT_fffefeeb = 0;
    if (0x31 < DAT_fffefecf) {
      DAT_fffefec4 = DAT_fffefec4 | 8;
LAB_000442c6:
      DAT_fffefedb = '\x01';
    }
  }
  else {
    DAT_fffefeeb = FUN_0000152c(DAT_fffefeeb + 1);
    if (0x31 < DAT_fffefeeb) {
      DAT_fffefecf = 0;
      DAT_fffefec4 = DAT_fffefec4 & 0xf7;
      goto LAB_000442c6;
    }
  }
  if (uVar3 == 0x20) {
    DAT_fffefed0 = FUN_0000152c(DAT_fffefed0 + 1);
    DAT_fffefeec = 0;
    if (0x31 < DAT_fffefed0) {
      DAT_fffefec4 = DAT_fffefec4 | 4;
LAB_00044322:
      DAT_fffefedc = '\x01';
    }
  }
  else {
    DAT_fffefeec = FUN_0000152c(DAT_fffefeec + 1);
    if (0x31 < DAT_fffefeec) {
      DAT_fffefed0 = 0;
      DAT_fffefec4 = DAT_fffefec4 & 0xfb;
      goto LAB_00044322;
    }
  }
  if (uVar3 == 0x10) {
    DAT_fffefed1 = FUN_0000152c(DAT_fffefed1 + 1);
    DAT_fffefeed = 0;
    if (0x31 < DAT_fffefed1) {
      DAT_fffefec4 = DAT_fffefec4 | 2;
LAB_000443ce:
      DAT_fffefedd = '\x01';
    }
  }
  else {
    DAT_fffefeed = FUN_0000152c(DAT_fffefeed + 1);
    if (0x31 < DAT_fffefeed) {
      DAT_fffefed1 = 0;
      DAT_fffefec4 = DAT_fffefec4 & 0xfd;
      goto LAB_000443ce;
    }
  }
  if (((((int)(char)DAT_fffefec3 & 0x80U) == 0) && ((DAT_fffefec3 & 0x40) == 0)) &&
     ((DAT_fffefec3 & 0x20) == 0)) {
    if (((DAT_fffefed2 == '\x01') && (DAT_fffefed3 == '\x01')) && (DAT_fffefed4 == '\x01')) {
      DAT_fffefec5 = DAT_fffefec5 & 0x7f;
      goto LAB_00044412;
    }
  }
  else {
    DAT_fffefec5 = DAT_fffefec5 | 0x80;
LAB_00044412:
    DAT_fffefede = 1;
  }
  if ((((DAT_fffefec3 & 8) == 0) && ((DAT_fffefec3 & 4) == 0)) && ((DAT_fffefec3 & 2) == 0)) {
    if (((DAT_fffefed5 == '\x01') && (DAT_fffefed6 == '\x01')) && (DAT_fffefed7 == '\x01')) {
      DAT_fffefec5 = DAT_fffefec5 & 0xbf;
      goto LAB_00044456;
    }
  }
  else {
    DAT_fffefec5 = DAT_fffefec5 | 0x40;
LAB_00044456:
    DAT_fffefedf = 1;
  }
  if (((((int)(char)DAT_fffefec4 & 0x80U) == 0) && ((DAT_fffefec4 & 0x40) == 0)) &&
     ((DAT_fffefec4 & 0x20) == 0)) {
    if (((DAT_fffefed8 != '\x01') || (DAT_fffefed9 != '\x01')) || (DAT_fffefeda != '\x01'))
    goto LAB_000444a0;
    DAT_fffefec5 = DAT_fffefec5 & 0xdf;
  }
  else {
    DAT_fffefec5 = DAT_fffefec5 | 0x20;
  }
  DAT_fffefee0 = 1;
LAB_000444a0:
  if ((((DAT_fffefec4 & 8) == 0) && ((DAT_fffefec4 & 4) == 0)) && ((DAT_fffefec4 & 2) == 0)) {
    if ((int)DAT_fffefedb != 1) {
      return (int)DAT_fffefedb;
    }
    if ((int)DAT_fffefedc != 1) {
      return (int)DAT_fffefedc;
    }
    if ((int)DAT_fffefedd != 1) {
      return (int)DAT_fffefedd;
    }
    uVar2 = (int)(char)DAT_fffefec5 & 0xef;
    DAT_fffefec5 = (byte)uVar2;
  }
  else {
    uVar2 = (int)(char)DAT_fffefec5 | 0x10;
    DAT_fffefec5 = (byte)uVar2;
  }
  DAT_fffefee1 = 1;
  return uVar2;
}

