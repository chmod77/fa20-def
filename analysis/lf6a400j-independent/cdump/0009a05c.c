
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009a05c(char param_1,ushort param_2,uint param_3,byte param_4,char param_5,char param_6,
                 uint param_7,ushort param_8,byte param_9,uint param_10,undefined1 *param_11,
                 undefined2 *param_12,char *param_13,undefined1 *param_14,byte *param_15)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  short sVar8;
  ushort uVar11;
  uint uVar9;
  byte bVar12;
  uint uVar10;
  char cVar13;
  char cVar14;
  char cVar15;
  float fVar16;
  char cStack_2c;
  char cStack_28;
  undefined1 uStack_24;
  
  param_3 = param_3 & 0xff;
  if (param_3 == 1) {
    uVar11 = 0x14;
  }
  else if (param_3 == 2) {
    uVar11 = 100;
  }
  else if (param_3 == 3) {
    uVar11 = 10;
  }
  else if (param_3 == 4) {
    uVar11 = 100;
  }
  else if (param_3 == 5) {
    uVar11 = 5;
  }
  else if (param_3 == 6) {
    uVar11 = 100;
  }
  else if (param_3 == 7) {
    uVar11 = 100;
  }
  else if (param_3 == 8) {
    uVar11 = 100;
  }
  else {
    uVar11 = 100;
  }
  bVar1 = param_5 != '\x01';
  bVar2 = param_5 != '\x06';
  bVar3 = param_5 == '\x05';
  bVar4 = param_5 != '\x04';
  bVar5 = param_5 != '\x03';
  bVar6 = param_5 != '\x02';
  cStack_2c = DAT_fffebfce;
  if (!bVar2) {
    uVar9 = LK_133B38((uint)&T_02D71C,param_3);
    cStack_2c = (char)uVar9;
  }
  if (bVar1) {
    if (bVar6) {
      if (bVar5) {
        if (bVar4) {
          if (bVar3) {
            uVar9 = LK_133B38((uint)&T_02D6F8,param_3);
            cStack_2c = (char)uVar9;
          }
        }
        else {
          uVar9 = LK_133B38((uint)&T_02D6D4,param_3);
          cStack_2c = (char)uVar9;
        }
      }
      else {
        uVar9 = LK_133B38((uint)&T_02D6B0,param_3);
        cStack_2c = (char)uVar9;
      }
    }
    else {
      uVar9 = LK_133B38((uint)&T_02D68C,param_3);
      cStack_2c = (char)uVar9;
    }
  }
  else {
    uVar9 = LK_133B38((uint)&T_02D668,param_3);
    cStack_2c = (char)uVar9;
  }
  cStack_28 = DAT_fffebfd1;
  if (!bVar2) {
    uVar9 = LK_133B38((uint)&T_02D710,param_3);
    cStack_28 = (char)uVar9;
  }
  if (bVar1) {
    if (bVar6) {
      if (bVar5) {
        if (bVar4) {
          if (bVar3) {
            uVar9 = LK_133B38((uint)&T_02D6EC,param_3);
            cStack_28 = (char)uVar9;
          }
        }
        else {
          uVar9 = LK_133B38((uint)&T_02D6C8,param_3);
          cStack_28 = (char)uVar9;
        }
      }
      else {
        uVar9 = LK_133B38((uint)&T_02D6A4,param_3);
        cStack_28 = (char)uVar9;
      }
    }
    else {
      uVar9 = LK_133B38((uint)&T_02D680,param_3);
      cStack_28 = (char)uVar9;
    }
  }
  else {
    uVar9 = LK_133B38((uint)&T_02D65C,param_3);
    cStack_28 = (char)uVar9;
  }
  if (bVar2) {
    uVar9 = (uint)DAT_fffebfd0;
  }
  else {
    uVar9 = LK_133B38((uint)&T_02D728,param_3);
  }
  if (bVar1) {
    if (bVar6) {
      if (bVar5) {
        if (bVar4) {
          if (bVar3) {
            uVar9 = LK_133B38((uint)&T_02D704,param_3);
            uStack_24 = (undefined1)uVar9;
          }
          else {
            uStack_24 = (undefined1)uVar9;
          }
        }
        else {
          uVar9 = LK_133B38((uint)&T_02D6E0,param_3);
          uStack_24 = (undefined1)uVar9;
        }
      }
      else {
        uVar9 = LK_133B38((uint)&T_02D6BC,param_3);
        uStack_24 = (undefined1)uVar9;
      }
    }
    else {
      uVar9 = LK_133B38((uint)&T_02D698,param_3);
      uStack_24 = (undefined1)uVar9;
    }
  }
  else {
    uVar9 = LK_133B38((uint)&T_02D674,param_3);
    uStack_24 = (undefined1)uVar9;
  }
  if (param_1 == '\0') {
    uVar9 = (uint)DAT_fffebfcd;
  }
  else if (param_6 == '\0') {
    uVar9 = (uint)cStack_28;
  }
  else if (param_8 < 0x3c00) {
    uVar9 = (uint)cStack_2c;
  }
  *param_14 = (char)uVar9;
  cVar13 = '\x01';
  if (DAT_fffebfcc <= param_9) {
    cVar13 = DAT_fffebfc8;
  }
  if (param_9 != 0) {
    cVar13 = '\0';
  }
  bVar7 = false;
  if (cVar13 == '\0') {
    _DAT_fffebfc4 = 0;
    sVar8 = _DAT_fffebfc4;
  }
  else {
    bVar7 = 0x95 < _DAT_fffebfc4;
    sVar8 = -1;
    if (_DAT_fffebfc4 != 0xffff) {
      sVar8 = _DAT_fffebfc4 + 1;
    }
  }
  _DAT_fffebfc4 = sVar8;
  bVar12 = DAT_fffebfcb;
  if (param_1 != '\0') {
    if (bVar7) {
      if (param_6 == '\0') {
        bVar12 = 0xfe;
      }
      else {
        bVar12 = 0xcc;
      }
    }
    else if (param_6 == '\0') {
      bVar12 = 0xfe;
    }
    else {
      bVar12 = 0xfe;
    }
  }
  DAT_fffebfc8 = cVar13;
  *param_15 = bVar12;
  if (param_1 == '\0') {
    param_7 = 0;
  }
  else if ((param_7 & 0xffff) <= (uint)_DAT_fffebfc6) {
    param_7 = (uint)(short)_DAT_fffebfc6;
  }
  cVar13 = DAT_fffebfca;
  if (!bVar2) {
    uVar10 = LK_134A08((uint)&T_02D7B8,param_7);
    cVar13 = (char)uVar10;
  }
  if (bVar1) {
    if (bVar6) {
      if (bVar5) {
        if (bVar4) {
          if (bVar3) {
            uVar10 = LK_134A08((uint)&T_02D7A0,param_7);
            cVar13 = (char)uVar10;
          }
        }
        else {
          uVar10 = LK_134A08((uint)&T_02D788,param_7);
          cVar13 = (char)uVar10;
        }
      }
      else {
        uVar10 = LK_134A08((uint)&T_02D770,param_7);
        cVar13 = (char)uVar10;
      }
    }
    else {
      uVar10 = LK_134A08((uint)&T_02D758,param_7);
      cVar13 = (char)uVar10;
    }
  }
  else {
    uVar10 = LK_134A08((uint)&T_02D740,param_7);
    cVar13 = (char)uVar10;
  }
  cVar14 = DAT_fffebfcf;
  if (!bVar2) {
    uVar10 = LK_134A08((uint)&T_02D7C4,param_7);
    cVar14 = (char)uVar10;
  }
  if (bVar1) {
    if (bVar6) {
      if (bVar5) {
        if (bVar4) {
          if (bVar3) {
            uVar10 = LK_134A08((uint)&T_02D7AC,param_7);
            cVar14 = (char)uVar10;
          }
        }
        else {
          uVar10 = LK_134A08((uint)&T_02D794,param_7);
          cVar14 = (char)uVar10;
        }
      }
      else {
        uVar10 = LK_134A08((uint)&T_02D77C,param_7);
        cVar14 = (char)uVar10;
      }
    }
    else {
      uVar10 = LK_134A08((uint)&T_02D764,param_7);
      cVar14 = (char)uVar10;
    }
  }
  else {
    uVar10 = LK_134A08((uint)&T_02D74C,param_7);
    cVar14 = (char)uVar10;
  }
  cVar15 = DAT_fffebfc9;
  if ((param_1 != '\0') && (cVar15 = cVar13, param_6 != '\0')) {
    cVar15 = cVar14;
  }
  *param_13 = cVar15;
  if ((param_1 == '\0') || (uVar11 < param_2)) {
    *param_11 = 0;
  }
  else {
    uVar10 = LK_133B38((uint)&T_02D734,param_10 & 0xff);
    fVar16 = (float)(uVar10 & 0xff) * (float)(int)cVar15 * (float)(uVar9 & 0xff) * (float)param_4 *
             (float)bVar12 * 1.1825217e-10;
    if (63.5 < fVar16) {
      fVar16 = 63.5;
    }
    if (fVar16 <= 63.5) {
      *param_11 = (char)(int)(fVar16 * 2.0);
    }
    else {
      *param_11 = 0x7f;
    }
  }
  *param_12 = (short)param_7;
  DAT_fffebfce = cStack_2c;
  DAT_fffebfd1 = cStack_28;
  DAT_fffebfcd = (char)uVar9;
  DAT_fffebfd0 = uStack_24;
  DAT_fffebfcf = cVar14;
  DAT_fffebfca = cVar13;
  DAT_fffebfc9 = cVar15;
  DAT_fffebfcc = param_9;
  DAT_fffebfcb = bVar12;
  _DAT_fffebfc6 = (short)param_7;
  return;
}

