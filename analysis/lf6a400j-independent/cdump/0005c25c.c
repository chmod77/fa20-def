
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0005c25c(void)

{
  undefined4 uVar1;
  byte local_1c [4];
  short asStack_18 [2];
  uint uStack_14;
  
  if (((DAT_fffef686 == '\0') || (DAT_fffef686 == '\x03')) || (DAT_fffef686 == '\x06')) {
    FUN_0005d944();
    DAT_fffef456 = 0;
    if (DAT_fffef686 == '\0') {
      FUN_0005d978(0,0xfffef45c,2);
      DAT_fffef453 = 0;
      DAT_fffef689 = 0x28;
      DAT_fffef686 = '\x01';
    }
    else if (DAT_fffef686 == '\x03') {
      FUN_0005d978(10,&DAT_fffef69e,2);
      DAT_fffef689 = 0x28;
      DAT_fffef686 = '\x04';
    }
    else if (DAT_fffef686 == '\x06') {
      FUN_0005d978(10,0,0);
      DAT_fffef689 = 0x28;
      DAT_fffef68a = '\0';
      DAT_fffef686 = '\a';
    }
    return 2;
  }
  uVar1 = 2;
  if (DAT_fffef686 == '\x01') {
    uStack_14 = FUN_0005d9a4(local_1c,&DAT_fffef68c,2);
    uStack_14 = uStack_14 & 0xff;
    if (uStack_14 == 0) {
      if (((int)(char)local_1c[0] & 0xf0U) == 0) {
        if ((DAT_fffef69c != '\0') && (_DAT_fffef69e == _DAT_fffef68c)) {
          DAT_fffef456 = DAT_fffef456 | 1;
          goto LAB_0005c316;
        }
        DAT_fffef686 = '\x06';
      }
      else if (((local_1c[0] & 0xf0) == 0x80) || ((local_1c[0] & 0xf0) == 0x90)) {
        if (DAT_fffef69c == '\0') {
          DAT_fffef456 = DAT_fffef456 | 3;
        }
        else {
          if (_DAT_fffef69e == _DAT_fffef68c) {
            DAT_fffef686 = '\x03';
            goto LAB_0005c47a;
          }
          DAT_fffef456 = DAT_fffef456 | 2;
        }
LAB_0005c316:
        FUN_0005d978(8,0,0);
        DAT_fffef686 = '\x02';
      }
      else {
LAB_0005c3d0:
        uStack_14 = 1;
      }
    }
LAB_0005c47a:
    if (uStack_14 == 1) {
      FUN_0005d99c();
    }
  }
  else {
    if (DAT_fffef686 != '\x02') {
      if (DAT_fffef686 == '\x04') {
        uStack_14 = FUN_0005d9a4(local_1c,0,0);
        uStack_14 = uStack_14 & 0xff;
        if (uStack_14 == 0) {
          if (((int)(char)local_1c[0] & 0xf0U) != 0) goto LAB_0005c3d0;
          DAT_fffef456 = DAT_fffef456 | 1;
          FUN_0005d978(8,0,0);
          DAT_fffef686 = '\x05';
        }
        goto LAB_0005c47a;
      }
      if (DAT_fffef686 != '\x05') {
        if (DAT_fffef686 == '\a') {
          if (DAT_fffef68a == '\0') {
            uStack_14 = FUN_0005d9a4(local_1c,&DAT_fffef68c,2);
            uStack_14 = uStack_14 & 0xff;
            if (uStack_14 == 0) {
              FUN_0005d944();
              FUN_0005d978(10,0,0);
              DAT_fffef689 = 0x28;
              if (DAT_fffef68a != -1) {
                DAT_fffef68a = DAT_fffef68a + '\x01';
              }
            }
          }
          else {
            uStack_14 = FUN_0005d9a4(local_1c,asStack_18,2);
            uStack_14 = uStack_14 & 0xff;
            if (uStack_14 == 0) {
              if (_DAT_fffef68c == asStack_18[0]) {
                _DAT_fffef66e = 0x8000;
                _DAT_fffef670 = _DAT_fffef68c;
                _DAT_fffef672 = FUN_0005e33a(&DAT_fffef66e,&DAT_fffef670);
                DAT_fffef686 = '\b';
                _DAT_fffef68e = _DAT_fffef672;
              }
              else {
                uStack_14 = 1;
                DAT_fffef68a = _DAT_fffef68c == asStack_18[0];
              }
            }
          }
          goto LAB_0005c47a;
        }
        if (DAT_fffef686 == '\b') {
          DAT_fffef686 = '\t';
          goto LAB_0005c4ee;
        }
        if (DAT_fffef686 == '\t') {
          if (DAT_fffef690 == '\0') {
            if (DAT_fffef696 == '\0') {
              DAT_fffef69c = '\x01';
              _DAT_fffef69e = _DAT_fffef68c;
              DAT_fffef456 = DAT_fffef456 | 1;
            }
            else {
              _DAT_ffff3144 = _DAT_ffff3144 | 0x2000000;
            }
            FUN_0005d978(8,0,0);
            DAT_fffef686 = '\n';
          }
          goto LAB_0005c4ee;
        }
        uVar1 = 1;
        if (DAT_fffef686 != '\n') goto LAB_0005c4ee;
      }
    }
    uVar1 = FUN_0005d88a();
  }
LAB_0005c4ee:
  if ((DAT_fffef688 == '\x01') && ((ushort)((ushort)DAT_fffef689 * 0x32) < _DAT_fffef678)) {
    _DAT_ffff3144 = _DAT_ffff3144 | 0x20000000;
    DAT_fffef456 = DAT_fffef456 | 4;
    uVar1 = 1;
  }
  return uVar1;
}

