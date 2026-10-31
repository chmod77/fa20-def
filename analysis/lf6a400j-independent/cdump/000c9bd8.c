
void FUN_000c9bd8(char param_1,char param_2,char param_3,char param_4,char param_5,uint param_6,
                 undefined1 *param_7)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = true;
  if (((param_1 == '\0') || (param_3 != '\x01')) && ((param_2 == '\0' || (param_4 != '\x01')))) {
    bVar1 = false;
  }
  if (bVar1) {
    if (param_5 == '\0') {
      uVar2 = __sdiv32_r1_by_r0((param_6 & 0xff) * 0x79,100);
      if ((uVar2 & 0xffff) < 0x81) {
        if (0xff < (uVar2 & 0xffff)) {
          uVar2 = 0xff;
        }
        DAT_fffecb78 = (undefined1)uVar2;
      }
      else {
        DAT_fffecb78 = 0x80;
      }
    }
    else {
      DAT_fffecb78 = 0;
    }
  }
  if (bVar1) {
    DAT_fffecb79 = DAT_fffecb78;
  }
  *param_7 = DAT_fffecb79;
  return;
}

