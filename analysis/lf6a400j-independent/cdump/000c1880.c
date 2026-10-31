
void FUN_000c1880(byte param_1,byte param_2,char param_3,char param_4,ushort param_5,ushort param_6,
                 char param_7,char param_8,char param_9,char param_10,ushort param_11,byte param_12,
                 char param_13,char param_14,undefined1 param_15,char param_16,char param_17,
                 char param_18,char param_19,undefined1 *param_20,undefined1 *param_21)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  
  bVar1 = param_6 < 0xb4;
  bVar4 = false;
  if (((param_4 == '\0') && (param_3 != '\0')) && (param_6 < 0xb4)) {
    bVar4 = true;
  }
  bVar2 = param_5 < 0xb4;
  bVar5 = false;
  if ((0x81 < param_5) && (param_5 < 0xb4)) {
    bVar5 = true;
  }
  bVar3 = true;
  if ((DAT_fffec9ce != '\0') && ((param_1 == 0 || (param_2 <= DAT_fffec9cd)))) {
    bVar3 = false;
  }
  if ((DAT_fffec9d2 <= param_1) && (DAT_fffec9d0 != '\0')) {
    param_15 = DAT_fffec9cf;
  }
  *param_21 = param_15;
  cVar8 = '\x15';
  if ((param_1 == 0) && (cVar8 = '\0', DAT_fffec9d1 != '\0')) {
    cVar8 = DAT_fffec9d1 + -1;
  }
  bVar6 = false;
  if ((((cVar8 != '\0') && (param_4 != '\0')) && (bVar6 = false, param_8 == '\0')) &&
     ((bVar6 = false, param_9 == '\0' && (bVar6 = false, param_10 == '\0')))) {
    bVar6 = true;
  }
  if (DAT_fffec9cc == '\0') {
    bVar7 = 0x3c;
  }
  else {
    bVar7 = 0x3a;
  }
  DAT_fffec9cc = bVar7 <= param_12;
  if ((bVar3) && (param_3 == '\0')) {
    *param_20 = 2;
  }
  else if ((param_4 == '\0') && (((param_16 != '\0' && (param_3 == '\0')) && (param_5 < 0xb4)))) {
    *param_20 = 0x20;
  }
  else if (((param_4 != '\0') || (param_3 != '\0')) || (0x81 < param_5)) {
    if (((param_4 == '\0') && (param_3 == '\0')) && (bVar5)) {
      *param_20 = 4;
    }
    else if (((param_4 != '\0') || (param_3 != '\0')) || (bVar2)) {
      if ((bVar3) && (param_3 != '\0')) {
        *param_20 = 6;
      }
      else if ((param_18 == '\0') || (!bVar4)) {
        if (bVar4) {
          *param_20 = 0x1f;
        }
        else if (((param_4 != '\0') || (param_3 == '\0')) || (bVar1)) {
          if (((param_1 == 0) || (param_4 == '\0')) || (param_8 == '\0')) {
            if (((param_1 == 0) || (param_4 == '\0')) || (param_9 == '\0')) {
              if (((param_1 == 0) || (param_4 == '\0')) || (param_10 == '\0')) {
                if ((bVar6) && (100 < param_11)) {
                  *param_20 = 0x1c;
                }
                else if ((bVar6) && (((param_18 != '\0' && (param_7 == '\0')) && (bVar1)))) {
                  *param_20 = 0x22;
                }
                else if ((((!bVar6) || (param_7 != '\0')) || (bVar1)) || (!(bool)DAT_fffec9cc)) {
                  if ((((bool)DAT_fffec9cc) || (param_7 != '\0')) || ((bVar1 || (!bVar6)))) {
                    if ((((param_17 == '\0') || (param_19 == '\0')) || (0x81 < param_6)) ||
                       ((param_7 != '\0' || (!bVar6)))) {
                      if ((param_6 < 0xb4) && ((param_7 == '\0' && (bVar6)))) {
                        *param_20 = 8;
                      }
                      else if ((bVar6) && (((param_7 != '\0' && (param_16 != '\0')) && (bVar2)))) {
                        *param_20 = 0x23;
                      }
                      else if (((!bVar6) || (param_7 == '\0')) || (bVar2)) {
                        if (((!bVar6) || (param_7 == '\0')) || (0x81 < param_5)) {
                          if (((bVar6) && (param_7 != '\0')) && (bVar5)) {
                            *param_20 = 0x10;
                          }
                          else if ((cVar8 != '\0') || (param_4 == '\0')) {
                            *param_20 = 0x12;
                          }
                          else if (param_13 == '\0') {
                            if (param_8 == '\0') {
                              if ((param_14 == '\0') || (param_6 < 4)) {
                                if (param_14 == '\0') {
                                  if (bVar2) {
                                    if (param_5 < 0x82) {
                                      *param_20 = 0x1b;
                                    }
                                    else {
                                      *param_20 = 0x1a;
                                    }
                                  }
                                  else {
                                    *param_20 = 0x19;
                                  }
                                }
                                else {
                                  *param_20 = 0x16;
                                }
                              }
                              else {
                                *param_20 = 0x15;
                              }
                            }
                            else {
                              *param_20 = 0x14;
                            }
                          }
                          else {
                            *param_20 = 0x13;
                          }
                        }
                        else {
                          *param_20 = 0xf;
                        }
                      }
                      else {
                        *param_20 = 0x11;
                      }
                    }
                    else {
                      *param_20 = 7;
                    }
                  }
                  else {
                    *param_20 = 0xe;
                  }
                }
                else {
                  *param_20 = 0xd;
                }
              }
              else {
                *param_20 = 0xc;
              }
            }
            else {
              *param_20 = 0xb;
            }
          }
          else {
            *param_20 = 10;
          }
        }
        else {
          *param_20 = 9;
        }
      }
      else {
        *param_20 = 0x21;
      }
    }
    else {
      *param_20 = 5;
    }
  }
  else {
    *param_20 = 3;
  }
  DAT_fffec9ce = 1;
  DAT_fffec9cd = param_2;
  DAT_fffec9d0 = 1;
  DAT_fffec9d2 = param_1;
  DAT_fffec9cf = param_15;
  DAT_fffec9d1 = cVar8;
  return;
}

