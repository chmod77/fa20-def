
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0006dc44(void)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  
  uVar1 = (uint)(char)DAT_fffeebb7;
  if ((((uVar1 & 0x10) == 0) && (uVar1 = (uint)(char)DAT_fffeebb7, (uVar1 & 4) == 0)) &&
     (uVar1 = (uint)(char)DAT_fffeebb7, (uVar1 & 0x20) != 0)) {
    if ((3 < DAT_fffeec34) || ((DAT_fffeebb7 & 2) != 0)) {
      FUN_0006e264();
      DAT_fffeec04 = DAT_fffeec02;
      DAT_fffeec05 = DAT_fffeec03;
      bVar2 = DAT_fffeebbd | 0x80;
      if (((int)(char)DAT_fffeebbb & 0x80U) == 0) {
        bVar2 = DAT_fffeebbd & 0x7f;
      }
      DAT_fffeebbd = bVar2 | 0x40;
      if ((DAT_fffeebbb & 0x40) == 0) {
        DAT_fffeebbd = bVar2 & 0xbf;
      }
      DAT_fffeebb7 = DAT_fffeebb7 | 0x90;
      DAT_fffeec2a = 0;
      if ((DAT_fffeec4f == 1) && (DAT_fffeec52 != '@')) {
        if (((&DAT_0002abe9)[(uint)*(byte *)((int)&PTR_DAT_0002ac10 + (uint)_DAT_fffeec30) * 6] &
            0x10) != 0) {
          pbVar3 = (byte *)((uint)_DAT_fffeec30 * 3 + -0x1142c);
          *pbVar3 = *pbVar3 & 0xfe;
        }
        if (((&DAT_0002abe9)[(uint)*(byte *)((int)&PTR_DAT_0002ac10 + (uint)_DAT_fffeec50) * 6] &
            0x10) != 0) {
          pbVar3 = (byte *)((uint)_DAT_fffeec50 * 3 + -0x1142c);
          *pbVar3 = *pbVar3 | 1;
          pbVar3 = (byte *)((uint)_DAT_fffeec50 * 3 + -0x1142c);
          *pbVar3 = *pbVar3 | 4;
        }
        uVar1 = (uint)DAT_fffeec2b;
        if ((uVar1 & 0x3f) != 0) {
          if (DAT_fffeec52 == DAT_fffeec2b) {
            uVar1 = (uint)(char)DAT_fffeebbe;
            if ((uVar1 & 0x80) != 0) {
              DAT_fffeebd1 = DAT_fffeebd1 & 0xfe;
              DAT_fffeebe6 = DAT_fffeebe6 & 0xfe;
              uVar1 = (int)(char)DAT_fffeebbe & 0x7f;
              DAT_fffeebbe = (byte)uVar1;
            }
          }
          else {
            DAT_fffeebe6 = DAT_fffeebe6 | 0x15;
            uVar1 = (int)(char)DAT_fffeebbe | 0x80;
            DAT_fffeebbe = (byte)uVar1;
          }
        }
        DAT_fffeec2c = DAT_fffeec52;
        _DAT_fffeec30 = _DAT_fffeec50;
      }
      else if ((1 < DAT_fffeec4f) || (uVar1 = (uint)DAT_fffeec52, uVar1 == 0x40)) {
        if (((&DAT_0002abe9)[(uint)*(byte *)((int)&PTR_DAT_0002ac10 + (uint)_DAT_fffeec30) * 6] &
            0x10) != 0) {
          pbVar3 = (byte *)((uint)_DAT_fffeec30 * 3 + -0x1142c);
          *pbVar3 = *pbVar3 & 0xfe;
        }
        DAT_fffeebe6 = DAT_fffeebe6 | 0x15;
        uVar1 = (uint)(char)DAT_fffeebbe;
        if ((uVar1 & 0x80) != 0) {
          DAT_fffeebd1 = DAT_fffeebd1 & 0xfe;
          uVar1 = (int)(char)DAT_fffeebbe & 0x7f;
          DAT_fffeebbe = (byte)uVar1;
        }
        DAT_fffeec2c = '@';
        _DAT_fffeec30 = 6;
      }
      return uVar1;
    }
    uVar1 = (uint)(char)DAT_fffeebb7;
    if ((uVar1 & 1) != 0) {
      uVar1 = (uint)(char)DAT_fffeebb7;
      if ((uVar1 & 0x40) == 0) {
        uVar1 = FUN_0000152c(DAT_fffeec2a + 1);
        DAT_fffeec2a = (byte)uVar1;
        if (0x4f < DAT_fffeec2a) goto LAB_0006dc9c;
      }
      else if (DAT_fffeec34 == 0) {
LAB_0006dc9c:
        if (((&DAT_0002abe9)[(uint)*(byte *)((int)&PTR_DAT_0002ac10 + (uint)_DAT_fffeec30) * 6] &
            0x10) != 0) {
          pbVar3 = (byte *)((uint)_DAT_fffeec30 * 3 + -0x1142c);
          *pbVar3 = *pbVar3 & 0xfe;
        }
        if (((int)(char)DAT_fffeebbe & 0x80U) != 0) {
          DAT_fffeebd1 = DAT_fffeebd1 & 0xfe;
          DAT_fffeebe6 = DAT_fffeebe6 & 0xfe;
          DAT_fffeebbe = DAT_fffeebbe & 0x7f;
        }
        uVar1 = (uint)(char)DAT_fffeebb7;
        DAT_fffeebb7 = (char)(uVar1 & 0xdf);
        DAT_fffeec2a = 0;
        DAT_fffeec2c = 0;
        _DAT_fffeec30 = 0;
        return uVar1 & 0xdf;
      }
    }
  }
  return uVar1;
}

