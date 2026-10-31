
/* WARNING: Removing unreachable block (ram,0x0009e3c6) */

void FUN_0009e3a0(char param_1,char param_2,byte param_3,char param_4,char param_5,
                 undefined1 *param_6)

{
  byte bVar1;
  undefined1 uVar2;
  
  if (DAT_fffec080 == '\0') {
    bVar1 = 200;
  }
  else {
    bVar1 = 0xcd;
  }
  if ((param_1 == '\x02') || (param_1 == '\x03')) {
    uVar2 = 1;
    if (((param_2 == '\0') || (param_3 > bVar1)) &&
       (((param_2 == '\0' || (param_4 != '\0')) || (param_5 == '\0')))) {
      uVar2 = 0;
    }
    *param_6 = uVar2;
  }
  else {
    *param_6 = 0;
  }
  DAT_fffec080 = param_3 <= bVar1;
  return;
}

