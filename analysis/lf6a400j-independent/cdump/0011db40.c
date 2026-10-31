
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011db40(byte param_1,char param_2,int param_3,uint param_4,uint param_5,uint *param_6,
                 uint *param_7)

{
  uint uVar1;
  
  uVar1 = LK_136BDC((uint)&T_02FDF4,param_5 & 0xff,param_4);
  *param_7 = uVar1;
  if (((DAT_fffee0cc < param_1) || ((DAT_fffee0cd == '\x02' && (param_2 == '\x03')))) &&
     (_DAT_fffee0c8 = uVar1 + param_3, _DAT_fffee0c8 < uVar1)) {
    _DAT_fffee0c8 = 0xffffffff;
  }
  *param_6 = _DAT_fffee0c8;
  DAT_fffee0cc = param_1;
  DAT_fffee0cd = param_2;
  return;
}

