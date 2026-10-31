
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_0005d38c(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  int iVar8;
  char local_24 [8];
  byte abStack_1c [4];
  char *pcStack_18;
  
  pcVar6 = local_24;
  cVar4 = '\x02';
  cVar3 = '\0';
  if ((_DAT_fffef64c & 0x100) == 0) {
    DAT_fffef453 = 0;
    return '\0';
  }
  if (DAT_fffef686 == 0) {
    DAT_fffef453 = 0;
    pcStack_18 = &DAT_fffef662;
    _DAT_fffef662 = 0;
    _DAT_fffef668 = 0;
    FUN_0005defe(&DAT_ffff314d,&DAT_fffef664);
    _DAT_ffff3508 = 0;
    FUN_0005de76(&DAT_0002c0a8,0xfffef6aa,5);
    _DAT_ffff3502 = _DAT_fffef664;
    _DAT_ffff3504 = _DAT_fffef666;
    _DAT_ffff3506 = _DAT_fffef668;
    if ((_DAT_fffef680 & 1) == 0) {
      iVar8 = 2;
    }
    else {
      iVar8 = 0;
      pcVar5 = pcStack_18 + 2;
      pcVar6 = &DAT_0002c0a8;
      for (bVar7 = 0; bVar7 < 5; bVar7 = bVar7 + 1) {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        if (cVar1 != cVar2) {
          iVar8 = 1;
        }
      }
      if (iVar8 == 1) {
        pcStack_18 = pcStack_18 + 2;
        pcVar5 = &DAT_0002c0a3;
        pcVar6 = pcStack_18;
        for (bVar7 = 0; bVar7 < 5; bVar7 = bVar7 + 1) {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          if (cVar1 != cVar2) {
            iVar8 = 2;
          }
        }
      }
    }
    if (iVar8 == 2) {
      FUN_001403b4(1,4);
      DAT_fffef686 = 8;
    }
    else {
      FUN_0005d2ee();
    }
    goto LAB_0005d7c0;
  }
  if (DAT_fffef686 == 8) {
    FUN_00140424(1,4);
    DAT_fffef686 = 1;
    goto LAB_0005d7c0;
  }
  if (DAT_fffef686 == 1) {
    if ((DAT_ffff1cd4 & 0x20) == 0) {
      FUN_0005d944();
      FUN_0005d978(7,0,0);
      DAT_fffef686 = 2;
    }
    else {
      if ((((_DAT_fffef680 & 1) == 0) || (DAT_fffef6b8 != '\0')) &&
         ((_DAT_ffff3144 = _DAT_ffff3144 | 0x2000000, (_DAT_fffef680 & 1) != 0 &&
          (DAT_fffef6b8 != '\0')))) {
        DAT_ffff312d = DAT_ffff312d | 2;
      }
      cVar4 = '\x01';
    }
    goto LAB_0005d7c0;
  }
  if (DAT_fffef686 == 2) {
    cVar3 = FUN_0005d9a4(abStack_1c,local_24,0);
    if (cVar3 != '\0') goto LAB_0005d7c0;
    if (abStack_1c[0] == 1) {
      FUN_0005d978(7,&DAT_fffef664,6);
      DAT_fffef686 = 3;
      goto LAB_0005d7c0;
    }
  }
  else if (DAT_fffef686 == 3) {
    cVar3 = FUN_0005d9a4(abStack_1c,local_24,6);
    if (cVar3 != '\0') goto LAB_0005d7c0;
    if ((abStack_1c[0] & 0xf) == 1) {
      pcVar5 = &DAT_fffef664;
      for (bVar7 = 0; bVar7 < 6; bVar7 = bVar7 + 1) {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        if (cVar1 != cVar2) {
          cVar3 = '\x01';
        }
      }
      if (cVar3 == '\0') {
        FUN_0005d978(0);
        DAT_fffef686 = 4;
        goto LAB_0005d7c0;
      }
      FUN_0005d978(8);
      if (((((_DAT_fffef680 & 1) == 0) || (DAT_fffef6b8 != '\0')) &&
          (_DAT_ffff3144 = _DAT_ffff3144 | 0x40000000, (_DAT_fffef680 & 1) != 0)) &&
         (DAT_fffef6b8 != '\0')) {
        DAT_ffff312d = DAT_ffff312d | 2;
      }
      goto LAB_0005d7b4;
    }
  }
  else {
    if (DAT_fffef686 != 4) {
      if (DAT_fffef686 == 9) {
        DAT_fffef686 = 5;
        goto LAB_0005d7c0;
      }
      if (DAT_fffef686 == 5) {
        if ((DAT_ffff1cd4 & 0x20) == 0) {
          _DAT_fffef66a = FUN_0005e33a(&DAT_fffef662,&DAT_fffef668);
          DAT_fffef686 = 10;
          _DAT_fffef6a8 = _DAT_fffef66a;
          goto LAB_0005d7c0;
        }
        if (((_DAT_fffef680 & 1) != 0) && (DAT_fffef6b8 == '\0')) goto LAB_0005d7c0;
        _DAT_ffff3144 = _DAT_ffff3144 | 0x2000000;
LAB_0005d6da:
        if (((_DAT_fffef680 & 1) != 0) && (DAT_fffef6b8 != '\0')) {
          DAT_ffff312d = DAT_ffff312d | 2;
        }
        goto LAB_0005d7c0;
      }
      if (DAT_fffef686 == 10) {
        DAT_fffef686 = 0xb;
        goto LAB_0005d7c0;
      }
      if (DAT_fffef686 == 0xb) {
        DAT_fffef686 = 0xc;
        goto LAB_0005d7c0;
      }
      if (DAT_fffef686 != 0xc) {
        cVar4 = FUN_0005d88a();
        goto LAB_0005d7c0;
      }
      if ((DAT_ffff1cd4 & 0x20) == 0) {
        _DAT_ffff3508 = 0x8000;
        FUN_001403b4(4,1);
        FUN_0005de76(&DAT_fffef664,0xfffef6aa,5);
        if ((_DAT_fffef680 & 1) != 0) {
          DAT_ffff313c = 1;
          DAT_fffef675 = 1;
          DAT_ffff313b = 0;
          DAT_ffff312d = DAT_ffff312d & 0xf9 | 1;
          _DAT_ffff3144 = _DAT_ffff3144 & 0xffffff;
          DAT_ffff313d = 0;
          DAT_ffff313e = 0;
        }
      }
      else if (((((_DAT_fffef680 & 1) == 0) || (DAT_fffef6b8 != '\0')) &&
               (_DAT_ffff3144 = _DAT_ffff3144 | 0x2000000, (_DAT_fffef680 & 1) != 0)) &&
              (DAT_fffef6b8 != '\0')) {
        DAT_ffff312d = DAT_ffff312d | 2;
      }
      FUN_0005d978(8,0,0);
LAB_0005d7b4:
      DAT_fffef686 = 6;
      goto LAB_0005d7c0;
    }
    cVar3 = FUN_0005d9a4(abStack_1c,local_24,0);
    if (cVar3 != '\0') goto LAB_0005d7c0;
    if (abStack_1c[0] == 0) {
      _DAT_fffef662 = 0x8000;
      DAT_fffef686 = 9;
      goto LAB_0005d7c0;
    }
    if (abStack_1c[0] == 0x40) {
      cVar4 = '\x01';
      if (((_DAT_fffef680 & 1) != 0) && (DAT_fffef6b8 == '\0')) goto LAB_0005d7c0;
      goto LAB_0005d6da;
    }
  }
  cVar3 = '\x01';
LAB_0005d7c0:
  if ((1 < DAT_fffef686) && (DAT_fffef686 < 5)) {
    if (cVar3 == '\x01') {
      FUN_0005d99c();
    }
    if ((DAT_fffef688 == '\x01') && (2000 < _DAT_fffef678)) {
      if ((((_DAT_fffef680 & 1) == 0) || (DAT_fffef6b8 != '\0')) &&
         ((_DAT_ffff3144 = _DAT_ffff3144 | 0x20000000, (_DAT_fffef680 & 1) != 0 &&
          (DAT_fffef6b8 != '\0')))) {
        DAT_ffff312d = DAT_ffff312d | 2;
      }
      cVar4 = '\x01';
    }
  }
  if (cVar4 != '\x02') {
    FUN_0005d93c();
  }
  return cVar4;
}

