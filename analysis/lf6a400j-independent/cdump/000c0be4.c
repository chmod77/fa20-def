
uint FUN_000c0be4(uint param_1,byte param_2,uint param_3,uint param_4,undefined1 *param_5,
                 undefined1 *param_6,undefined1 *param_7,undefined1 *param_8,undefined1 *param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = LK_133BCC((uint)&T_02E7F0,param_1 & 0xffff);
  *param_6 = (char)uVar1;
  uVar2 = LK_133BCC((uint)&T_02E7FC,param_1 & 0xffff);
  uVar6 = (undefined1)uVar2;
  *param_7 = uVar6;
  if (param_2 < 0x25) {
    if (param_2 == 0) {
      param_2 = 1;
    }
  }
  else {
    param_2 = 0x24;
  }
  if ((param_4 & 0xffff) <= (param_3 & 0xffff)) {
    param_3 = param_4;
  }
  uVar2 = LK_133BCC((uint)&T_02E808,param_3);
  *param_8 = (char)uVar2;
  uVar3 = LK_133BCC((uint)&T_02E814,param_3);
  uVar4 = (undefined1)uVar3;
  uVar3 = (uint)param_2;
  *param_9 = uVar4;
  if (uVar3 == 1) goto LAB_000c0d34;
  if (uVar3 != 2) {
    if (uVar3 == 3) goto LAB_000c0cee;
    if (uVar3 == 4) goto LAB_000c0ce2;
    if ((uVar3 != 5) && (uVar3 != 6)) {
      uVar5 = (char)uVar1;
      if ((uVar3 == 7) || (uVar5 = uVar6, uVar3 == 8)) goto LAB_000c0d36;
      if (uVar3 != 9) {
        if (uVar3 == 10) goto LAB_000c0d34;
        if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
          uVar3 = 0x28;
          uVar5 = 0x28;
          goto LAB_000c0d36;
        }
        if (uVar3 == 0xd) {
          uVar3 = 0x28;
          uVar5 = 0x28;
          goto LAB_000c0d36;
        }
        uVar5 = (char)uVar2;
        if (uVar3 == 0xe) goto LAB_000c0d36;
        if (uVar3 == 0xf) {
LAB_000c0cee:
          uVar5 = 0xfa;
          goto LAB_000c0d36;
        }
        if (uVar3 == 0x10) {
LAB_000c0ce2:
          uVar3 = 0x28;
          uVar5 = 0x28;
          goto LAB_000c0d36;
        }
        uVar5 = uVar4;
        if ((((uVar3 == 0x11) || (uVar5 = DAT_fffec9bc, uVar3 == 0x12)) || (uVar3 == 0x13)) ||
           (uVar3 == 0x14)) goto LAB_000c0d36;
        if (uVar3 != 0x15) {
          if (uVar3 == 0x16) {
            uVar3 = 0xfffffffa;
            uVar5 = 0xfa;
            goto LAB_000c0d36;
          }
          if (((uVar3 != 0x17) && (uVar3 != 0x18)) && (uVar3 != 0x19)) {
            if (uVar3 == 0x1a) goto LAB_000c0ce2;
            if (uVar3 == 0x1b) goto LAB_000c0cee;
            if (uVar3 == 0x1c) goto LAB_000c0d36;
            if ((uVar3 != 0x1d) && (uVar3 != 0x1e)) {
              uVar5 = uVar6;
              if (uVar3 == 0x1f) goto LAB_000c0d36;
              if (uVar3 != 0x20) {
                if ((uVar3 == 0x21) || (uVar3 == 0x22)) {
                  uVar3 = 0xfffffffa;
                  uVar5 = 0xfa;
                  goto LAB_000c0d36;
                }
                if (uVar3 != 0x23) {
                  uVar5 = uVar4;
                  if (uVar3 != 0x24) goto LAB_000c0d36;
                  goto LAB_000c0d34;
                }
              }
              uVar5 = 0xfa;
              goto LAB_000c0d36;
            }
          }
        }
LAB_000c0d34:
        uVar5 = 0;
        goto LAB_000c0d36;
      }
    }
  }
  uVar3 = 0x28;
  uVar5 = 0x28;
LAB_000c0d36:
  *param_5 = uVar5;
  DAT_fffec9bc = uVar5;
  return uVar3;
}

