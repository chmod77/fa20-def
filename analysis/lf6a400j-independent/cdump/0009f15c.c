
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009f15c(char param_1,char param_2,char param_3,char param_4,undefined2 *param_5)

{
  undefined *puVar1;
  
  if ((((((((param_1 == '\x06') || (param_1 == '\a')) || (param_4 == '\x01')) ||
         (((param_4 == '\x04' || (param_4 == '\x05')) ||
          ((param_4 == '\x06' || ((param_4 == '\a' || (param_4 == '\b')))))))) || (param_4 == '\t'))
       || (((((param_4 == '\n' || (param_4 == '\v')) || (param_3 == '\x02')) ||
            ((param_3 == '\x03' || (param_3 == '\x04')))) ||
           ((param_3 == '\x06' || ((param_3 == '\a' || (param_3 == '\b')))))))) ||
      ((param_3 == '\t' || (((param_3 == '\r' || (param_3 == '\x0e')) || (param_3 == '\x0f')))))) ||
     (param_3 == '\x10')) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = (undefined *)(int)(short)_DAT_fffec0f8;
  }
  if (param_1 == '\x05') {
    puVar1 = (undefined *)(_DAT_fffec0f8 + 1);
    if (puVar1 < &DAT_00010000) {
      if (&DAT_0000ffff < puVar1) {
        puVar1 = &DAT_0000ffff;
      }
    }
    else {
      puVar1 = (undefined *)0xffffffff;
    }
  }
  _DAT_fffec0f8 = (ushort)puVar1;
  if (((param_2 == '\x02') || (param_1 == '\x01')) || ((param_1 == '\x03' || (param_1 == '\x04'))))
  {
    _DAT_fffec0f8 = 0;
  }
  *param_5 = _DAT_fffec0f8;
  return;
}

