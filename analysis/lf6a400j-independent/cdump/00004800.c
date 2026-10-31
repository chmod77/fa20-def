
undefined4 FUN_00004800(undefined1 param_1,undefined4 param_2)

{
  int in_r1;
  
  if (((int)*(char *)(in_r1 + 4) & 0x80U) != 0) {
    *(undefined1 *)(in_r1 + 3) = param_1;
    *(byte *)(in_r1 + 4) = *(byte *)(in_r1 + 4) & 0x7f;
    param_2 = 0;
    *(byte *)(in_r1 + 4) = *(byte *)(in_r1 + 4) & 0x83;
  }
  return param_2;
}

