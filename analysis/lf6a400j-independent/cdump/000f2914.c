
/* WARNING: Removing unreachable block (ram,0x000f29c4) */
/* WARNING: Removing unreachable block (ram,0x000f2968) */
/* WARNING: Removing unreachable block (ram,0x000f297a) */
/* WARNING: Removing unreachable block (ram,0x000f29d6) */

void FUN_000f2914(char param_1,uint param_2,char param_3,char param_4,char param_5,char param_6,
                 uint param_7,int param_8,char param_9,undefined2 *param_10)

{
  int iVar1;
  undefined2 uVar2;
  
  if (((param_1 != '\x01') && (param_1 != '\x02')) &&
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
  if (param_1 == '\x02') {
    iVar1 = ((param_2 & 0xffff) * 0x168 >> 0x10) + (param_2 >> 0x10) * 0x168;
    if ((int)param_2 < 0) {
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

