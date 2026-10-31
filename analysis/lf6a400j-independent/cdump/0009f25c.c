
/* WARNING: Removing unreachable block (ram,0x0009f294) */
/* WARNING: Removing unreachable block (ram,0x0009f276) */
/* WARNING: Removing unreachable block (ram,0x0009f2d4) */

void FUN_0009f25c(char param_1,undefined1 *param_2)

{
  if (param_1 == '\n') {
    DAT_fffec0fc = 0xf2;
  }
  if (param_1 == '\t') {
    DAT_fffec0fc = 0xe8;
  }
  if (param_1 == '\b') {
    DAT_fffec0fc = 0xe9;
  }
  if (param_1 == '\x05') {
    DAT_fffec0fc = 6;
  }
  else if (param_1 == '\x06') {
    DAT_fffec0fc = 3;
  }
  *param_2 = DAT_fffec0fc;
  return;
}

