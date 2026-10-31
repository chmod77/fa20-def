
/* WARNING: Removing unreachable block (ram,0x0008c642) */

void FUN_0008c5ec(undefined4 param_1,ushort param_2,ushort param_3,undefined2 *param_4)

{
  char cVar1;
  
  cVar1 = '\x01';
  if (param_3 < 0x379) {
    cVar1 = DAT_fffebc85;
  }
  DAT_fffebc84 = 0;
  if ((0x149 < param_2) && (cVar1 != '\0')) {
    DAT_fffebc84 = 1;
  }
  *param_4 = 0;
  DAT_fffebc85 = cVar1;
  return;
}

