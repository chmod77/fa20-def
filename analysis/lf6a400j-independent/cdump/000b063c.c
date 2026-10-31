
void FUN_000b063c(char param_1,char param_2,char param_3,byte param_4,byte param_5,char param_6,
                 byte *param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bStack_51;
  byte local_4c;
  byte bStack_4b;
  byte bStack_49;
  byte bStack_46;
  byte bStack_45;
  byte bStack_43;
  byte bStack_40;
  byte bStack_3f;
  byte bStack_3e;
  byte bStack_3d;
  byte bStack_3c;
  byte bStack_3b;
  byte bStack_3a;
  byte bStack_39;
  byte bStack_38;
  byte bStack_37;
  byte bStack_36;
  byte local_34;
  byte bStack_33;
  byte bStack_31;
  byte bStack_2e;
  byte bStack_2d;
  byte bStack_2b;
  byte bStack_28;
  byte bStack_27;
  byte bStack_26;
  byte bStack_25;
  byte bStack_24;
  byte bStack_23;
  byte bStack_22;
  byte bStack_21;
  byte bStack_20;
  byte bStack_1f;
  byte bStack_1e;
  
  if (param_1 == '\0') {
    if (DAT_fffec62b != '\0') {
      DAT_fffec628 = 0;
      DAT_fffec62b = '\0';
      DAT_fffec62c = '\0';
    }
  }
  else {
    if (DAT_fffec62c == '\0') {
      DAT_fffec62d = '\0';
      DAT_fffec62c = '\x01';
      DAT_fffec62b = '\x01';
    }
    bVar3 = 0xff;
    if (param_5 < 0x56) {
      bVar3 = param_5 * '\x03';
    }
    bVar1 = 2;
    if (param_2 != '\0') {
      bVar1 = param_3 == '\0';
    }
    bVar2 = bVar3 - bVar1;
    if (bVar3 < bVar1) {
      bVar2 = 0;
    }
    if (bVar2 < 0xd) {
      if (bVar2 == 0) {
        bVar2 = 1;
      }
    }
    else {
      bVar2 = 0xc;
    }
    if (DAT_fffec62d == '\0') {
      bVar3 = 0x94;
    }
    else {
      bVar3 = 0x92;
    }
    DAT_fffec62d = bVar3 <= param_4;
    if ((bool)DAT_fffec62d) {
      bStack_39 = 2;
      bStack_38 = 2;
      bStack_51 = 2;
    }
    else {
      bStack_39 = 0;
      bStack_38 = 1;
      bStack_51 = 1;
    }
    bStack_36 = 1;
    if (param_6 == '\x02') {
      local_4c = 1;
      bStack_4b = 1;
      bStack_49 = 1;
      bStack_46 = 1;
      bStack_45 = bStack_51;
      bStack_43 = 0;
    }
    else {
      bStack_36 = 2;
      local_4c = 2;
      bStack_4b = 2;
      bStack_49 = 2;
      bStack_46 = 2;
      bStack_45 = 2;
      bStack_43 = 2;
    }
    if (param_6 == '\x01') {
      bStack_40 = 0;
      bStack_3f = 1;
      bStack_3d = 0;
      bStack_3a = 0;
      bStack_37 = 0;
      bStack_36 = 0;
      if ((bool)DAT_fffec62d) {
        bVar3 = 0;
      }
      else {
        bVar3 = 0;
      }
    }
    else {
      bStack_40 = local_4c;
      bStack_3f = bStack_4b;
      bStack_3d = bStack_49;
      bStack_3a = bStack_46;
      bStack_39 = bStack_45;
      bStack_38 = 2;
      bStack_37 = bStack_43;
      if (param_6 == '\x02') {
        if ((bool)DAT_fffec62d) {
          bVar3 = 1;
        }
        else {
          bVar3 = 1;
        }
      }
      else {
        bVar3 = 2;
      }
    }
    bStack_3b = 2;
    bStack_3c = 2;
    bStack_3e = 2;
    DAT_fffec628 = bStack_40;
    if (((((bVar2 != 1) && (DAT_fffec628 = bStack_3f, bVar2 != 2)) &&
         (DAT_fffec628 = bStack_3e, bVar2 != 3)) &&
        (((DAT_fffec628 = bStack_3d, bVar2 != 4 && (DAT_fffec628 = bStack_3c, bVar2 != 5)) &&
         ((DAT_fffec628 = bStack_3b, bVar2 != 6 &&
          ((DAT_fffec628 = bStack_3a, bVar2 != 7 && (DAT_fffec628 = bStack_39, bVar2 != 8)))))))) &&
       ((DAT_fffec628 = bStack_38, bVar2 != 9 &&
        (((DAT_fffec628 = bStack_37, bVar2 != 10 && (DAT_fffec628 = bStack_36, bVar2 != 0xb)) &&
         (DAT_fffec628 = bVar3, bVar2 != 0xc)))))) {
      DAT_fffec628 = bVar2;
    }
  }
  if (param_1 != '\0') {
    if (DAT_fffec62a != '\0') {
      DAT_fffec629 = 0;
      DAT_fffec62a = '\0';
    }
  }
  else {
    bVar3 = 0xff;
    if (param_5 < 0x56) {
      bVar3 = param_5 * '\x03';
    }
    bVar1 = 2;
    if (param_2 != '\0') {
      bVar1 = param_3 == '\0';
    }
    bVar2 = bVar3 - bVar1;
    if (bVar3 < bVar1) {
      bVar2 = 0;
    }
    if (bVar2 < 0xd) {
      if (bVar2 == 0) {
        bVar2 = 1;
      }
    }
    else {
      bVar2 = 0xc;
    }
    if (param_6 == '\x02') {
      local_34 = 1;
      bStack_33 = 1;
      bStack_31 = 1;
      bStack_2e = 1;
      bStack_2d = 1;
      bStack_2b = 0;
      bStack_1e = 1;
    }
    else {
      bStack_1e = 2;
      local_34 = 2;
      bStack_33 = 2;
      bStack_31 = 2;
      bStack_2e = 2;
      bStack_2d = 2;
      bStack_2b = 2;
    }
    if (param_6 == '\x01') {
      bStack_28 = 0;
      bStack_27 = 1;
      bStack_25 = 0;
      bStack_22 = 0;
      bStack_21 = 0;
      bStack_20 = 1;
      bStack_1f = 0;
      bStack_1e = 0;
      bVar3 = 0;
    }
    else {
      bStack_28 = local_34;
      bStack_27 = bStack_33;
      bStack_25 = bStack_31;
      bStack_22 = bStack_2e;
      bStack_21 = bStack_2d;
      bStack_20 = 2;
      bStack_1f = bStack_2b;
      bVar3 = 2;
      if (param_6 == '\x02') {
        bVar3 = 1;
      }
    }
    bStack_23 = 2;
    bStack_24 = 2;
    bStack_26 = 2;
    DAT_fffec629 = bStack_28;
    if ((((bVar2 != 1) && (DAT_fffec629 = bStack_27, bVar2 != 2)) &&
        ((DAT_fffec629 = bStack_26, bVar2 != 3 &&
         ((DAT_fffec629 = bStack_25, bVar2 != 4 && (DAT_fffec629 = bStack_24, bVar2 != 5)))))) &&
       ((DAT_fffec629 = bStack_23, bVar2 != 6 &&
        (((((DAT_fffec629 = bStack_22, bVar2 != 7 && (DAT_fffec629 = bStack_21, bVar2 != 8)) &&
           (DAT_fffec629 = bStack_20, bVar2 != 9)) &&
          ((DAT_fffec629 = bStack_1f, bVar2 != 10 && (DAT_fffec629 = bStack_1e, bVar2 != 0xb)))) &&
         (DAT_fffec629 = bVar3, bVar2 != 0xc)))))) {
      DAT_fffec629 = bVar2;
    }
    DAT_fffec62a = '\x01';
  }
  if (param_1 != '\0') {
    *param_7 = DAT_fffec628;
  }
  else {
    *param_7 = DAT_fffec629;
  }
  return;
}

