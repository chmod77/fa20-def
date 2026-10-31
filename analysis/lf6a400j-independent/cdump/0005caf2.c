
undefined4 FUN_0005caf2(char param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  char *pcVar4;
  char cVar5;
  
  cVar5 = -1;
  if (param_1 == '\0') {
    cVar1 = '\0';
  }
  else if (param_1 == '\x01') {
    cVar1 = '\x01';
  }
  else {
    cVar1 = -0x80;
    cVar5 = -0x80;
    if (DAT_fffef453 == 'U') {
      cVar1 = -0x7f;
    }
    else if (DAT_fffef453 == 'f') {
      cVar1 = -0x7e;
    }
    else if (DAT_fffef453 == '3') {
      cVar1 = -0x7c;
    }
    else if (DAT_fffef453 == 'w') {
      cVar1 = -0x7d;
    }
    else if (DAT_fffef453 == -0x78) {
      cVar1 = -0x7b;
    }
    else if (DAT_fffef453 == -0x67) {
      cVar1 = -0x7a;
    }
    else if (DAT_fffef453 == -0x56) {
      cVar1 = -0x79;
    }
    else if (DAT_fffef453 == -0x45) {
      cVar1 = -0x78;
    }
    else if (DAT_fffef453 == -0x44) {
      cVar1 = -0x70;
    }
    else if (DAT_fffef453 == '\x11') {
      cVar1 = -0x77;
    }
    else if (DAT_fffef453 == '\"') {
      cVar1 = -0x76;
    }
    else if (DAT_fffef453 == 'D') {
      cVar1 = -0x75;
    }
    else if (DAT_fffef453 == -0x34) {
      cVar1 = -0x74;
    }
    else if (DAT_fffef453 == -0x23) {
      cVar1 = -0x73;
    }
    else if (DAT_fffef453 == -1) {
      cVar1 = -0x72;
    }
    else if (DAT_fffef453 == -0x12) {
      cVar1 = -0x71;
    }
  }
  ppuVar3 = &PTR_DAT_00163d18;
  if (DAT_ffff313b == '\0') {
    ppuVar3 = &PTR_DAT_00163b8c;
  }
  else if (DAT_ffff313b == '\x01') {
    ppuVar3 = &PTR_DAT_00163c5c;
  }
  uVar2 = 0;
  for (; (*(char *)(ppuVar3 + 1) != -1 && (*(char *)(ppuVar3 + 1) != DAT_fffef674));
      ppuVar3 = ppuVar3 + 2) {
  }
  if (*(char *)(ppuVar3 + 1) == DAT_fffef674) {
    for (pcVar4 = *ppuVar3; ((*pcVar4 != -1 && (*pcVar4 != cVar1)) && (*pcVar4 != cVar5));
        pcVar4 = pcVar4 + 2) {
    }
    if ((*pcVar4 != -1) && (DAT_fffef674 != pcVar4[1])) {
      DAT_fffef674 = pcVar4[1];
      uVar2 = 1;
    }
  }
  return uVar2;
}

