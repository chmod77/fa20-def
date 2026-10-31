
void FUN_000ad44c(char param_1,byte param_2,ushort param_3,ushort param_4,undefined1 *param_5)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  ushort uVar4;
  char cVar5;
  
  uVar4 = param_4 + 0x1800;
  if (uVar4 < param_4) {
    uVar4 = 0xffff;
  }
  bVar1 = uVar4 <= param_3;
  cVar5 = '\x01';
  if (DAT_fffec53f <= param_2) {
    cVar5 = DAT_fffec540;
  }
  if (param_2 != 0) {
    cVar5 = '\0';
  }
  cVar2 = '\x01';
  if (DAT_fffec53d <= bVar1) {
    cVar2 = DAT_fffec53e;
  }
  if (bVar1) {
    cVar2 = '\0';
  }
  uVar3 = 1;
  if (((param_1 == '\0') && (cVar2 == '\0')) && (cVar5 == '\0' || DAT_fffec53c < 6)) {
    uVar3 = 0;
  }
  *param_5 = uVar3;
  if (cVar5 == '\0') {
    DAT_fffec53c = '\0';
  }
  else {
    DAT_fffec53c = DAT_fffec53c + 1;
    if (DAT_fffec53c == '\0') {
      DAT_fffec53c = -1;
    }
  }
  DAT_fffec540 = cVar5;
  DAT_fffec53e = cVar2;
  DAT_fffec53f = param_2;
  DAT_fffec53d = bVar1;
  return;
}

