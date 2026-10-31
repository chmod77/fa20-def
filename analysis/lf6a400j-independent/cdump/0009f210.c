
void FUN_0009f210(char param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined1 local_4 [4];
  
  bVar1 = param_1 + 1;
  if (bVar1 == 0) {
    bVar1 = 0xff;
  }
  if (4 < bVar1) {
    bVar1 = 4;
  }
  local_4[0] = 1;
  local_4[1] = 3;
  local_4[2] = 2;
  local_4[3] = 4;
  if (param_1 == -1) {
    *param_2 = 0xff;
  }
  else {
    *param_2 = local_4[(short)(bVar1 - 1)];
  }
  return;
}

