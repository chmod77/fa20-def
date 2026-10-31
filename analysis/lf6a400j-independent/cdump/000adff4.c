
void FUN_000adff4(byte param_1,undefined1 *param_2)

{
  short sVar1;
  short sVar3;
  char cVar2;
  
  sVar3 = (ushort)param_1 - (ushort)DAT_fffec580;
  sVar1 = 0x7f;
  if ((sVar3 < 0x80) && (sVar1 = -0x80, -0x81 < sVar3)) {
    sVar1 = sVar3;
  }
  cVar2 = (char)sVar1;
  if ((cVar2 == '\x03') || (cVar2 == -1)) {
    DAT_fffec581 = 3;
  }
  if (cVar2 == '\0') {
    DAT_fffec581 = 0;
  }
  else if ((cVar2 == '\x01') || (cVar2 == -3)) {
    DAT_fffec581 = 1;
  }
  else if ((cVar2 == '\x02') || (cVar2 == -2)) {
    DAT_fffec581 = 2;
  }
  *param_2 = DAT_fffec581;
  DAT_fffec580 = param_1;
  return;
}

