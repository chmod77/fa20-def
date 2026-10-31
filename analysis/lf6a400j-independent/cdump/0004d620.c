
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004d620(void)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar6;
  short sVar4;
  short sVar5;
  int iVar7;
  
  uVar1 = _v_Engine_Speed_OBD_copy_2ADA;
  if (DAT_ffff66b0 == '\x01') {
    _v_Engine_Speed_OBD_copy_2ADA = 0;
    _DAT_ffff2ae2 = 0;
    _DAT_ffff2ae4 = 0;
    _DAT_ffff2b2c = 0;
    _DAT_ffff2b2e = 0;
    _DAT_ffff2b30 = 0;
    _DAT_ffff2b34 = 0;
    _DAT_ffff2b38 = 0;
    _DAT_ffff2b3c = 0;
    _DAT_ffff2b40 = 0;
    _DAT_ffff2b44 = 0;
    DAT_ffff2b48 = 0;
    DAT_ffff2b49 = 0;
    DAT_ffff2b4a = DAT_ffff2b4a & 0xf;
    uVar3 = (int)(char)(DAT_ffff2b4b & 0x7f) & 0xbf;
    DAT_ffff2b4b = (byte)uVar3;
  }
  else {
    _v_Engine_Speed_OBD_copy_2ADA = _DAT_ffff1a3a;
    uVar2 = FUN_0016b4d8(&DAT_ffff2ae2,(int)(short)_DAT_ffff1a3a,0x808);
    _DAT_ffff2ae2 = FUN_0016b390((int)(short)_v_Engine_Speed_OBD_copy_2ADA,0x280,uVar2);
    iVar7 = ((int)_DAT_ffff2ae4 + (uint)_v_Engine_Speed_OBD_copy_2ADA) - (uint)uVar1;
    _DAT_ffff2ae4 = FUN_0016b5ec((int)(iVar7 + (uint)(iVar7 < 0)) >> 1);
    if (_v_Engine_Speed_2994 != 0) {
      DAT_ffff2b4c = DAT_ffff2b4c | 8;
    }
    uVar3 = (uint)(char)DAT_ffff2b4c;
    if ((uVar3 & 8) != 0) {
      uVar3 = FUN_0016b428(0x6000,(int)_v_Engine_Speed_2994,0x400,(DAT_ffff2b4c & 0x10) != 0);
      bVar6 = DAT_ffff2b4c | 0x10;
      if ((uVar3 & 1) == 0) {
        bVar6 = DAT_ffff2b4c & 0xef;
      }
      if ((bVar6 & 0x10) == 0) {
        _DAT_ffff2b2c = 0;
        _DAT_ffff2b2e = 0;
        _DAT_ffff2b30 = 0;
        _DAT_ffff2b34 = 0;
        _DAT_ffff2b38 = 0;
        _DAT_ffff2b3c = 0;
        _DAT_ffff2b40 = 0;
        _DAT_ffff2b44 = 0;
        DAT_ffff2b48 = 0;
        DAT_ffff2b49 = 0;
        DAT_ffff2b4a = DAT_ffff2b4a & 0xf;
        DAT_ffff2b4b = DAT_ffff2b4b & 0x3f;
        uVar3 = (int)(char)bVar6 & 0xfb;
        DAT_ffff2b4c = (byte)uVar3;
      }
      else {
        if ((bVar6 & 4) == 0) {
          _DAT_ffff2b30 = _v_Engine_Speed_OBD_copy_2ADA;
          _DAT_ffff2b2e = _v_Engine_Speed_OBD_copy_2ADA;
          _DAT_ffff2b2c = _v_Engine_Speed_OBD_copy_2ADA;
          DAT_ffff2b4c = bVar6 | 4;
        }
        else {
          _DAT_ffff2b30 = _DAT_ffff2b2e;
          _DAT_ffff2b2e = _DAT_ffff2b2c;
          _DAT_ffff2b2c = uVar1;
          DAT_ffff2b4c = bVar6;
        }
        _DAT_ffff2b34 =
             FUN_0004dac8((int)(short)_v_Engine_Speed_OBD_copy_2ADA,(int)(short)_DAT_ffff2b2c,
                          (int)(short)_DAT_ffff2b2e,(int)(short)_DAT_ffff2b30,0x80,0,0);
        _DAT_ffff2b38 = FUN_0004dc22((int)(short)_v_Engine_Speed_OBD_copy_2ADA,_DAT_ffff2b34,1);
        _DAT_ffff2b3c = FUN_0004dc22((int)(short)_v_Engine_Speed_OBD_copy_2ADA,_DAT_ffff2b34,2);
        _DAT_ffff2b40 = FUN_0004dc22((int)(short)_v_Engine_Speed_OBD_copy_2ADA,_DAT_ffff2b34,3);
        _DAT_ffff2b44 = FUN_0004dc22((int)(short)_v_Engine_Speed_OBD_copy_2ADA,_DAT_ffff2b34,4);
        sVar4 = FUN_0016b14c(&PTR_DAT_00163a60,(int)_DAT_fffeeede);
        sVar5 = FUN_0016b14c(&PTR_DAT_00163a6c,(int)_DAT_fffeeede);
        if ((((int)sVar4 << 4 <= _DAT_ffff2b44) && (_DAT_ffff2b44 <= (int)sVar5 << 4)) &&
           ((DAT_fffeeec2 & 4) == 0)) {
          DAT_ffff2b4a = DAT_ffff2b4a | 0x80;
        }
        sVar4 = FUN_0016b14c(&PTR_DAT_00163a48,(int)_DAT_fffeeede);
        sVar5 = FUN_0016b14c(&PTR_DAT_00163a54,(int)_DAT_fffeeede);
        if (((((int)(char)DAT_ffff2b4a & 0x80U) == 0) && ((int)sVar4 << 4 <= _DAT_ffff2b40)) &&
           ((_DAT_ffff2b40 <= (int)sVar5 << 4 && ((DAT_fffeeec2 & 4) == 0)))) {
          DAT_ffff2b4a = DAT_ffff2b4a | 0x40;
        }
        if ((((int)(char)DAT_ffff2b4b & 0x80U) == 0) && (((int)(char)DAT_ffff2b4a & 0x80U) != 0)) {
          DAT_ffff2b48 = 0;
        }
        else if (((int)(char)DAT_ffff2b4a & 0x80U) != 0) {
          DAT_ffff2b48 = FUN_0000152c(DAT_ffff2b48 + 1);
        }
        if (((DAT_ffff2b4b & 0x40) == 0) && ((DAT_ffff2b4a & 0x40) != 0)) {
          DAT_ffff2b49 = 0;
        }
        else if ((DAT_ffff2b4a & 0x40) != 0) {
          DAT_ffff2b49 = FUN_0000152c(DAT_ffff2b49 + 1);
        }
        if ((((DAT_fffeeec2 & 4) == 0) && (((int)(char)DAT_ffff2b4a & 0x80U) != 0)) &&
           (DAT_ffff2b48 == 0)) {
          DAT_ffff2b4a = DAT_ffff2b4a | 0x20;
        }
        if ((((DAT_fffeeec2 & 4) == 0) && ((DAT_ffff2b4a & 0x40) != 0)) && (DAT_ffff2b49 == 0)) {
          DAT_ffff2b4a = DAT_ffff2b4a | 0x10;
        }
        bVar6 = DAT_ffff2b4b | 0x80;
        if (((int)(char)DAT_ffff2b4a & 0x80U) == 0) {
          bVar6 = DAT_ffff2b4b & 0x7f;
        }
        uVar3 = (int)(char)bVar6 | 0x40;
        if ((DAT_ffff2b4a & 0x40) == 0) {
          uVar3 = (int)(char)bVar6 & 0xbf;
        }
        DAT_ffff2b4b = (byte)uVar3;
      }
    }
  }
  return uVar3;
}

