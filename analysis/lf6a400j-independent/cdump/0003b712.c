
/* WARNING: Removing unreachable block (ram,0x0003b7e6) */
/* WARNING: Removing unreachable block (ram,0x0003b74c) */
/* WARNING: Removing unreachable block (ram,0x0003b9e2) */
/* WARNING: Removing unreachable block (ram,0x0003b99a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003b712(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  DAT_ffff29bc = DAT_ffff29bb;
  DAT_ffff29bb = DAT_ffff29ba;
  DAT_ffff29ba = DAT_ffff29b9;
  DAT_ffff29b9 = DAT_ffff29b8;
  DAT_ffff29b8 = DAT_ffff29b7;
  DAT_ffff29b6 = FUN_0000152c((int)(uint)_DAT_ffff29b4 >> 2);
  DAT_ffff2a26 = DAT_ffff29b6;
  DAT_ffff29be = FUN_0000152c((int)(short)_DAT_ffff29b4);
  if (((DAT_fffef72c & 8) != 0) || ((DAT_fffef72c & 4) != 0)) {
    DAT_fffee6a8 = 0xaa;
  }
  if (((int)(char)DAT_ffff29c7 & 0x80U) == 0) {
    DAT_ffff29bd = FUN_0000152c(DAT_fffee6a8 + 0x19);
    DAT_ffff29c7 = DAT_ffff29c7 | 0x80;
  }
  if (((((DAT_fffef72c & 8) == 0) && ((DAT_fffef72c & 4) == 0)) && ((DAT_fffee690 & 0x20) == 0)) &&
     (((0x7c < DAT_ffffab41 && (_DAT_ffff09b8 >> 8 < 0x50)) &&
      ((DAT_ffff29be < DAT_ffff29bd && (0x27 < DAT_ffff29be)))))) {
    if (DAT_ffff29bf == 0) {
      DAT_ffff29bf = DAT_ffff29be;
    }
    else {
      iVar3 = FUN_0016caec((uint)DAT_ffff29be - (uint)DAT_ffff29bf);
      if (1 < iVar3) goto LAB_0003b924;
      DAT_ffff29c0 = DAT_ffff29c0 + 1;
      if (DAT_ffff29c0 < 0x18) goto LAB_0003b930;
      DAT_ffff29bd = FUN_0016b608((int)(char)DAT_ffff29be,0x28);
      DAT_ffff29bf = DAT_ffff29bd;
    }
  }
  else {
LAB_0003b924:
    DAT_ffff29bf = 0;
  }
  DAT_ffff29c0 = 0;
LAB_0003b930:
  if (((DAT_fffef72c & 8) == 0) && ((DAT_fffef72c & 4) == 0)) {
    if (DAT_ffff29bd < DAT_fffee6a8) {
      DAT_fffee6a8 = DAT_ffff29bd;
    }
    if (((((0x81 < v_Coolant_Temperature_29A5) && (DAT_ffff299c < 0x20)) && (0x27 < DAT_ffff03a0))
        && (DAT_ffff03a0 < 0x3e)) &&
       ((((int)DAT_fffee693 & 0x80U) != 0 ||
        ((((int)DAT_fffee693 & 0x80U) == 0 && (((int)(char)DAT_fffee690 & 0x80U) != 0)))))) {
      DAT_fffee6a8 = DAT_ffff29bd;
    }
  }
  iVar3 = (int)(short)((ushort)DAT_ffff2a26 * 4 - (ushort)DAT_fffee6a8);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  DAT_fffef644 = FUN_0016bd28(iVar3 >> 2);
  DAT_ffff29b7 = FUN_0000152c((int)(uint)_DAT_ffff29b4 >> 2);
  uVar1 = FUN_0016bd78((int)(short)_DAT_ffff29b4,0xff);
  DAT_ffff29c6 = FUN_0016acd6(&DAT_0002aa9c,uVar1);
  uVar1 = FUN_0016b5d4((uint)_DAT_ffff29b4 - (uint)_DAT_ffff29b2);
  uVar2 = FUN_0000152c(uVar1);
  uVar1 = FUN_0016bd28((uint)DAT_ffff29c1 - (uint)DAT_ffff29c6);
  DAT_ffff29c1 = FUN_0016b608(uVar2,uVar1);
  _DAT_ffff29b2 = _DAT_ffff29b4;
  DAT_ffff29c2 = FUN_0016b5a4((DAT_ffff29b7 + 0x80) - (uint)DAT_ffff29b9);
  DAT_ffff29c3 = FUN_0016b5a4((DAT_ffff29b7 + 0x80) - (uint)DAT_ffff29bb);
  _DAT_ffff29c4 = (ushort)DAT_ffff29c3 << 8;
  DAT_ffff29c8 = FUN_0016b5a4(((uint)DAT_ffff29b7 - (uint)DAT_ffff29bc) + 0x80);
  return;
}

