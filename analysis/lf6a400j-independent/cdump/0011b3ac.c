
void FUN_0011b3ac(ushort param_1,short param_2,ushort param_3,undefined1 *param_4)

{
  bool bVar1;
  byte bVar2;
  
  if (((param_1 < 0x96) || (param_2 != -1)) || (param_3 < 0x280)) {
    bVar1 = false;
  }
  else {
    bVar1 = 0x18 < DAT_fffee024;
  }
  if (((param_1 < 0x96) || (param_2 != -1)) || (param_3 < 0x280)) {
    DAT_fffee024 = '\0';
  }
  else {
    bVar2 = 0xfe;
    if (DAT_fffee024 != 0xff) {
      bVar2 = DAT_fffee024;
    }
    DAT_fffee024 = bVar2 + 1;
  }
  if ((499 < param_1) || (bVar1)) {
    DAT_fffee025 = 1;
  }
  *param_4 = DAT_fffee025;
  return;
}

