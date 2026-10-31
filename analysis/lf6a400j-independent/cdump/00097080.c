
void FUN_00097080(ushort param_1,char param_2)

{
  undefined1 *in_stack_00000008;
  undefined1 local_8 [4];
  
  local_8[0] = 0x80;
  local_8[1] = 0x80;
  local_8[2] = 0x80;
  local_8[3] = 0x80;
  if (param_2 == '\0') {
    *in_stack_00000008 = 0x80;
  }
  else {
    *in_stack_00000008 = local_8[(short)((param_1 & 0xff) - 1)];
  }
  return;
}

