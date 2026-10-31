
/* WARNING: Removing unreachable block (ram,0x000b9054) */
/* WARNING: Removing unreachable block (ram,0x000b93c4) */

void FUN_000b8f9c(char param_1,byte *param_2,byte *param_3,byte *param_4,short param_5,short param_6
                 ,short param_7,short param_8,undefined4 param_9,undefined4 param_10,char param_11,
                 byte *param_12,byte *param_13,char *param_14)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  ushort uVar8;
  char cVar9;
  byte bStack_34;
  
  if (param_1 == '\0') {
LAB_000b935c:
    if (DAT_fffec858 != '\0') {
      DAT_fffec83c = '\0';
      DAT_fffec858 = '\0';
      DAT_fffec844 = '\0';
      DAT_fffec853 = '\0';
      DAT_fffec840 = '\0';
      DAT_fffec855 = '\0';
      DAT_fffec848 = '\0';
      DAT_fffec854 = '\0';
    }
  }
  else {
    bVar1 = false;
    if (((((uint)(param_5 * 0xb4) >> 0x10) + 0x80 & 0xff) == 0) &&
       ((((uint)(param_7 * 0xb4) >> 0x10) + 0x80 & 0xff) < 3)) {
      bVar1 = true;
    }
    if ((bVar1) || (param_11 == '\0')) goto LAB_000b935c;
    if (DAT_fffec844 == '\0') {
      DAT_fffec847 = '\0';
      DAT_fffec851 = 0x80;
      DAT_fffec844 = '\x01';
      DAT_fffec858 = '\x01';
    }
    if (*param_4 < 0x80) {
      uVar4 = 0x100 - *param_4;
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
    }
    else {
      uVar4 = (ushort)(char)*param_4;
    }
    if (*param_4 < 0x80) {
      uVar8 = 0xff;
      if ((ushort)(0x100 - *param_4) < 0x100) {
        uVar8 = 0x100 - *param_4;
      }
    }
    else {
      uVar8 = (short)(char)*param_4;
    }
    bVar1 = false;
    if ((DAT_fffec847 != '\0') && (0x80 < DAT_fffec851)) {
      bVar1 = true;
    }
    if (bVar1) {
      if (DAT_fffec848 == '\0') {
        DAT_fffec841 = 0;
        DAT_fffec848 = '\x01';
      }
      DAT_fffec85d = *param_3 <= DAT_fffec841;
      bVar3 = 0xff;
      if (DAT_fffec841 != 0xff) {
        bVar3 = DAT_fffec841 + 1;
      }
    }
    else {
      DAT_fffec848 = '\0';
      bVar3 = DAT_fffec841;
    }
    DAT_fffec841 = bVar3;
    cVar6 = '\0';
    if (bVar1) {
      cVar6 = DAT_fffec85d;
    }
    bVar1 = false;
    if (((uVar4 & 0xff) < 0x81) && (cVar6 != '\0')) {
      bVar1 = true;
    }
    if (bVar1) {
      if (DAT_fffec853 == '\0') {
        DAT_fffec83f = 0;
        DAT_fffec853 = '\x01';
      }
      DAT_fffec85a = 0x13 < DAT_fffec83f;
      bVar3 = 0xff;
      if (DAT_fffec83f != 0xff) {
        bVar3 = DAT_fffec83f + 1;
      }
    }
    else {
      DAT_fffec853 = '\0';
      bVar3 = DAT_fffec83f;
    }
    DAT_fffec83f = bVar3;
    bVar2 = false;
    if ((DAT_fffec847 != '\0') && (DAT_fffec851 == 0x80)) {
      bVar2 = true;
    }
    if (bVar2) {
      if (DAT_fffec854 == '\0') {
        DAT_fffec843 = 0;
        DAT_fffec854 = '\x01';
      }
      DAT_fffec85e = *param_3 <= DAT_fffec843;
      bVar3 = 0xff;
      if (DAT_fffec843 != 0xff) {
        bVar3 = DAT_fffec843 + 1;
      }
    }
    else {
      DAT_fffec854 = '\0';
      bVar3 = DAT_fffec843;
    }
    DAT_fffec843 = bVar3;
    cVar9 = '\0';
    if (bVar2) {
      cVar9 = DAT_fffec85e;
    }
    bVar2 = false;
    if ((DAT_fffec847 != '\0') && (DAT_fffec851 < 0x80)) {
      bVar2 = true;
    }
    if (bVar2) {
      if (DAT_fffec855 == '\0') {
        DAT_fffec842 = 0;
        DAT_fffec855 = '\x01';
      }
      DAT_fffec85c = *param_3 <= DAT_fffec842;
      bVar3 = 0xff;
      if (DAT_fffec842 != 0xff) {
        bVar3 = DAT_fffec842 + 1;
      }
    }
    else {
      DAT_fffec855 = '\0';
      bVar3 = DAT_fffec842;
    }
    DAT_fffec842 = bVar3;
    cVar5 = '\0';
    if (bVar2) {
      cVar5 = DAT_fffec85c;
    }
    bVar2 = false;
    if (((uVar8 & 0xff) < 0x81) && (cVar5 != '\0')) {
      bVar2 = true;
    }
    if (bVar2) {
      if (DAT_fffec840 == '\0') {
        DAT_fffec846 = 0;
        DAT_fffec840 = '\x01';
      }
      DAT_fffec85b = 0x13 < DAT_fffec846;
      bVar3 = 0xff;
      if (DAT_fffec846 != 0xff) {
        bVar3 = DAT_fffec846 + 1;
      }
    }
    else {
      DAT_fffec840 = '\0';
      bVar3 = DAT_fffec846;
    }
    DAT_fffec846 = bVar3;
    if ((*param_12 < 0xa6) && (0x67 < *param_13)) {
      cVar7 = '\0';
      if (bVar1) {
        cVar7 = DAT_fffec85a;
      }
      DAT_fffec83c = '\x01';
      if (cVar7 == '\0') {
        if ((cVar6 == '\0') || (0x7f < *param_4)) {
          if ((*param_4 < 0x81) || (bVar1 = cVar9 == '\0', cVar9 = '\0', bVar1)) {
            if ((cVar9 == '\0') || (DAT_fffec83c = '\x04', 0x7f < *param_4)) {
              cVar6 = '\0';
              if (bVar2) {
                cVar6 = DAT_fffec85b;
              }
              if (cVar6 == '\0') {
                if ((cVar5 == '\0') || (*param_4 < 0x81)) {
                  DAT_fffec83c = '\0';
                }
                else {
                  DAT_fffec83c = '\x06';
                }
              }
              else {
                DAT_fffec83c = '\x05';
              }
            }
          }
          else {
            DAT_fffec83c = '\x03';
          }
        }
        else {
          DAT_fffec83c = '\x02';
        }
      }
    }
    else {
      DAT_fffec83c = '\f';
    }
    DAT_fffec847 = DAT_fffec83c == '\0';
    DAT_fffec851 = *param_2;
  }
  if (param_1 != '\0') {
    bVar1 = false;
    if (((((uint)(param_6 * 0xb4) >> 0x10) + 0x80 & 0xff) == 0) &&
       ((((uint)(param_8 * 0xb4) >> 0x10) + 0x80 & 0xff) < 3)) {
      bVar1 = true;
    }
    if ((!bVar1) && (param_11 != '\0')) {
      if (DAT_fffec859 == '\0') {
        DAT_fffec850 = '\0';
        DAT_fffec84f = 0x80;
        DAT_fffec859 = '\x01';
        DAT_fffec83e = '\x01';
      }
      if (param_4[1] < 0x80) {
        uVar4 = 0x100 - param_4[1];
        if (0xff < uVar4) {
          uVar4 = 0xff;
        }
      }
      else {
        uVar4 = (ushort)(char)param_4[1];
      }
      if (param_4[1] < 0x80) {
        uVar8 = 0x100 - param_4[1];
        if (0xff < uVar8) {
          uVar8 = 0xff;
        }
        bStack_34 = (byte)uVar8;
      }
      else {
        bStack_34 = param_4[1];
      }
      bVar1 = false;
      if ((DAT_fffec850 != '\0') && (0x80 < DAT_fffec84f)) {
        bVar1 = true;
      }
      if (bVar1) {
        if (DAT_fffec849 == '\0') {
          DAT_fffec852 = 0;
          DAT_fffec849 = '\x01';
        }
        DAT_fffec862 = param_3[1] <= DAT_fffec852;
        bVar3 = 0xff;
        if (DAT_fffec852 != 0xff) {
          bVar3 = DAT_fffec852 + 1;
        }
      }
      else {
        DAT_fffec849 = '\0';
        bVar3 = DAT_fffec852;
      }
      DAT_fffec852 = bVar3;
      cVar6 = '\0';
      if (bVar1) {
        cVar6 = DAT_fffec862;
      }
      bVar1 = false;
      if (((uVar4 & 0xff) < 0x81) && (cVar6 != '\0')) {
        bVar1 = true;
      }
      if (bVar1) {
        if (DAT_fffec845 == '\0') {
          DAT_fffec84a = 0;
          DAT_fffec845 = '\x01';
        }
        DAT_fffec85f = 0x13 < DAT_fffec84a;
        bVar3 = 0xff;
        if (DAT_fffec84a != 0xff) {
          bVar3 = DAT_fffec84a + 1;
        }
      }
      else {
        DAT_fffec845 = '\0';
        bVar3 = DAT_fffec84a;
      }
      DAT_fffec84a = bVar3;
      bVar2 = false;
      if ((DAT_fffec850 != '\0') && (DAT_fffec84f == 0x80)) {
        bVar2 = true;
      }
      if (bVar2) {
        if (DAT_fffec856 == '\0') {
          DAT_fffec84d = 0;
          DAT_fffec856 = '\x01';
        }
        DAT_fffec863 = param_3[1] <= DAT_fffec84d;
        bVar3 = 0xff;
        if (DAT_fffec84d != 0xff) {
          bVar3 = DAT_fffec84d + 1;
        }
      }
      else {
        DAT_fffec856 = '\0';
        bVar3 = DAT_fffec84d;
      }
      DAT_fffec84d = bVar3;
      cVar9 = '\0';
      if (bVar2) {
        cVar9 = DAT_fffec863;
      }
      bVar2 = false;
      if ((DAT_fffec850 != '\0') && (DAT_fffec84f < 0x80)) {
        bVar2 = true;
      }
      if (bVar2) {
        if (DAT_fffec857 == '\0') {
          DAT_fffec84c = 0;
          DAT_fffec857 = '\x01';
        }
        DAT_fffec861 = param_3[1] <= DAT_fffec84c;
        bVar3 = 0xff;
        if (DAT_fffec84c != 0xff) {
          bVar3 = DAT_fffec84c + 1;
        }
      }
      else {
        DAT_fffec857 = '\0';
        bVar3 = DAT_fffec84c;
      }
      DAT_fffec84c = bVar3;
      cVar5 = '\0';
      if (bVar2) {
        cVar5 = DAT_fffec861;
      }
      bVar2 = false;
      if ((bStack_34 < 0x81) && (cVar5 != '\0')) {
        bVar2 = true;
      }
      if (bVar2) {
        if (DAT_fffec84e == '\0') {
          DAT_fffec84b = 0;
          DAT_fffec84e = '\x01';
        }
        DAT_fffec860 = 0x13 < DAT_fffec84b;
        bVar3 = 0xff;
        if (DAT_fffec84b != 0xff) {
          bVar3 = DAT_fffec84b + 1;
        }
      }
      else {
        DAT_fffec84e = '\0';
        bVar3 = DAT_fffec84b;
      }
      DAT_fffec84b = bVar3;
      if ((param_12[1] < 0xa6) && (0x67 < param_13[1])) {
        cVar7 = '\0';
        if (bVar1) {
          cVar7 = DAT_fffec85f;
        }
        DAT_fffec83d = '\x01';
        if (cVar7 == '\0') {
          if ((cVar6 == '\0') || (0x7f < param_4[1])) {
            if ((param_4[1] < 0x81) || (bVar1 = cVar9 == '\0', cVar9 = '\0', bVar1)) {
              if ((cVar9 == '\0') || (DAT_fffec83d = '\x04', 0x7f < param_4[1])) {
                cVar6 = '\0';
                if (bVar2) {
                  cVar6 = DAT_fffec860;
                }
                if (cVar6 == '\0') {
                  if ((cVar5 == '\0') || (param_4[1] < 0x81)) {
                    DAT_fffec83d = '\0';
                  }
                  else {
                    DAT_fffec83d = '\x06';
                  }
                }
                else {
                  DAT_fffec83d = '\x05';
                }
              }
            }
            else {
              DAT_fffec83d = '\x03';
            }
          }
          else {
            DAT_fffec83d = '\x02';
          }
        }
      }
      else {
        DAT_fffec83d = '\f';
      }
      DAT_fffec850 = DAT_fffec83d == '\0';
      DAT_fffec84f = param_2[1];
      goto LAB_000b96f4;
    }
  }
  if (DAT_fffec83e != '\0') {
    DAT_fffec83d = '\0';
    DAT_fffec83e = '\0';
    DAT_fffec859 = '\0';
    DAT_fffec845 = '\0';
    DAT_fffec84e = '\0';
    DAT_fffec857 = '\0';
    DAT_fffec849 = '\0';
    DAT_fffec856 = '\0';
  }
LAB_000b96f4:
  *param_14 = DAT_fffec83c;
  param_14[1] = DAT_fffec83d;
  return;
}

