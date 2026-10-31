
/* WARNING: Removing unreachable block (ram,0x0005ba40) */
/* WARNING: Removing unreachable block (ram,0x0005ba56) */
/* WARNING: Removing unreachable block (ram,0x0005ba5e) */
/* WARNING: Removing unreachable block (ram,0x0005baea) */
/* WARNING: Removing unreachable block (ram,0x0005bafa) */
/* WARNING: Removing unreachable block (ram,0x0005bf6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005ade8(void)

{
  char cVar2;
  byte bVar3;
  undefined4 uVar1;
  ushort uVar4;
  uint uVar5;
  byte local_68 [4];
  char acStack_64 [4];
  byte abStack_60 [4];
  undefined1 auStack_5c [4];
  byte abStack_58 [4];
  short asStack_54 [2];
  undefined1 local_50 [8];
  undefined1 uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined1 uStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  if (_DAT_fffef678 != 0xffff) {
    _DAT_fffef678 = _DAT_fffef678 + 1;
  }
  if (DAT_fffef67a != -1) {
    DAT_fffef67a = DAT_fffef67a + '\x01';
  }
  if (_DAT_fffef67c != 0) {
    _DAT_fffef67c = _DAT_fffef67c + -1;
  }
  if (DAT_fffef67e == '\0') {
    FUN_0005da20();
  }
  if (DAT_fffef67f != '\0') {
    DAT_fffef67f = 0;
    return;
  }
  DAT_fffef67f = 1;
  if ((((_DAT_fffef680 & 2) == 0) || ((_DAT_fffef65c & 0x40) == 0)) || (DAT_fffef67e != '\0'))
  goto LAB_0005c164;
  _DAT_fffef6d0 = _DAT_fffef6d0 | 0x1000;
  if ((DAT_fffef674 == '\v') && (DAT_ffff313c != '\0')) {
    DAT_fffef674 = '\t';
    FUN_0005cae6();
    _DAT_fffef6d0 = _DAT_fffef6d0 | 0x2000;
  }
  if ((DAT_fffef675 != '\0') && (7 < DAT_ffff299c)) {
    if (DAT_ffff313d != 0xff) {
      DAT_ffff313d = DAT_ffff313d + 1;
    }
    if (DAT_ffff313e != 0xff) {
      DAT_ffff313e = DAT_ffff313e + 1;
    }
    uVar4 = _DAT_fffef6d0 | 0x4000;
    if (((_DAT_fffef65c & 0x40) != 0) && ((_DAT_fffef680 & 2) != 0)) {
      uVar4 = _DAT_fffef6d0 | 0xc000;
      if ((_DAT_fffef680 & 1) == 0) {
        if (DAT_ffff313d < 5) {
          _DAT_fffef684 = 0x6a4;
        }
        else {
LAB_0005af3e:
          _DAT_fffef684 = 5000;
        }
      }
      else {
        if (4 < DAT_ffff313e) goto LAB_0005af3e;
        _DAT_fffef684 = 0x6a4;
      }
    }
    _DAT_fffef6d0 = uVar4;
    DAT_fffef675 = '\0';
  }
  uStack_48 = 2;
  bVar3 = 2;
  while (bVar3 != 0xff) {
    _DAT_fffef6d2 = _DAT_fffef6d2 | 1;
    cVar2 = FUN_0005caf2();
    if (cVar2 != '\0') {
      FUN_0005cae6();
      _DAT_fffef6d2 = _DAT_fffef6d2 | 2;
    }
    bVar3 = 2;
    if (DAT_fffef674 == '\0') {
      bVar3 = FUN_0005ccae();
      _DAT_fffef6d2 = _DAT_fffef6d2 | 4;
      uVar4 = _DAT_fffef6dc;
    }
    else if (DAT_fffef674 == '\x01') {
      if (DAT_fffef686 == 0) {
        DAT_fffef676 = '\x01';
        _DAT_fffef6d2 = _DAT_fffef6d2 | 8;
        FUN_0005d944();
        FUN_0005d978(3,0,0);
        DAT_fffef453 = 0;
        DAT_fffef455 = DAT_fffef455 & 0x6f;
        DAT_fffef686 = 1;
        _DAT_fffef6d2 = _DAT_fffef6d2 | 0x10;
      }
      else {
        if (DAT_fffef686 == 1) {
          _DAT_fffef6d2 = _DAT_fffef6d2 | 0x28;
          cVar2 = FUN_0005d9a4(local_68,0,0);
          if (cVar2 == '\0') {
            if (local_68[0] == 1) {
              FUN_0005d978(6,0,0);
              DAT_fffef686 = 2;
            }
            else {
              cVar2 = '\x01';
            }
            _DAT_fffef6d2 = _DAT_fffef6d2 | 0x40;
          }
          if (cVar2 == '\x01') {
            FUN_0005d99c();
            _DAT_fffef6d2 = _DAT_fffef6d2 | 0x80;
          }
        }
        else if (DAT_fffef686 == 2) {
          _DAT_fffef6d2 = _DAT_fffef6d2 | 0x128;
          cVar2 = FUN_0005d9a4(local_68,0,0);
          if (cVar2 == '\0') {
            if (local_68[0] == 0) {
              _DAT_fffef6d2 = _DAT_fffef6d2 | 0x200;
              FUN_0005d83a();
              DAT_ffff313c = '\x01';
              DAT_fffef675 = '\x01';
              bVar3 = 0;
              DAT_ffff313b = '\0';
              DAT_ffff313d = 0;
              DAT_ffff313e = 0;
              _DAT_fffef6d2 = _DAT_fffef6d2 | 0x400;
            }
            else if ((((local_68[0] == 0x10) || (local_68[0] == 0x30)) || (local_68[0] == 0x40)) ||
                    ((local_68[0] == 0x50 || (local_68[0] == 0x60)))) {
              bVar3 = 1;
              _DAT_fffef6d2 = _DAT_fffef6d2 | 0xa00;
            }
            else if ((local_68[0] & 0xf) == 2) {
              DAT_fffef455 = DAT_fffef455 | 0x10;
              bVar3 = 1;
              _DAT_fffef6d2 = _DAT_fffef6d2 | 0x1200;
            }
            else {
              _DAT_fffef6d2 = _DAT_fffef6d2 | 0x2200;
              cVar2 = '\x01';
            }
          }
          if (cVar2 == '\x01') {
            FUN_0005d99c();
            _DAT_fffef6d2 = _DAT_fffef6d2 | 0x4000;
          }
        }
        else {
          bVar3 = 1;
          _DAT_fffef6d2 = _DAT_fffef6d2 | 0x28;
        }
        if ((DAT_fffef688 == '\x01') && (5000 < _DAT_fffef678)) {
          _DAT_ffff3144 = _DAT_ffff3144 | 0x20000000;
          bVar3 = 1;
          _DAT_fffef6d2 = _DAT_fffef6d2 | 0x8000;
        }
      }
      uVar4 = _DAT_fffef6dc;
      if (bVar3 != 2) {
        DAT_fffef455 = DAT_fffef455 | 0x80;
        FUN_0005d93c();
        _DAT_fffef6d4 = _DAT_fffef6d4 | 1;
        uVar4 = _DAT_fffef6dc;
      }
    }
    else if (DAT_fffef674 == '\x02') {
      _DAT_fffef6d4 = _DAT_fffef6d4 | 2;
      bVar3 = FUN_0005d842();
      uVar4 = _DAT_fffef6dc;
      if (bVar3 != 2) {
        DAT_fffef455 = DAT_fffef455 & 0x7f;
        _DAT_fffef6d4 = _DAT_fffef6d4 | 4;
      }
    }
    else if (DAT_fffef674 == '\x03') {
      if (DAT_fffef686 == 0) {
        _DAT_fffef6d4 = _DAT_fffef6d4 | 8;
        FUN_0005d944();
        FUN_0005d978(4,0,0);
        DAT_fffef453 = 0;
        DAT_fffef455 = DAT_fffef455 & 0xbf;
        DAT_fffef686 = 1;
        _DAT_fffef6d4 = _DAT_fffef6d4 | 0x10;
      }
      else {
        if (DAT_fffef686 == 1) {
          _DAT_fffef6d4 = _DAT_fffef6d4 | 0x28;
          uStack_28 = 0;
          uStack_44 = FUN_0005d9a4(acStack_64,0,0);
          uStack_44 = uStack_44 & 0xff;
          if (uStack_44 == 0) {
            if (acStack_64[0] == '\x01') {
              FUN_0005d978(0,uStack_28);
              DAT_fffef686 = 2;
            }
            else {
              uStack_44 = 1;
            }
            _DAT_fffef6d4 = _DAT_fffef6d4 | 0x40;
          }
          if (uStack_44 == 1) {
            FUN_0005d99c();
            _DAT_fffef6d4 = _DAT_fffef6d4 | 0x80;
          }
        }
        else if (DAT_fffef686 == 2) {
          _DAT_fffef6d4 = _DAT_fffef6d4 | 0x108;
          uStack_44 = FUN_0005d9a4(acStack_64,0,0);
          uStack_44 = uStack_44 & 0xff;
          if (uStack_44 == 0) {
            if (acStack_64[0] == '\0') {
              FUN_0005d83a();
              bVar3 = 0;
            }
            else if (acStack_64[0] == '@') {
              bVar3 = 1;
            }
            else {
              uStack_44 = 1;
            }
            _DAT_fffef6d4 = _DAT_fffef6d4 | 0x200;
          }
          if (uStack_44 == 1) {
            FUN_0005d99c();
            _DAT_fffef6d4 = _DAT_fffef6d4 | 0x400;
          }
        }
        else {
          bVar3 = 1;
          _DAT_fffef6d4 = _DAT_fffef6d4 | 0x808;
        }
        if ((DAT_fffef688 == '\x01') && (2000 < _DAT_fffef678)) {
          _DAT_ffff3144 = _DAT_ffff3144 | 0x20000000;
          bVar3 = 1;
          _DAT_fffef6d4 = _DAT_fffef6d4 | 0x1000;
        }
      }
      uVar4 = _DAT_fffef6dc;
      if (bVar3 != 2) {
        DAT_fffef455 = DAT_fffef455 | 0x40;
        FUN_0005d93c();
        _DAT_fffef6d4 = _DAT_fffef6d4 | 0x2000;
        uVar4 = _DAT_fffef6dc;
      }
    }
    else if (DAT_fffef674 == '\x04') {
      _DAT_fffef6d4 = _DAT_fffef6d4 | 0x4000;
      if (DAT_fffef686 == 0) {
        FUN_0005d944();
        uVar1 = 4;
        if ((_DAT_fffef64c & 0x100) != 0) {
          uVar1 = 3;
        }
        FUN_0005d978(4,0xfffef44f,uVar1);
        DAT_fffef453 = 0;
        DAT_fffef455 = DAT_fffef455 & 0xdf;
        DAT_fffef686 = 1;
        bVar3 = 2;
        _DAT_fffef6d4 = _DAT_fffef6d4 | 0x8000;
      }
      else {
        if (DAT_fffef686 == 1) {
          _DAT_fffef6d6 = _DAT_fffef6d6 | 3;
          uStack_28 = 0;
          uStack_40 = FUN_0005d9a4(abStack_60,0,0);
          uStack_40 = uStack_40 & 0xff;
          if (uStack_40 == 0) {
            if (abStack_60[0] == 1) {
              FUN_0005d978(0,uStack_28);
              DAT_fffef686 = 2;
            }
            else {
              uStack_40 = 1;
            }
            _DAT_fffef6d6 = _DAT_fffef6d6 | 4;
          }
          if (uStack_40 == 1) {
            FUN_0005d99c();
            _DAT_fffef6d6 = _DAT_fffef6d6 | 8;
          }
        }
        else if (DAT_fffef686 == 2) {
          uStack_3c = 4;
          if ((_DAT_fffef64c & 0x100) != 0) {
            uStack_3c = 3;
          }
          _DAT_fffef6d6 = _DAT_fffef6d6 | 0x11;
          uStack_40 = FUN_0005d9a4(abStack_60,auStack_5c,uStack_3c);
          uStack_40 = uStack_40 & 0xff;
          if (uStack_40 == 0) {
            _DAT_fffef6d6 = _DAT_fffef6d6 | 0x20;
            if ((abStack_60[0] & 0xf) == 0) {
              FUN_0005de76(auStack_5c,0xfffef44b,uStack_3c);
              bVar3 = 0;
            }
            else {
              uStack_40 = 1;
            }
          }
          if (uStack_40 == 1) {
            FUN_0005d99c();
            _DAT_fffef6d6 = _DAT_fffef6d6 | 0x40;
          }
        }
        else {
          bVar3 = 1;
          _DAT_fffef6d6 = _DAT_fffef6d6 | 1;
        }
        if ((DAT_fffef688 == '\x01') && (2000 < _DAT_fffef678)) {
          _DAT_ffff3144 = _DAT_ffff3144 | 0x20000000;
          bVar3 = 1;
          _DAT_fffef6d6 = _DAT_fffef6d6 | 0x80;
        }
      }
      uVar4 = _DAT_fffef6dc;
      if (bVar3 != 2) {
        DAT_fffef455 = DAT_fffef455 | 0x20;
        FUN_0005d93c();
        _DAT_fffef6d6 = _DAT_fffef6d6 | 0x100;
        uVar4 = _DAT_fffef6dc;
      }
    }
    else if (DAT_fffef674 == '\x05') {
      _DAT_fffef6d6 = _DAT_fffef6d6 | 0x200;
      bVar3 = FUN_0005d842();
      uVar4 = _DAT_fffef6dc;
      if (bVar3 != 2) {
        DAT_fffef455 = DAT_fffef455 & 0xbf;
        _DAT_fffef6d6 = _DAT_fffef6d6 | 0x400;
      }
    }
    else if (DAT_fffef674 == '\x06') {
      if ((DAT_fffef686 == 0) || (DAT_fffef686 == 3)) {
        _DAT_fffef6d6 = _DAT_fffef6d6 | 0x1800;
        if (DAT_fffef686 == 0) {
          DAT_fffef455 = DAT_fffef455 | 1;
          FUN_0005d944();
          FUN_0005d978(5,0,0);
          DAT_fffef453 = 0;
          DAT_fffef686 = 1;
          DAT_fffef689 = 0x28;
          _DAT_fffef6d6 = _DAT_fffef6d6 | 0x2000;
        }
        else if (DAT_fffef686 == 3) {
          FUN_0005d978(10,0,0);
          DAT_fffef689 = 0x28;
          DAT_fffef68a = '\0';
          DAT_fffef686 = 4;
        }
        bVar3 = 2;
      }
      else {
        uVar4 = _DAT_fffef6d6 | 0x4800;
        if (DAT_fffef686 == 1) {
          _DAT_fffef6d6 = _DAT_fffef6d6 | 0xc800;
          uStack_28 = 0;
          uStack_38 = FUN_0005d9a4(abStack_58,0,0);
          uStack_38 = uStack_38 & 0xff;
          if (uStack_38 == 0) {
            if (abStack_58[0] == 1) {
              FUN_0005d978(0,uStack_28);
              DAT_fffef686 = 2;
            }
            else {
              uStack_38 = 1;
            }
            _DAT_fffef6d8 = _DAT_fffef6d8 | 1;
          }
          uVar4 = _DAT_fffef6d8;
          if (uStack_38 == 1) {
            FUN_0005d99c();
            uVar4 = _DAT_fffef6d8 | 2;
          }
        }
        else {
          _DAT_fffef6d6 = uVar4;
          if (DAT_fffef686 == 2) {
            cVar2 = FUN_0005d9a4(abStack_58,0,0);
            uVar4 = _DAT_fffef6d8 | 4;
            if (cVar2 == '\0') {
              if ((abStack_58[0] & 0xf) == 0) {
                if ((_DAT_fffef64c & 0x2000) == 0) {
                  bVar3 = 0;
                }
                else {
                  DAT_fffef686 = 3;
                }
              }
              else {
                cVar2 = '\x01';
              }
              uVar4 = _DAT_fffef6d8 | 0xc;
            }
            _DAT_fffef6d8 = uVar4;
            uVar4 = _DAT_fffef6d8;
            if (cVar2 == '\x01') {
              FUN_0005d99c();
              uVar4 = _DAT_fffef6d8 | 0x10;
            }
          }
          else if (DAT_fffef686 == 4) {
            if (DAT_fffef68a == '\0') {
              _DAT_fffef6d8 = _DAT_fffef6d8 | 0x60;
              uStack_38 = FUN_0005d9a4(abStack_58,&DAT_fffef68c,2);
              uStack_38 = uStack_38 & 0xff;
              if (uStack_38 == 0) {
                FUN_0005d944();
                FUN_0005d978(10,0,0);
                DAT_fffef689 = 0x28;
                if (DAT_fffef68a != -1) {
                  DAT_fffef68a = DAT_fffef68a + '\x01';
                }
                _DAT_fffef6d8 = _DAT_fffef6d8 | 0x80;
              }
            }
            else {
              _DAT_fffef6d8 = _DAT_fffef6d8 | 0x20;
              uStack_38 = FUN_0005d9a4(abStack_58,asStack_54,2);
              uStack_38 = uStack_38 & 0xff;
              _DAT_fffef6d8 = _DAT_fffef6d8 | 0x100;
              if (uStack_38 == 0) {
                if (_DAT_fffef68c == asStack_54[0]) {
                  _DAT_fffef66e = 0x8000;
                  _DAT_fffef670 = _DAT_fffef68c;
                  _DAT_fffef672 = FUN_0005e33a(&DAT_fffef66e,&DAT_fffef670);
                  DAT_fffef686 = 5;
                  _DAT_fffef68e = _DAT_fffef672;
                }
                else {
                  DAT_fffef68a = '\0';
                  uStack_38 = 1;
                }
                _DAT_fffef6d8 = _DAT_fffef6d8 | 0x200;
              }
            }
            uVar4 = _DAT_fffef6d8;
            if (uStack_38 == 1) {
              FUN_0005d99c();
              uVar4 = _DAT_fffef6d8 | 0x400;
            }
          }
          else if (DAT_fffef686 == 5) {
            DAT_fffef686 = 6;
            uVar4 = _DAT_fffef6d8 | 0x800;
          }
          else if (DAT_fffef686 == 6) {
            uVar4 = _DAT_fffef6d8 | 0x1000;
            if (DAT_fffef690 == '\0') {
              uStack_28 = 0;
              if (DAT_fffef696 == '\0') {
                DAT_fffef69c = 1;
                _DAT_fffef69e = _DAT_fffef68c;
                DAT_fffef456 = DAT_fffef456 | 1;
                _DAT_fffef6d8 = _DAT_fffef6d8 | 0x7000;
              }
              else {
                _DAT_ffff3144 = _DAT_ffff3144 | 0x2000000;
                _DAT_fffef6d8 = _DAT_fffef6d8 | 0x3000;
              }
              FUN_0005d978(8,0,0);
              DAT_fffef686 = 7;
              uVar4 = _DAT_fffef6d8;
            }
          }
          else if (DAT_fffef686 == 7) {
            bVar3 = FUN_0005d88a();
            uVar4 = _DAT_fffef6d8 | 0x8000;
          }
          else {
            bVar3 = 1;
            _DAT_fffef6da = _DAT_fffef6da | 1;
            uVar4 = _DAT_fffef6d8;
          }
        }
        _DAT_fffef6d8 = uVar4;
        if ((DAT_fffef688 == '\x01') && ((ushort)((ushort)DAT_fffef689 * 0x32) < _DAT_fffef678)) {
          _DAT_ffff3144 = _DAT_ffff3144 | 0x20000000;
          if (2 < DAT_fffef686) {
            DAT_fffef456 = DAT_fffef456 | 4;
          }
          bVar3 = 1;
          _DAT_fffef6da = _DAT_fffef6da | 2;
        }
      }
      uVar4 = _DAT_fffef6dc;
      if (bVar3 != 2) {
        DAT_fffef455 = DAT_fffef455 & 0xfe;
        FUN_0005d93c();
        _DAT_fffef6da = _DAT_fffef6da | 4;
        uVar4 = _DAT_fffef6dc;
      }
    }
    else if (DAT_fffef674 == '\a') {
      _DAT_fffef6da = _DAT_fffef6da | 8;
      if (DAT_fffef686 == 0) {
        FUN_0005d93c();
        DAT_fffef453 = 0;
        iStack_34 = -0x8e0;
        _DAT_fffff730 = _DAT_fffff730 & 0xf7ff | 0x400;
        _DAT_fffff732 = _DAT_fffff732 & 0xffaf;
        DAT_fffef6a0 = 0;
        DAT_fffef6a1 = 0;
        FUN_00001550(0xf0);
        *(ushort *)(iStack_34 + 0x18) = *(ushort *)(iStack_34 + 0x18) | 0x400;
        do {
        } while( true );
      }
      if (DAT_fffef6a1 != 0xff) {
        DAT_fffef6a1 = DAT_fffef6a1 + 1;
      }
      if (4 < DAT_fffef6a1) {
        DAT_fffef6a1 = 0;
        if (DAT_fffef6a0 != 0xff) {
          DAT_fffef6a0 = DAT_fffef6a0 + 1;
        }
        if (DAT_fffef6a0 < 10) {
          FUN_00001550(0xf0);
          do {
          } while( true );
        }
        if (DAT_fffef6a0 < 0x14) {
          iStack_2c = -0x8e0;
          iStack_24 = -0xbe0;
          if (DAT_fffef6a0 == 10) {
            DAT_fffef6a2 = 0;
          }
          uVar1 = FUN_00001550(0xf0);
          *(ushort *)(iStack_2c + 0x18) = *(ushort *)(iStack_2c + 0x18) & 0xfbff;
          do {
          } while ((uint)(*(int *)(iStack_24 + 0x10) - *(int *)(iStack_24 + 0x10)) < 0x5a);
          FUN_00001550(uVar1);
          if ((*(ushort *)(iStack_2c + 0x18) & 0x800) != 0) {
            DAT_fffef6a2 = DAT_fffef6a2 + 1;
          }
        }
        else {
          bVar3 = 0;
          DAT_fffef454 = 0;
        }
        _DAT_fffef6da = _DAT_fffef6da | 0x20;
      }
      if (4 < DAT_fffef6a2) {
        DAT_fffef454 = 1;
        if (DAT_fffef6a0 < 10) {
          DAT_fffef454 = 2;
        }
        bVar3 = 1;
        _DAT_fffef6da = _DAT_fffef6da | 0x40;
      }
      uVar4 = _DAT_fffef6dc;
      if (bVar3 != 2) {
        _DAT_fffff732 = _DAT_fffff732 | 0x50;
        FUN_0005d93c();
        _DAT_fffef6da = _DAT_fffef6da | 0x80;
        uVar4 = _DAT_fffef6dc;
      }
    }
    else if (DAT_fffef674 == '\f') {
      _DAT_fffef6da = _DAT_fffef6da | 0x100;
      bVar3 = FUN_0005c25c();
      uVar4 = _DAT_fffef6dc;
      if (bVar3 != 2) {
        FUN_0005d93c();
        _DAT_fffef6da = _DAT_fffef6da | 0x200;
        uVar4 = _DAT_fffef6dc;
      }
    }
    else if (DAT_fffef674 == '\r') {
      _DAT_fffef6da = _DAT_fffef6da | 0x400;
      bVar3 = FUN_0005c5a8();
      uVar4 = _DAT_fffef6dc;
      if (bVar3 != 2) {
        FUN_0005d93c();
        _DAT_fffef6da = _DAT_fffef6da | 0x800;
        uVar4 = _DAT_fffef6dc;
      }
    }
    else if (DAT_fffef674 == '\x0e') {
      _DAT_fffef6da = _DAT_fffef6da | 0x1000;
      bVar3 = FUN_0005c6fc();
      uVar4 = _DAT_fffef6dc;
      if (bVar3 != 2) {
        FUN_0005d93c();
        _DAT_fffef6da = _DAT_fffef6da | 0x2000;
        uVar4 = _DAT_fffef6dc;
      }
    }
    else if (DAT_fffef674 == '\x0f') {
      _DAT_fffef6da = _DAT_fffef6da | 0x4000;
      bVar3 = FUN_0005c7e6();
      uVar4 = _DAT_fffef6dc;
      if (bVar3 != 2) {
        FUN_0005d93c();
        _DAT_fffef6da = _DAT_fffef6da | 0x8000;
        uVar4 = _DAT_fffef6dc;
      }
    }
    else if (DAT_fffef674 == '\x10') {
      _DAT_fffef6dc = _DAT_fffef6dc | 1;
      bVar3 = FUN_0005c90a();
      uVar4 = _DAT_fffef6dc;
      if (bVar3 != 2) {
        FUN_0005d93c();
        uVar4 = _DAT_fffef6dc | 2;
      }
    }
    else if (DAT_fffef674 == '\x11') {
      _DAT_fffef6dc = _DAT_fffef6dc | 4;
      bVar3 = FUN_0005c9f0();
      uVar4 = _DAT_fffef6dc;
    }
    else if (DAT_fffef674 == '\x12') {
      _DAT_fffef6dc = _DAT_fffef6dc | 8;
      bVar3 = FUN_0005c9fe();
      uVar4 = _DAT_fffef6dc;
      if (bVar3 != 2) {
        FUN_0005d93c();
        uVar4 = _DAT_fffef6dc | 0x10;
      }
    }
    else if (DAT_fffef674 == '\t') {
      bVar3 = 0;
      uVar4 = _DAT_fffef6dc | 0x20;
      if (DAT_ffff313c != '\0') {
        uVar4 = _DAT_fffef6dc | 0x60;
        bVar3 = 2;
        DAT_fffef6a3 = 2;
        if (((0x13 < DAT_ffff299c) ||
            ((((_DAT_fffef680 & 1) == 0 && ((_DAT_fffef680 & 2) != 0)) && (4 < DAT_ffff313d)))) ||
           ((((_DAT_fffef680 & 1) != 0 && ((_DAT_fffef680 & 2) != 0)) && (4 < DAT_ffff313e)))) {
          uVar4 = _DAT_fffef6dc | 0xe0;
          bVar3 = 0;
        }
      }
    }
    else if (DAT_fffef674 == '\n') {
      if ((DAT_ffff313c == '\0') && (DAT_fffef6a3 != 2)) {
        uVar4 = _DAT_fffef6dc | 0x300;
        bVar3 = DAT_fffef6a3;
      }
      else {
        uVar4 = _DAT_fffef6dc | 0x100;
        if (((_DAT_fffef65c & 0x40) != 0) && ((_DAT_fffef680 & 2) != 0)) {
          uVar4 = _DAT_fffef6dc | 0x500;
          if ((_DAT_fffef680 & 1) == 0) {
            _DAT_fffef684 = 5000;
            if (DAT_ffff313d < 5) {
              _DAT_fffef684 = 0x6a4;
            }
          }
          else {
            _DAT_fffef684 = 5000;
            if (DAT_ffff313e < 5) {
              _DAT_fffef684 = 0x6a4;
            }
          }
        }
        _DAT_fffef6dc = uVar4;
        bVar3 = 1;
        if ((_DAT_fffef64c & 0x100) == 0) {
          _DAT_fffef6de = _DAT_fffef6de | 0x10;
          if (DAT_fffef686 == 0) {
            FUN_0005d944();
            FUN_0005d978(0,0,0);
            DAT_fffef6a5 = 0;
            DAT_ffff313c = '\0';
            DAT_fffef686 = 1;
            bVar3 = 2;
            _DAT_fffef6de = _DAT_fffef6de | 0x20;
          }
          else if (DAT_fffef686 < 3) {
            bVar3 = FUN_0005cdb4();
            _DAT_fffef6de = _DAT_fffef6de | 0x40;
          }
          else if (DAT_fffef686 == 3) {
            bVar3 = FUN_0005d0f6();
            _DAT_fffef6de = _DAT_fffef6de | 0x80;
          }
        }
        else {
          uVar4 = _DAT_fffef6dc | 0x800;
          if (DAT_fffef686 == 0) {
            _DAT_fffef6dc = uVar4;
            FUN_0005d944();
            FUN_0005d2ee();
            uVar1 = FUN_0005d28e();
            FUN_0005defe(uVar1,local_50);
            FUN_0005d978(0,local_50,5);
            DAT_fffef6a4 = 0;
            DAT_fffef6a5 = 0;
            DAT_ffff313c = '\0';
            DAT_fffef686 = 1;
            bVar3 = 2;
            _DAT_fffef6dc = _DAT_fffef6dc | 0x1000;
          }
          else if (DAT_fffef686 == 1) {
            _DAT_fffef6dc = uVar4;
            bVar3 = FUN_0005cf34();
            _DAT_fffef6dc = _DAT_fffef6dc | 0x2000;
          }
          else if (DAT_fffef686 == 2) {
            _DAT_fffef6dc = _DAT_fffef6dc | 0x4800;
            bVar3 = FUN_0005d0f6();
            if (((((_DAT_fffef65c & 0x40) != 0) && ((_DAT_fffef680 & 1) == 0)) &&
                ((_DAT_fffef680 & 2) != 0)) && ((bVar3 != 2 && (DAT_ffff313b == '\x01')))) {
              _DAT_fffef67c = 0x1c;
              DAT_fffef686 = 3;
              bVar3 = 2;
              _DAT_fffef6dc = _DAT_fffef6dc | 0x8000;
            }
          }
          else if (DAT_fffef686 == 3) {
            _DAT_fffef6de = _DAT_fffef6de | 1;
            _DAT_fffef6dc = uVar4;
            if (_DAT_fffef67c == 0) {
              for (uVar5 = 0; (uVar5 & 0xff) < 5; uVar5 = (uVar5 & 0xff) + 1) {
                local_50[uVar5 & 0xff] = 0;
              }
              FUN_0005d944();
              FUN_0005d978(9,local_50,5);
              DAT_fffef686 = 4;
              _DAT_fffef6de = _DAT_fffef6de | 2;
            }
            bVar3 = 2;
          }
          else if (DAT_fffef686 == 4) {
            _DAT_fffef6dc = uVar4;
            bVar3 = FUN_0005d170();
            _DAT_fffef6de = _DAT_fffef6de | 4;
          }
          else {
            _DAT_fffef6dc = uVar4;
            if (DAT_fffef686 == 5) {
              bVar3 = FUN_0005d0f6();
              _DAT_fffef6de = _DAT_fffef6de | 8;
            }
          }
        }
        uVar4 = _DAT_fffef6dc;
        if (bVar3 != 2) {
          FUN_0005d93c();
          _DAT_fffef6de = _DAT_fffef6de | 0x100;
          DAT_fffef6a3 = bVar3;
          uVar4 = _DAT_fffef6dc;
        }
      }
    }
    else {
      uVar4 = _DAT_fffef6dc;
      if (DAT_fffef674 == '\b') {
        _DAT_fffef6de = _DAT_fffef6de | 0x200;
        if (((_DAT_fffef65c & 0x40) == 0) || ((_DAT_fffef680 & 2) == 0)) {
          bVar3 = 0;
        }
        else {
          bVar3 = FUN_0005d38c();
          _DAT_fffef6de = _DAT_fffef6de | 0x400;
          uVar4 = _DAT_fffef6dc;
        }
      }
    }
    _DAT_fffef6dc = uVar4;
    if (1 < bVar3) {
      _DAT_fffef6de = _DAT_fffef6de | 0x800;
      bVar3 = 0xff;
    }
  }
LAB_0005c164:
  if (((_DAT_fffef64c & 0x200) != 0) && (DAT_fffef67e == '\0')) {
    _DAT_fffef6de = _DAT_fffef6de | 0x1000;
    if ((DAT_ffff66b0 == '\x01') || (DAT_ffff66b0 == '\x04')) {
      DAT_fffef676 = '\0';
    }
    if (((_DAT_fffef680 & 2) == 0) ||
       ((((_DAT_fffef680 & 2) == 0 || ((_DAT_fffef65c & 0x40) != 0)) &&
        ((((((_DAT_fffef680 & 2) != 0 &&
            ((((_DAT_fffef65c & 0x40) != 0 && ((_DAT_fffef680 & 1) == 0)) && (DAT_fffef676 != '\0'))
            )) || ((((_DAT_fffef680 & 2) != 0 && ((_DAT_fffef65c & 0x40) != 0)) &&
                   (DAT_ffff313b == '\x02')))) ||
          ((((_DAT_fffef680 & 2) != 0 && ((_DAT_fffef65c & 0x40) != 0)) &&
           (((_DAT_fffef680 & 1) == 0 && (4 < DAT_ffff313d)))))) ||
         (((((_DAT_fffef680 & 2) != 0 && ((_DAT_fffef65c & 0x40) != 0)) &&
           ((_DAT_fffef680 & 1) != 0)) && (4 < DAT_ffff313e)))))))) {
      DAT_fffef6a7 = 1;
    }
    else {
      DAT_fffef6a7 = 0;
    }
  }
  DAT_ffff312b = DAT_ffff312b | DAT_ffff3144;
  DAT_ffff312c = DAT_ffff312c | DAT_ffff3145;
  return;
}

