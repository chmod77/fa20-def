
/* WARNING: Removing unreachable block (ram,0x00100a5a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001008d0(uint param_1,uint param_2,char param_3,char param_4,char param_5,uint param_6,
                 char param_7,char param_8,char param_9,uint param_10,uint param_11,char param_12,
                 char param_13,char param_14,char param_15,char param_16,short *param_17,
                 undefined1 *param_18,byte *param_19)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  short sVar6;
  ushort uVar7;
  undefined1 uVar8;
  
  param_1 = param_1 & 0xff;
  param_2 = param_2 & 0xff;
  uVar2 = param_1;
  uVar1 = LK_135798((uint)&T_02F900,param_1,param_2);
  sVar6 = (short)uVar2;
  if ((param_8 == '\0') && (param_9 == '\0')) {
    uVar2 = LK_1395DC((uint)&T_02F914,param_1,param_2);
    uVar3 = LK_13852C((uint)&T_02F980,param_10 & 0xff,param_11 & 0xff);
    iVar4 = __sdiv32_r1_by_r0((uVar3 & 0xff) * (int)(char)uVar2,0xff);
    sVar6 = (short)(char)iVar4 + ((ushort)uVar1 & 0xff);
  }
  if (param_7 == '\0') {
    if ((param_8 == '\0') && (param_9 == '\0')) {
      if (sVar6 < 0x100) {
        if (sVar6 < 0) {
          sVar6 = 0;
        }
      }
      else {
        sVar6 = 0xff;
      }
      bVar5 = (byte)sVar6;
    }
    else {
      bVar5 = (byte)uVar1;
    }
  }
  else {
    uVar2 = LK_133BCC((uint)&T_02F960,param_6 & 0xffff);
    bVar5 = (byte)uVar2;
  }
  *param_19 = bVar5;
  uVar7 = (ushort)bVar5 - (ushort)DAT_fffed9db;
  if ((short)uVar7 < 0) {
    uVar7 = -uVar7;
    if ((short)uVar7 < 0) {
      uVar7 = 0;
    }
  }
  else if ((short)uVar7 < 0) {
    uVar7 = 0;
  }
  if (((uVar7 & 0xff) < 4) && (DAT_fffed9da == '\0')) {
    uVar7 = (short)(char)DAT_fffed9db;
  }
  else {
    uVar2 = __sdiv32_r1_by_r0(0x97ce,0x1c);
    uVar7 = (ushort)bVar5;
    if (((uVar2 & 0xffff) <= (uint)bVar5) && (uVar7 = (ushort)uVar2, 0xff < (uVar2 & 0xffff))) {
      uVar7 = 0xff;
    }
  }
  uVar8 = (undefined1)uVar7;
  *param_18 = uVar8;
  if ((param_12 == '\0') || (param_13 == '\0')) {
    if (param_12 != '\0') {
      *param_17 = 0x23e;
      goto LAB_00100bb8;
    }
    if (param_13 == '\0') {
      if (param_4 == '\0') {
        if ((param_14 == '\0') || (param_15 != '\0')) {
          if (param_3 == '\x04') {
            if (param_5 != '\x03') {
              uVar2 = LK_135904((uint)&T_02F96C,param_6 & 0xffff,param_2);
              uVar7 = (ushort)uVar2;
            }
            *param_17 = (uVar7 & 0xff) * 0x96;
          }
          else if (param_3 == '\x03') {
            if (param_16 == '\0') {
              uVar2 = LK_133F40((uint)&T_02F940,param_6 & 0xffff);
              *param_17 = (short)uVar2;
            }
            else {
              uVar2 = LK_133F40((uint)&T_02F934,param_6 & 0xffff);
              *param_17 = (short)uVar2;
            }
          }
          else if (param_3 == '\x02') {
            *param_17 = 0x600e;
          }
          else if (param_3 == '\x01') {
            uVar2 = LK_133F40((uint)&T_02F928,param_6 & 0xffff);
            *param_17 = (short)uVar2;
          }
          else {
            uVar2 = LK_135904((uint)&T_02F94C,param_6 & 0xffff,param_2);
            *param_17 = ((ushort)uVar2 & 0xff) * 0x96;
          }
        }
        else {
          *param_17 = 0x600e;
        }
      }
      else {
        *param_17 = 0x4009;
      }
      goto LAB_00100bb8;
    }
  }
  *param_17 = 0x23e;
LAB_00100bb8:
  if (param_5 != '\x03') {
    _DAT_fffed9d8 = 0;
    sVar6 = _DAT_fffed9d8;
  }
  else {
    sVar6 = -1;
    if (_DAT_fffed9d8 != -1) {
      sVar6 = _DAT_fffed9d8 + 1;
    }
  }
  _DAT_fffed9d8 = sVar6;
  DAT_fffed9db = uVar8;
  DAT_fffed9da = 0;
  return;
}

