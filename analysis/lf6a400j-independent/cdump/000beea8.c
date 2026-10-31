
/* WARNING: Removing unreachable block (ram,0x000bf218) */
/* WARNING: Removing unreachable block (ram,0x000bf1e0) */
/* WARNING: Removing unreachable block (ram,0x000bf1be) */
/* WARNING: Removing unreachable block (ram,0x000bf1d4) */
/* WARNING: Removing unreachable block (ram,0x000bf208) */
/* WARNING: Removing unreachable block (ram,0x000bf27a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000beea8(char param_1,char param_2,char param_3,byte param_4,byte param_5,ushort param_6,
                 undefined4 param_7,uint param_8,char param_9,char param_10,char param_11,
                 byte param_12,char param_13,char param_14,char param_15,byte param_16,
                 ushort param_17,char param_18,char param_19,char param_20,uint param_21,
                 char param_22,uint param_23,uint param_24,char param_25,ushort param_26,
                 ushort param_27,char param_28,char param_29,char param_30,short param_31,
                 uint param_32,uint param_33,uint param_34,undefined1 *param_35,undefined2 *param_36
                 )

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char cVar5;
  undefined *puVar4;
  char cVar6;
  uint p1;
  uint uVar7;
  code *pcVar8;
  
  uVar7 = (param_32 & 0xffff) - (param_33 & 0xffff);
  if ((int)uVar7 < 0x8000) {
    if ((int)uVar7 < -0x8000) {
      uVar7 = 0xffff8000;
    }
  }
  else {
    uVar7 = 0x7fff;
  }
  *param_36 = (short)uVar7;
  uVar7 = LK_1369C4((uint)&T_02E758,(int)param_31,uVar7);
  if ((param_11 != '\x01') || (cVar5 = '\x01', param_17 < 0xa5)) {
    cVar5 = DAT_fffec931;
  }
  if ((((DAT_fffec930 != '\x04') || (param_28 == '\0')) || (param_29 != '\0')) ||
     ((param_30 != '\0' || (cVar6 = '\x01', param_31 < -0xe)))) {
    cVar6 = DAT_fffec933;
  }
  if (DAT_fffec930 != '\x04') {
    cVar6 = '\0';
  }
  bVar1 = false;
  if (cVar6 == '\0') {
    _DAT_fffec92e = 0;
  }
  else {
    bVar1 = (uVar7 & 0xffff) <= (uint)_DAT_fffec92e;
    _DAT_fffec92e = _DAT_fffec92e + 1;
    if (_DAT_fffec92e == 0) {
      _DAT_fffec92e = -1;
    }
  }
  p1 = (uint)param_5;
  DAT_fffec933 = cVar6;
  uVar7 = LK_133B38((uint)&T_02E710,p1);
  uVar2 = LK_133B38((uint)&T_02E71C,p1);
  uVar3 = LK_133E10((uint)&T_02E728,p1);
  if (param_1 == '\x02') {
    if (_DAT_fffec926 == -1) {
      _DAT_fffec926 = 0xffff;
    }
    else {
      _DAT_fffec926 = _DAT_fffec926 + 1;
    }
  }
  else {
    _DAT_fffec926 = 0;
  }
  if (param_1 == '\x03') {
    if (_DAT_fffec928 == -1) {
      _DAT_fffec928 = -1;
    }
    else {
      _DAT_fffec928 = _DAT_fffec928 + 1;
    }
  }
  else {
    _DAT_fffec928 = 0;
  }
  if (((param_2 == '\0') || ((1 < DAT_fffec932 && (param_1 == '\x01')))) ||
     ((param_10 != '\0' || (param_15 != '\0')))) {
    DAT_fffec92c = 4;
    _DAT_fffec920 = 0;
    _DAT_fffec922 = 0;
    _DAT_fffec924 = 0;
    goto LAB_000bf716;
  }
  if (param_11 == '\0') {
    _DAT_fffec920 = 0;
    _DAT_fffec922 = 0;
    _DAT_fffec924 = 0;
    if ((param_1 != '\x02') || (_DAT_fffec926 < 1000)) {
      if (((0x13 < param_5) &&
          (((((0xccd < param_6 && (param_1 == '\x03')) && (_DAT_fffec928 != 0)) &&
            ((param_12 < 0x7e && (9 < param_12)))) && (param_16 < 0xfb)))) && (9 < param_16)) {
LAB_000bf6e0:
        DAT_fffec92c = 1;
        goto LAB_000bf716;
      }
      if ((param_1 != '\x03') || (_DAT_fffec928 == 0)) {
        DAT_fffec92c = 0;
        goto LAB_000bf716;
      }
    }
    DAT_fffec92c = 4;
  }
  else {
    if (param_11 != '\x01') {
      if (param_11 == '\x02') {
        if (_DAT_fffec922 == -1) {
          _DAT_fffec922 = 0xffff;
        }
        else {
          _DAT_fffec922 = _DAT_fffec922 + 1;
        }
        _DAT_fffec920 = 0;
        _DAT_fffec924 = 0;
        if ((((((_DAT_fffec922 < 1000) && (param_23 >> 0xc < 0xffff)) && (param_4 < 0x7e)) &&
             ((9 < param_4 && (0x2003 < param_6)))) &&
            ((param_34._2_2_ < 24000 && ((param_3 != '\0' && (0xfe < p1)))))) &&
           ((param_14 == '\0' && (param_13 == '\0')))) {
          DAT_fffec92c = 2;
        }
        else {
          DAT_fffec92c = 3;
        }
      }
      else if (param_11 == '\x03') {
        param_24 = param_24 & 0xffff;
        if (_DAT_fffec924 == -1) {
          _DAT_fffec924 = 0xffff;
        }
        else {
          _DAT_fffec924 = _DAT_fffec924 + 1;
        }
        _DAT_fffec920 = 0;
        _DAT_fffec922 = 0;
        if (param_19 == '\0') {
          uVar7 = LK_133BCC((uint)&T_02E740,param_24);
        }
        else {
          uVar7 = LK_133BCC((uint)&T_02E734,param_24);
        }
        if (((param_8 & 0xff) < (uVar7 & 0xff)) &&
           (uVar2 = (uint)_DAT_fffec924, uVar7 = LK_133F40((uint)&T_02E74C,param_24),
           uVar2 < (uVar7 & 0xffff))) {
          DAT_fffec92c = 3;
        }
        else {
          DAT_fffec92c = 4;
        }
      }
      else if (param_11 == '\x04') {
        _DAT_fffec920 = 0;
        _DAT_fffec922 = 0;
        _DAT_fffec924 = 0;
        DAT_fffec92b = 0x7d;
        DAT_fffec92d = 0xf7;
        if ((((((param_4 < 0x7e) && (9 < param_4)) && (param_12 < 0x7e)) &&
             (((9 < param_12 && (param_1 == '\x03')) &&
              (((param_34 & 0xffff) <= (uVar3 & 0xffff) &&
               (((param_21 & 0xff) <= (uVar2 & 0xff) && ((uVar7 & 0xff) <= (param_21 & 0xff)))))))))
            && (((param_22 != '\0' && ((param_16 < 0xf8 && (0xc < param_16)))) &&
                ((cVar5 == '\0' || (param_25 != '\0')))))) &&
           (((param_18 != '\0' || (((param_19 != '\0' && (param_20 == '\0')) || (param_20 != '\0')))
             ) && (((((param_20 != '\0' || (param_14 == '\0')) || (param_18 != '\0')) &&
                    ((0x199c < param_6 && ((param_25 == '\0' || (bVar1)))))) &&
                   ((param_26 & 0xff) <= param_27)))))) {
          DAT_fffec92c = 1;
        }
        else {
          DAT_fffec92c = 4;
        }
      }
      else {
        DAT_fffec92c = 4;
        _DAT_fffec920 = 0;
        _DAT_fffec922 = 0;
        _DAT_fffec924 = 0;
      }
      goto LAB_000bf716;
    }
    if (_DAT_fffec920 == -1) {
      _DAT_fffec920 = 0xffff;
    }
    else {
      _DAT_fffec920 = _DAT_fffec920 + 1;
    }
    _DAT_fffec922 = 0;
    _DAT_fffec924 = 0;
    if (((((_DAT_fffec920 != 0xffff) && (param_4 < 0x7e)) && (9 < param_4)) &&
        (((_DAT_fffec920 < 0x32 || (0x2003 < param_6)) &&
         (((uVar7 & 0xff) <= (param_21 & 0xff) &&
          (((param_21 & 0xff) <= (uVar2 & 0xff) && ((param_34 & 0xffff) < (uVar3 & 0xffff)))))))))
       && ((param_22 != '\0' && ((param_16 < 0xfb && (9 < param_16)))))) {
      uVar7 = 0xa5;
      pcVar8 = __udiv32_r1_by_r0;
      puVar4 = &DAT_0000ffed;
      uVar2 = __udiv32_r1_by_r0((uint)param_17 * (int)&DAT_0000ffee,0xffed);
      uVar2 = uVar2 & 0xffff;
      uVar7 = (*pcVar8)(uVar2,uVar7 & 0xffff,puVar4 + 1);
      if ((((int)uVar2 < (int)(uVar7 & 0xffff)) &&
          (((param_20 != '\0' || (param_18 != '\0')) || (param_19 != '\0')))) &&
         ((param_20 != '\0' || (param_14 == '\0')))) {
        if ((0xfe < param_5) &&
           (((0xfffd < param_6 && ((byte)param_8 < 0x67)) &&
            ((param_3 != '\0' && ((param_14 == '\0' && (param_34._2_2_ < 24000)))))))) {
          DAT_fffec92c = 2;
          goto LAB_000bf716;
        }
        goto LAB_000bf6e0;
      }
    }
    DAT_fffec92c = 3;
  }
LAB_000bf716:
  DAT_fffec930 = DAT_fffec92c;
  if (param_9 != '\0') {
    DAT_fffec930 = 4;
  }
  DAT_fffec92a = DAT_fffec92c;
  *param_35 = DAT_fffec930;
  DAT_fffec932 = param_1;
  DAT_fffec931 = cVar5;
  return;
}

