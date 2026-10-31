
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0006df52(void)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  
  if ((((DAT_fffeebb6 & 0x10) == 0) && ((DAT_fffeebb6 & 4) == 0)) && ((DAT_fffeebb6 & 0x20) != 0)) {
    if ((DAT_fffeebb6 & 2) != 0) {
      FUN_0006e2f8();
      DAT_fffeec00 = DAT_fffeebfe;
      DAT_fffeec01 = DAT_fffeebff;
      bVar2 = DAT_fffeebbc | 0x80;
      if (((int)(char)DAT_fffeebba & 0x80U) == 0) {
        bVar2 = DAT_fffeebbc & 0x7f;
      }
      DAT_fffeebbc = bVar2 | 0x40;
      if ((DAT_fffeebba & 0x40) == 0) {
        DAT_fffeebbc = bVar2 & 0xbf;
      }
      DAT_fffeebb6 = DAT_fffeebb6 | 0x90;
      DAT_fffeec29 = 0;
      if ((DAT_fffeec4a == 1) && (DAT_fffeec4e != '@')) {
        if (((&DAT_0002abe9)[(uint)*(byte *)((int)&PTR_DAT_0002ac10 + (uint)_DAT_fffeec2e) * 6] &
            0x10) != 0) {
          pbVar3 = (byte *)((uint)_DAT_fffeec2e * 3 + -0x11441);
          *pbVar3 = *pbVar3 & 0xfe;
        }
        if (((&DAT_0002abe9)[(uint)*(byte *)((int)&PTR_DAT_0002ac10 + (uint)_DAT_fffeec4c) * 6] &
            0x10) != 0) {
          pbVar3 = (byte *)((uint)_DAT_fffeec4c * 3 + -0x11441);
          *pbVar3 = *pbVar3 | 1;
          pbVar3 = (byte *)((uint)_DAT_fffeec4c * 3 + -0x11441);
          *pbVar3 = *pbVar3 | 4;
        }
        uVar1 = (uint)DAT_fffeec2c;
        if ((uVar1 & 0x3f) != 0) {
          if (DAT_fffeec4e == DAT_fffeec2c) {
            uVar1 = (uint)(char)DAT_fffeebbe;
            if ((uVar1 & 0x80) != 0) {
              DAT_fffeebd1 = DAT_fffeebd1 & 0xfe;
              DAT_fffeebe6 = DAT_fffeebe6 & 0xfe;
              uVar1 = (int)(char)DAT_fffeebbe & 0x7f;
              DAT_fffeebbe = (byte)uVar1;
            }
          }
          else {
            DAT_fffeebd1 = DAT_fffeebd1 | 0x15;
            uVar1 = (int)(char)DAT_fffeebbe | 0x80;
            DAT_fffeebbe = (byte)uVar1;
          }
        }
        DAT_fffeec2b = DAT_fffeec4e;
        _DAT_fffeec2e = _DAT_fffeec4c;
      }
      else if ((1 < DAT_fffeec4a) || (uVar1 = (uint)DAT_fffeec4e, uVar1 == 0x40)) {
        if (((&DAT_0002abe9)[(uint)*(byte *)((int)&PTR_DAT_0002ac10 + (uint)_DAT_fffeec2e) * 6] &
            0x10) != 0) {
          pbVar3 = (byte *)((uint)_DAT_fffeec2e * 3 + -0x11441);
          *pbVar3 = *pbVar3 & 0xfe;
        }
        DAT_fffeebd1 = DAT_fffeebd1 | 0x15;
        uVar1 = (uint)(char)DAT_fffeebbe;
        if ((uVar1 & 0x80) != 0) {
          DAT_fffeebe6 = DAT_fffeebe6 & 0xfe;
          uVar1 = (int)(char)DAT_fffeebbe & 0x7f;
          DAT_fffeebbe = (byte)uVar1;
        }
        DAT_fffeec2b = '@';
        _DAT_fffeec2e = 6;
      }
      return uVar1;
    }
    if ((DAT_fffeebb6 & 1) != 0) {
      if ((DAT_fffeebb6 & 0x40) == 0) {
        uVar1 = FUN_0000152c(DAT_fffeec29 + 1);
        if ((byte)uVar1 < 0x50) {
          DAT_fffeec29 = (byte)uVar1;
          return uVar1;
        }
      }
      if (((&DAT_0002abe9)[(uint)*(byte *)((int)&PTR_DAT_0002ac10 + (uint)_DAT_fffeec2e) * 6] & 0x10
          ) != 0) {
        pbVar3 = (byte *)((uint)_DAT_fffeec2e * 3 + -0x11441);
        *pbVar3 = *pbVar3 & 0xfe;
      }
      if (((int)(char)DAT_fffeebbe & 0x80U) != 0) {
        DAT_fffeebd1 = DAT_fffeebd1 & 0xfe;
        DAT_fffeebe6 = DAT_fffeebe6 & 0xfe;
        DAT_fffeebbe = DAT_fffeebbe & 0x7f;
      }
      uVar1 = (uint)(char)DAT_fffeebb6;
      DAT_fffeebb6 = (char)(uVar1 & 0xdf);
      DAT_fffeec29 = 0;
      DAT_fffeec2b = 0;
      _DAT_fffeec2e = 0;
      return uVar1 & 0xdf;
    }
  }
  return (int)(char)DAT_fffeebb6;
}

