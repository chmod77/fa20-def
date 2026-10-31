
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003bdc6(void)

{
  _DAT_fffef486 = FUN_0016b4d8(&DAT_fffef486,(int)_DAT_fffef484,0xffffffff);
  DAT_fffeed64 = (undefined1)((ushort)_DAT_fffef486 >> 8);
  _DAT_fffef488 = _DAT_fffef486;
  if ((DAT_fffef519 & 4) != 0) {
    _DAT_fffef488 = -0x5600;
  }
  DAT_fffeef50 = DAT_fffeed64;
  DAT_fffeed65 = FUN_0016ba80(&PTR_DAT_001638b0,(int)_DAT_fffef488);
  DAT_fffeed6a = FUN_0016ba80(&PTR_DAT_001638b0,(int)_DAT_fffef486);
  if ((DAT_ffffab40 & 0x40) == 0) {
    DAT_fffeed68 = FUN_0016b608((int)DAT_fffeed65,(int)DAT_fffeed68);
    DAT_fffeed69 = FUN_0016bd40((int)DAT_fffeed65,(int)DAT_fffeed69);
  }
  else {
    DAT_fffeed68 = DAT_fffeed65;
    DAT_fffeed69 = DAT_fffeed65;
  }
  return;
}

