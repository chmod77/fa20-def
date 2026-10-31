
/* WARNING: Removing unreachable block (ram,0x000a51b2) */

void FUN_000a5178(char param_1,char param_2,char param_3,ushort param_4,ushort param_5,char param_6,
                 undefined1 *param_7)

{
  ushort uVar1;
  ushort uVar2;
  
  if (DAT_fffec34d == '\0') {
    uVar2 = 0x7e00;
  }
  else {
    uVar2 = 0x8000;
  }
  if (DAT_fffec34e == '\0') {
    uVar1 = 0x1800;
  }
  else {
    uVar1 = 0x1600;
  }
  if ((((param_1 == '\b') || (param_1 == '\t')) || (param_1 == '\x0f')) ||
     ((((param_1 == '\n' && (param_3 != '\0')) &&
       ((uVar1 <= param_4 && ((param_4 <= uVar2 && (99 < param_5)))))) && (param_6 == '\0')))) {
    DAT_fffec34c = 1;
  }
  if (param_2 != '\0') {
    DAT_fffec34c = 0;
  }
  *param_7 = DAT_fffec34c;
  DAT_fffec34d = param_4 <= uVar2;
  DAT_fffec34e = uVar1 <= param_4;
  return;
}

