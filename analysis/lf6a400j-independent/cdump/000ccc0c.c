
void FUN_000ccc0c(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if (((param_1 == '\x05' && 0x45 < DAT_fffecc44) && (param_2 == '\0')) && (param_3 == '\0')) {
    uVar2 = 1;
  }
  *param_4 = uVar2;
  if (param_1 != '\x05') {
    DAT_fffecc44 = '\0';
  }
  else {
    bVar1 = 0xfe;
    if (DAT_fffecc44 != 0xff) {
      bVar1 = DAT_fffecc44;
    }
    DAT_fffecc44 = bVar1 + 1;
  }
  return;
}

