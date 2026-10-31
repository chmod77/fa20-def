
void FUN_0005e02e(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  byte local_10;
  byte bStack_f;
  byte bStack_e;
  byte bStack_d;
  
  FUN_0005e182(param_1,&local_10);
  local_10 = local_10 ^ *param_2;
  bStack_f = param_2[1] ^ bStack_f;
  bStack_e = param_2[2] ^ bStack_e;
  bStack_d = param_2[3] ^ bStack_d;
  FUN_0005e07a(&local_10,&local_10);
  FUN_0005e18a(&local_10,param_3);
  return;
}

