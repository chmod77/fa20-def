
/* WARNING: Removing unreachable block (ram,0x000ecc9c) */
/* WARNING: Removing unreachable block (ram,0x000ecc40) */
/* WARNING: Removing unreachable block (ram,0x000ecc52) */
/* WARNING: Removing unreachable block (ram,0x000eccae) */

void FUN_000ecbec(uint param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 uint param_7,int param_8,char param_9,undefined2 *param_10)

{
  int iVar1;
  undefined2 uVar2;
  
  if (((param_2 != '\x01') && (param_2 != '\x02')) &&
     (((param_3 != '\0' && (param_4 != '\0')) || ((param_5 != '\0' && (param_6 != '\0')))))) {
    param_8 = ((param_7 & 0xffff) * 0x168 >> 0x10) + (param_7 >> 0x10) * 0x168;
    if ((int)param_7 < 0) {
      param_8 = param_8 + -0x1680000;
    }
    if (param_8 < 0x8000) {
      if (param_8 < -0x8000) {
        param_8 = -0x8000;
      }
    }
    else {
      param_8 = 0x7fff;
    }
  }
  uVar2 = (undefined2)param_8;
  if (param_2 == '\x02') {
    iVar1 = ((param_1 & 0xffff) * 0x168 >> 0x10) + (param_1 >> 0x10) * 0x168;
    if ((int)param_1 < 0) {
      iVar1 = iVar1 + -0x1680000;
    }
    uVar2 = 0x7fff;
    if ((iVar1 < 0x8000) && (uVar2 = (undefined2)iVar1, iVar1 < -0x8000)) {
      uVar2 = 0x8000;
    }
  }
  if (param_9 == '\0') {
    *param_10 = uVar2;
  }
  else {
    *param_10 = 0;
  }
  return;
}

