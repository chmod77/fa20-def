
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003ffe(byte param_1)

{
  if (DAT_ffff7b94 == '\x01') {
    DAT_ffff6b91 = param_1 & 0x3f;
  }
  else if (DAT_ffff7b94 == '\x02') {
    DAT_ffff6b91 = 0;
    DAT_ffff6b92 = param_1;
  }
  else if (DAT_ffff7b94 == '\x03') {
    DAT_ffff6b91 = (param_1 & 0x3f) + 0x80;
    DAT_ffff6b92 = DAT_ffff678d;
    DAT_ffff6b93 = DAT_ffff678c;
  }
  else if (DAT_ffff7b94 == '\x04') {
    DAT_ffff6b91 = 0x80;
    DAT_ffff6b92 = DAT_ffff678d;
    DAT_ffff6b93 = DAT_ffff678c;
    DAT_ffff6b94 = param_1;
  }
  DAT_ffff7b94 = 0;
  _DAT_ffff7b98 = (ushort)param_1;
  return;
}

