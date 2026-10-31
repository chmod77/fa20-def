
uint FUN_00005d24(uint param_1)

{
  undefined2 uVar2;
  uint uVar1;
  char cVar3;
  
  param_1 = param_1 & 0xff;
  if (param_1 != 1) {
    if (param_1 == 2) {
      uVar1 = FUN_0000718c();
      uVar1 = uVar1 & 0xff;
      if (uVar1 == 4) {
        FUN_00007128();
      }
      else if (uVar1 == 6) {
        FUN_00006f4c();
      }
      else if (uVar1 == 10) {
        FUN_00006c54();
      }
      else {
        if (uVar1 != 0xf) {
          return uVar1;
        }
        FUN_00006dbc();
      }
      uVar1 = FUN_0000718c();
      if ((uVar1 & 0xff) != 0x15) {
        return uVar1 & 0xff;
      }
      uVar1 = thunk_FUN_00005008();
      return uVar1;
    }
    if (param_1 == 3) {
      uVar1 = FUN_0000718c();
      uVar1 = uVar1 & 0xff;
      if (uVar1 == 0x14) {
        thunk_FUN_00007478();
        uVar1 = FUN_0000718c();
        uVar1 = uVar1 & 0xff;
        if (uVar1 == 0x15) {
          uVar1 = thunk_FUN_00005008();
          return uVar1;
        }
      }
      return uVar1;
    }
    if (param_1 == 4) {
      uVar2 = FUN_00001550(0xf0);
      FUN_00005eda();
      uVar1 = FUN_00001550(uVar2);
      return uVar1;
    }
    if (param_1 == 5) {
      uVar1 = FUN_00005fb0();
      return uVar1;
    }
    if (param_1 != 6) {
      if (param_1 != 7) {
        return param_1;
      }
      uVar1 = FUN_00006092();
      return uVar1;
    }
    uVar1 = FUN_00006034();
    return uVar1;
  }
  uVar1 = FUN_0000718c();
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    FUN_00006f90();
    uVar1 = FUN_0000718c();
    if ((uVar1 & 0xff) != 0xb) {
      return uVar1 & 0xff;
    }
    FUN_00006fec();
LAB_00005dd8:
    cVar3 = FUN_0000718c();
    if (cVar3 != '\f') {
      cVar3 = FUN_0000718c();
      if (cVar3 != '\r') goto LAB_00005e3c;
LAB_00005e14:
      FUN_00006edc();
      cVar3 = FUN_0000718c();
      if (cVar3 == '\x0e') {
        uVar1 = FUN_00006d98();
        return uVar1;
      }
      goto LAB_00005e3c;
    }
  }
  else {
    if (uVar1 == 7) {
      FUN_00006cf4();
      goto LAB_00005e3c;
    }
    if (uVar1 == 0x10) {
      FUN_00006e4c();
      goto LAB_00005dd8;
    }
    if (uVar1 != 0x11) {
      return uVar1;
    }
    FUN_00006b60();
    cVar3 = FUN_0000718c();
    if (cVar3 != '\f') {
      cVar3 = FUN_0000718c();
      if (cVar3 != '\r') {
        cVar3 = FUN_0000718c();
        if (cVar3 == '\x12') {
          FUN_00006af4();
        }
        goto LAB_00005e3c;
      }
      goto LAB_00005e14;
    }
  }
  FUN_000070c4();
LAB_00005e3c:
  uVar1 = FUN_0000718c();
  if ((uVar1 & 0xff) != 0x15) {
    return uVar1 & 0xff;
  }
  uVar1 = thunk_FUN_00005008();
  return uVar1;
}

