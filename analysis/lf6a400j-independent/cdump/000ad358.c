
void FUN_000ad358(char param_1,ushort param_2,ushort param_3,char param_4,ushort param_5,
                 undefined1 *param_6)

{
  undefined1 uVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar4 = param_5 + 0x1800;
  if (uVar4 < param_5) {
    uVar4 = 0xffff;
  }
  uVar3 = param_3 + 0x33;
  if (uVar3 < param_3) {
    uVar3 = 0xffff;
  }
  if (param_4 == '\0') {
    cVar2 = '\x01';
    if ((uVar3 <= param_2) < DAT_fffec535) goto LAB_000ad3ac;
  }
  cVar2 = DAT_fffec534;
LAB_000ad3ac:
  if (param_4 != '\0') {
    cVar2 = '\0';
  }
  uVar1 = 0;
  if (((param_1 == '\0') && (cVar2 != '\0')) && (uVar4 <= param_2)) {
    uVar1 = 1;
  }
  *param_6 = uVar1;
  DAT_fffec534 = cVar2;
  DAT_fffec535 = uVar3 <= param_2;
  return;
}

