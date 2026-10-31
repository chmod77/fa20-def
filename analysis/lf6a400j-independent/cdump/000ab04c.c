
void FUN_000ab04c(char param_1,char param_2,ushort param_3,undefined1 *param_4)

{
  uint uVar1;
  
  uVar1 = (uint)param_3;
  if ((param_1 == '\x02') || (param_1 == '\x01')) {
    uVar1 = LK_133BCC((uint)&T_02DDD4,uVar1);
    *param_4 = (char)uVar1;
  }
  else if (param_2 == '\0') {
    uVar1 = LK_133BCC((uint)&T_02DDE0,uVar1);
    *param_4 = (char)uVar1;
  }
  else {
    uVar1 = LK_133BCC((uint)&T_02DDEC,uVar1);
    *param_4 = (char)uVar1;
  }
  return;
}

