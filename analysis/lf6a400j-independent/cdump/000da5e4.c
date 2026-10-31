
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000da5e4(ushort param_1,uint param_2,uint param_3,ushort param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,char param_12,
                 char param_13,char param_14,char param_15,char param_16,undefined2 *param_17)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((((((param_5 == '\0') && (param_6 == '\0')) && (param_7 == '\0')) &&
       (((param_8 == '\0' && (param_9 == '\0')) &&
        ((param_10 == '\0' && ((param_11 == '\0' && (param_12 == '\0')))))))) && (param_13 == '\0'))
     && (((param_14 == '\0' && (param_15 == '\0')) && (param_16 == '\0')))) {
    puVar2 = (undefined *)(int)_DAT_fffed00c;
  }
  else {
    puVar1 = (undefined *)((uint)param_1 + (param_2 & 0xffff) + (param_3 & 0xffff));
    puVar2 = puVar1 + param_4;
    if ((puVar2 < puVar1) || (&DAT_0000ffff < puVar2)) {
      puVar2 = (undefined *)0xffffffff;
    }
  }
  *param_17 = (short)puVar2;
  _DAT_fffed00c = (short)puVar2;
  return;
}

