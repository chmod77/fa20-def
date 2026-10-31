
void FUN_00103f60(byte param_1,char param_2,char param_3,char param_4,char param_5,byte param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,char param_12,
                 char param_13,char param_14,char param_15,char param_16,char param_17,char param_18
                 ,char param_19,char param_20,byte param_21,byte param_22,char param_23,
                 char param_24,undefined1 *param_25)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  
  bVar5 = param_1 <= DAT_fffed9fb;
  bVar4 = DAT_fffed9fa <= param_1;
  bVar1 = false;
  if (param_1 == 0) {
    DAT_fffed9fc = '\0';
    cVar9 = DAT_fffed9fc;
  }
  else {
    bVar1 = 0x95 < DAT_fffed9fc;
    cVar9 = -1;
    if (DAT_fffed9fc != 0xff) {
      cVar9 = DAT_fffed9fc + 1;
    }
  }
  DAT_fffed9fc = cVar9;
  bVar8 = false;
  if (((bVar1) || (param_4 == '\x03')) && (param_3 == '\0')) {
    bVar8 = true;
  }
  bVar1 = DAT_fffed9fd <= param_6;
  DAT_fffed9fd = param_6;
  bVar6 = true;
  if ((param_7 == '\0') && (param_8 == '\0')) {
    bVar6 = false;
  }
  bVar7 = false;
  if ((param_9 != '\0') && (param_10 == '\0')) {
    bVar7 = true;
  }
  bVar2 = param_21 < DAT_fffed9fe;
  bVar3 = param_22 < DAT_fffed9ff;
  DAT_fffed9fa = param_1;
  DAT_fffed9fb = param_1;
  if (DAT_fffed9f5 != '\0') goto LAB_0010441a;
  if (DAT_fffed9f6 != '\0') {
    if (param_2 != '\0') {
      DAT_fffed9f4 = '\x01';
      DAT_fffed9f3 = '\x01';
      DAT_fffed9ec = 1;
      DAT_fffed9f6 = param_2 == '\0';
    }
    goto LAB_0010441a;
  }
  if (DAT_fffed9f4 == '\0') {
    if (DAT_fffed9f7 != '\0') goto LAB_0010441a;
    DAT_fffed9f7 = '\x01';
    if (bVar5) {
      DAT_fffed9f5 = '\x01';
      DAT_fffed9ec = DAT_fffed9f9;
      goto LAB_0010441a;
    }
  }
  else {
    if (bVar4) {
      if (DAT_fffed9f1 == '\0') {
        if (DAT_fffed9f3 == '\0') {
          if (DAT_fffed9f2 != '\0') {
            if (param_5 == '\0') {
              if (param_6 == 0) goto LAB_0010441a;
              DAT_fffed9f2 = '\0';
              goto LAB_001043d6;
            }
            DAT_fffed9f2 = '\0';
            goto LAB_001043bc;
          }
          if ((DAT_fffed9f8 == '\0') || (bVar1)) goto LAB_0010441a;
          DAT_fffed9f8 = '\0';
        }
        else {
          if (!bVar8) {
            if (param_5 == '\0') goto LAB_0010441a;
            DAT_fffed9f3 = '\0';
LAB_001043bc:
            DAT_fffed9f1 = '\x01';
LAB_001043c0:
            DAT_fffed9f0 = '\x01';
            DAT_fffed9ec = 0xa3;
            goto LAB_0010441a;
          }
          DAT_fffed9f3 = '\0';
        }
LAB_001043ee:
        DAT_fffed9f2 = '\x01';
        DAT_fffed9ec = 0;
      }
      else {
        if ((param_5 == '\0') && (param_6 == 0)) {
          FUN_00103f34();
          goto LAB_001043ee;
        }
        if (param_6 != 0) {
          FUN_00103f34();
LAB_001043d6:
          DAT_fffed9f8 = '\x01';
          DAT_fffed9ec = 0xa0;
          goto LAB_0010441a;
        }
        if (DAT_fffed9ef == '\0') {
          if (DAT_fffed9ee == '\0') {
            if ((DAT_fffed9f0 == '\0') || (!bVar6)) goto LAB_0010441a;
            DAT_fffed9f0 = '\0';
            goto LAB_00104378;
          }
          if (bVar7) {
            DAT_fffed9ed = '\0';
            DAT_fffed9ee = '\0';
            goto LAB_001043c0;
          }
          if ((param_10 == '\0') && (param_9 == '\0')) {
            DAT_fffed9ed = '\0';
            DAT_fffed9ee = '\0';
            DAT_fffed9ef = '\x01';
            DAT_fffed9ec = 0x30;
            goto LAB_0010441a;
          }
          if (DAT_fffed9ed == '\x03') {
            if ((param_17 == '\0') && (param_18 == '\0')) goto LAB_0010441a;
          }
          else {
            cVar9 = param_14;
            if (DAT_fffed9ed != '\x06') {
              if (DAT_fffed9ed == '\a') {
                if (((((bVar2) || (bVar3)) && (param_24 != '\0')) &&
                    ((param_12 == '\0' && (param_13 == '\0')))) && (param_16 == '\0')) {
LAB_00104300:
                  DAT_fffed9ed = '\b';
                  DAT_fffed9ec = 0x44;
                  goto LAB_0010441a;
                }
                if (((bVar2) || (bVar3)) &&
                   ((param_23 != '\0' &&
                    (((param_12 == '\0' && (param_13 == '\0')) && (param_16 == '\0')))))) {
LAB_001042f6:
                  DAT_fffed9ed = '\t';
                  DAT_fffed9ec = 0xc4;
                  goto LAB_0010441a;
                }
                if ((((!bVar2) && (!bVar3)) ||
                    ((param_24 != '\0' || ((param_23 != '\0' || (param_12 != '\0')))))) ||
                   ((param_13 != '\0' || (param_16 != '\0')))) {
                  if (param_13 != '\0') {
LAB_00104314:
                    DAT_fffed9ed = '\x05';
                    DAT_fffed9ec = 0xc0;
                    goto LAB_0010441a;
                  }
                  if (param_12 != '\0') {
LAB_0010430a:
                    DAT_fffed9ed = '\x04';
                    DAT_fffed9ec = 0xcf;
                    goto LAB_0010441a;
                  }
                  if (param_16 == '\0') goto LAB_0010441a;
LAB_0010431e:
                  DAT_fffed9ed = '\x02';
                  DAT_fffed9ec = 0x40;
                  goto LAB_0010441a;
                }
                goto LAB_00104364;
              }
              cVar9 = param_20;
              if ((DAT_fffed9ed != '\b') && (cVar9 = param_14, DAT_fffed9ed != '\t')) {
                if (DAT_fffed9ed == '\x01') {
                  if (param_16 != '\0') goto LAB_0010431e;
                  if (param_13 != '\0') goto LAB_00104314;
                  if (param_12 != '\0') goto LAB_0010430a;
                  if (param_24 != '\0') goto LAB_00104300;
                  if (param_23 != '\0') goto LAB_001042f6;
                  if (param_19 == '\0') goto LAB_0010441a;
LAB_0010433c:
                  DAT_fffed9ed = '\x03';
                  DAT_fffed9ec = 0x23;
                  goto LAB_0010441a;
                }
                if (DAT_fffed9ed == '\x02') {
                  cVar9 = param_20;
                  if (param_19 != '\0') goto LAB_0010433c;
                }
                else {
                  if ((DAT_fffed9ed != '\x04') && (DAT_fffed9ed != '\x05')) goto LAB_0010441a;
                  if (param_15 != '\0') {
                    DAT_fffed9ed = '\x06';
                    DAT_fffed9ec = 0xb0;
                    goto LAB_0010441a;
                  }
                }
              }
            }
            if (cVar9 != '\0') goto LAB_0010441a;
          }
LAB_00104364:
          DAT_fffed9ed = '\0';
        }
        else {
          if (!bVar6) {
            if (param_11 != '\0') {
              DAT_fffed9ef = '\0';
              DAT_fffed9ee = '\x01';
              DAT_fffed9ed = '\a';
              DAT_fffed9ec = 0x3f;
              goto LAB_0010441a;
            }
            if (!bVar7) goto LAB_0010441a;
            DAT_fffed9ef = '\0';
            goto LAB_001043c0;
          }
          DAT_fffed9ef = '\0';
LAB_00104378:
          DAT_fffed9ee = '\x01';
        }
        FUN_00103f28();
      }
      goto LAB_0010441a;
    }
    if (DAT_fffed9f1 == '\0') {
      if (DAT_fffed9f3 == '\0') {
        if (DAT_fffed9f2 == '\0') {
          if (DAT_fffed9f8 != '\0') {
            DAT_fffed9f8 = '\0';
          }
        }
        else {
          DAT_fffed9f2 = '\0';
        }
      }
      else {
        DAT_fffed9f3 = '\0';
      }
    }
    else {
      FUN_00103f34();
    }
    DAT_fffed9f4 = '\0';
  }
  DAT_fffed9f6 = '\x01';
  DAT_fffed9ec = 2;
LAB_0010441a:
  *param_25 = DAT_fffed9ec;
  DAT_fffed9f9 = DAT_fffed9ec;
  DAT_fffed9fe = param_21;
  DAT_fffed9ff = param_22;
  return;
}

