
/* WARNING: Removing unreachable block (ram,0x000494ba) */
/* WARNING: Removing unreachable block (ram,0x000494fa) */
/* WARNING: Removing unreachable block (ram,0x00049436) */
/* WARNING: Removing unreachable block (ram,0x00049454) */
/* WARNING: Removing unreachable block (ram,0x000494a2) */
/* WARNING: Removing unreachable block (ram,0x00049752) */
/* WARNING: Removing unreachable block (ram,0x000494aa) */
/* WARNING: Removing unreachable block (ram,0x00049492) */
/* WARNING: Removing unreachable block (ram,0x0004976e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000493ec(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  cVar1 = DAT_ffff66b0;
  bVar2 = DAT_ffff03d8 & 1;
  iVar3 = (int)DAT_ffffab41;
  _DAT_fffefa1e = FUN_0016bae4(&PTR_DAT_00163a14,(int)DAT_ffff29a7);
  if (((((DAT_fffef371 & 8) != 0) && (DAT_ffff0905 == '\0')) &&
      (((cVar1 == '\x03' && (_DAT_fffefa1e <= _DAT_fffefa26)) || (0xfffe < _DAT_ffff2a7c)))) &&
     (((0xf9 < DAT_fffee6a5 && (0x31 < v_Coolant_Temperature_29A5)) && (bVar2 == 0)))) {
    DAT_fffefa22 = FUN_0016b9a4(&PTR_DAT_00163a20,iVar3);
    DAT_fffefa23 = FUN_0016b9a4(&PTR_DAT_00163a2c,iVar3);
    if ((DAT_ffff655e & 4) != 0) {
      if ((DAT_fffee6d0 < DAT_fffefa22) || (DAT_fffefa23 < DAT_fffee6d0)) {
        DAT_fffefa20 = FUN_0000152c(DAT_fffefa20 + 1);
      }
      else {
        DAT_fffefa21 = FUN_0000152c(DAT_fffefa21 + 1);
      }
    }
    if (0x31 < DAT_fffefa20) {
      DAT_fffefa1c = DAT_fffefa1c | 1;
      DAT_fffefa24 = 1;
      DAT_fffefa21 = 0;
      DAT_fffefa20 = 0;
      _DAT_ffff3162 = (undefined2)((int)((uint)DAT_fffee6d0 * 0x37) >> 1);
      _DAT_ffff3164 = (undefined2)((int)((uint)DAT_fffefa23 * 0x37) >> 1);
      _DAT_ffff3166 = (undefined2)((int)((uint)DAT_fffefa22 * 0x37) >> 1);
      DAT_ffff34b9 = 1;
    }
    if (3 < DAT_fffefa21) {
      DAT_fffefa1c = DAT_fffefa1c & 0xfe;
      DAT_fffefa24 = 1;
      DAT_fffefa21 = 0;
      DAT_fffefa20 = 0;
      _DAT_ffff3162 = (undefined2)((int)((uint)DAT_fffee6d0 * 0x37) >> 1);
      _DAT_ffff3164 = (undefined2)((int)((uint)DAT_fffefa23 * 0x37) >> 1);
      _DAT_ffff3166 = (undefined2)((int)((uint)DAT_fffefa22 * 0x37) >> 1);
      DAT_ffff34b9 = 1;
    }
  }
  if (cVar1 == '\x03') {
    _DAT_fffefa26 = FUN_00001540(_DAT_fffefa26 + 1);
  }
  else {
    _DAT_fffefa26 = 0;
  }
  _DAT_fffefa28 = FUN_00001540(_DAT_fffefa28 + 1);
  _DAT_fffefa2a = FUN_00001540(_DAT_fffefa2a + 1);
  if (bVar2 == 0) {
    _DAT_fffefa2c = FUN_00001540(_DAT_fffefa2c + 1);
  }
  else {
    _DAT_fffefa2c = 0;
  }
  return;
}

