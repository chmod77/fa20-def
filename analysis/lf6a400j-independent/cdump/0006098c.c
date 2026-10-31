
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0006098c(ushort param_1)

{
  short sVar1;
  byte bVar2;
  undefined2 uVar4;
  undefined1 uVar5;
  int iVar3;
  uint uVar6;
  byte bVar7;
  int iVar8;
  
  bVar2 = DAT_fffef3e4;
  uVar6 = (uint)param_1;
  if (DAT_ffff312a == '\0') {
    DAT_ffff312a = '\x01';
    _DAT_ffff2fc2 = param_1;
    if (DAT_ffff3028 == '\0') {
      iVar3 = 0x3e;
    }
    else if ((DAT_ffff3068 == '\0') || (DAT_ffff30a8 == '\0')) {
      if (DAT_ffff3068 == '\0') {
        sVar1 = (&DAT_0001b2d8)[uVar6];
        FUN_00060be2(1);
        DAT_ffff3068 = '\x02';
        DAT_ffff2fea = bVar2;
        _DAT_ffff2fec = sVar1;
      }
      else {
        sVar1 = (&DAT_0001b2d8)[uVar6];
        FUN_00060be2(2);
        DAT_ffff30a8 = '\x03';
        DAT_ffff302a = bVar2;
        DAT_ffff305c = (undefined1)(-(uint)bVar2 >> 8);
        DAT_ffff305d = (undefined1)-(uint)bVar2;
        _DAT_ffff2fec = sVar1;
        _DAT_ffff302c = sVar1;
        DAT_ffff2fea = FUN_0000152c(bVar2 + 0x32);
      }
      DAT_ffff301c = (undefined1)(-(uint)DAT_ffff2fea >> 8);
      iVar3 = 0x33;
      DAT_ffff301d = (undefined1)-(uint)DAT_ffff2fea;
    }
    else {
      sVar1 = (&DAT_0001b2d8)[uVar6];
      FUN_00060be2(3);
      DAT_ffff30e8 = '\x04';
      iVar3 = bVar2 + 100;
      uVar4 = (undefined2)iVar3;
      iVar8 = 0;
      _DAT_ffff2fec = sVar1;
      _DAT_ffff302c = sVar1;
      _DAT_ffff306c = sVar1;
      for (bVar7 = 0; bVar7 < 3; bVar7 = bVar7 + 1) {
        if ((&DAT_ffff3028)[iVar8] == '\x03') {
          (&DAT_ffff2fea)[iVar8] = bVar2;
LAB_00060a56:
          (&DAT_ffff301c)[iVar8] = (char)(-(uint)(byte)(&DAT_ffff2fea)[iVar8] >> 8);
          (&DAT_ffff301d)[iVar8] = (char)-(uint)(byte)(&DAT_ffff2fea)[iVar8];
          iVar3 = iVar8;
        }
        else {
          if ((&DAT_ffff3028)[iVar8] == '\x02') {
            uVar5 = FUN_0000152c(bVar2 + 0x32);
            (&DAT_ffff2fea)[iVar8] = uVar5;
            goto LAB_00060a56;
          }
          iVar3 = (int)(char)(&DAT_ffff3028)[iVar8];
          if (iVar3 == 1) {
            uVar5 = FUN_0000152c(uVar4);
            (&DAT_ffff2fea)[iVar8] = uVar5;
            goto LAB_00060a56;
          }
        }
        iVar8 = iVar8 + 0x40;
      }
    }
  }
  else {
    iVar3 = (int)DAT_ffff312a;
    if ((iVar3 == 1) && (iVar3 = uVar6 * 2, _DAT_ffff2fec != (&DAT_0001b2d8)[uVar6])) {
      DAT_ffff312a = '\x02';
      _DAT_ffff2fc4 = param_1;
      if ((DAT_ffff3028 == '\0') || (DAT_ffff3068 == '\0')) {
        iVar3 = 0x7e;
        if (DAT_ffff3068 == '\0') {
          FUN_00060be2(1,(int)(short)(&DAT_0001b2d8)[uVar6]);
          iVar3 = 0x7e;
          DAT_ffff3068 = '\x02';
        }
      }
      else if ((DAT_ffff30a8 == '\0') || (DAT_ffff30e8 == '\0')) {
        if (DAT_ffff30a8 == '\0') {
          FUN_00060be2(2,(int)(short)(&DAT_0001b2d8)[uVar6]);
          iVar3 = 0xbe;
          DAT_ffff30a8 = '\x03';
        }
        else {
          FUN_00060be2(3,(int)(short)(&DAT_0001b2d8)[uVar6]);
          iVar3 = 0xfe;
          DAT_ffff30e8 = '\x04';
        }
      }
      else {
        FUN_00060be2(4,(int)(short)(&DAT_0001b2d8)[uVar6]);
        iVar3 = 0x13e;
        DAT_ffff3128 = 5;
      }
    }
  }
  return iVar3;
}

