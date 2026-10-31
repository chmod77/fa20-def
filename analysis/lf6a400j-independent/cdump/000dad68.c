
void FUN_000dad68(ushort param_1,char *param_2)

{
  undefined1 uVar1;
  char cVar2;
  
  uVar1 = 1;
  if (param_1 != 2000) {
    uVar1 = DAT_fffed049;
  }
  if (((DAT_fffed048 == '\0') || (param_1 < 1000)) || (cVar2 = '\0', DAT_fffed04a == '\0')) {
    cVar2 = DAT_fffed04a;
  }
  if (DAT_fffed04b == '\0') {
    cVar2 = '\x01';
  }
  DAT_fffed049 = uVar1;
  *param_2 = cVar2;
  DAT_fffed04a = cVar2;
  DAT_fffed048 = uVar1;
  DAT_fffed04b = 1;
  return;
}

