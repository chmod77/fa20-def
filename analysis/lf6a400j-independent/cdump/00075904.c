
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00075904(void)

{
  uint uVar1;
  
  DAT_fffef4cd = DAT_ffff8573;
  if (((((DAT_ffff6793 == '\x01') || (DAT_ffff6793 == '\x02')) || (DAT_ffff6793 == '@')) ||
      ((DAT_ffff6793 == '\x03' || (DAT_ffff6793 == 'B')))) || (DAT_ffff6793 == 'C')) {
    if (_DAT_ffff7b96 == 2) {
      if (DAT_ffff6793 == '\x01') {
        if ((DAT_ffff6788 & 0x20) == 0) {
          if (DAT_ffff8573 != '\x01') {
            if (DAT_ffff8573 == '\x03') {
              DAT_ffff8573 = '\x01';
              DAT_ffff8574 = '\0';
LAB_00075abc:
              DAT_ffff8575 = 0;
              DAT_ffff6789 = DAT_ffff8573;
              FUN_00077008();
            }
            else {
              if (DAT_ffff8573 != '@') goto LAB_00075b3a;
              DAT_ffff8573 = '\x01';
            }
          }
          goto LAB_00075ac6;
        }
      }
      else {
        if (DAT_ffff6793 != '\x02') {
          if (DAT_ffff6793 == '\x03') {
            if (DAT_ffff8573 != '\x03') {
              if (DAT_ffff8573 != '\x01') goto LAB_00075b3a;
              DAT_ffff8573 = '\x03';
            }
LAB_00075b20:
            DAT_ffff6b91 = 0x50;
            uVar1 = (uint)DAT_ffff8573;
            DAT_ffff6b92 = DAT_ffff8573;
            DAT_ffff6789 = DAT_ffff8573;
          }
          else {
            if (DAT_ffff6793 != '@') {
              if (DAT_ffff6793 == 'B') {
                if ((((DAT_ffff678b & 0x20) != 0) && (0x7c < DAT_ffffab41)) && (DAT_ffffab41 < 0xb0)
                   ) {
                  if (DAT_ffff8573 == 'B') goto LAB_00075ac6;
                  uVar1 = (uint)DAT_ffff8573;
                  if (uVar1 != 0x43) goto LAB_00075ba0;
                  if (DAT_ffff8574 == '\x01') {
                    DAT_ffff8573 = 'B';
                    goto LAB_00075abc;
                  }
                }
              }
              else {
                uVar1 = (uint)DAT_ffff6793;
                if (uVar1 != 0x43) goto LAB_00075ba0;
                if ((((DAT_ffff678b & 0x20) != 0) && (0x7c < DAT_ffffab41)) && (DAT_ffffab41 < 0xb0)
                   ) {
                  if (DAT_ffff8573 == 'C') {
                    DAT_ffff6b91 = 0x50;
                    DAT_ffff6b92 = DAT_ffff8573;
                    _DAT_ffff7b98 = 2;
                    uVar1 = (int)DAT_ffff8868 | 1;
                    DAT_ffff8868 = (char)uVar1;
                    goto LAB_00075ba0;
                  }
                  if (DAT_ffff8573 == '\x01') {
                    DAT_ffff8573 = 'C';
                    goto LAB_00075b20;
                  }
                }
              }
              goto LAB_00075b3a;
            }
            if (DAT_ffff8573 != '@') {
              if (DAT_ffff8573 != '\x01') goto LAB_00075b3a;
              DAT_ffff8573 = '@';
            }
LAB_00075ac6:
            DAT_ffff6b91 = 0x50;
            uVar1 = (uint)DAT_ffff8573;
            DAT_ffff6b92 = DAT_ffff8573;
          }
LAB_00075b30:
          _DAT_ffff7b98 = 2;
          goto LAB_00075ba0;
        }
        if (((((int)DAT_ffff678a & 0x80U) != 0) && (0x7c < DAT_ffffab41)) &&
           ((DAT_ffffab41 < 0xb0 && ((DAT_ffff299c < 4 && (v_Vehicle_Speed_byte_65A1 < 6)))))) {
          if (DAT_ffff8573 == '\x02') goto LAB_00075ac6;
          if ((DAT_ffff8573 == '\x03') && (DAT_ffff8574 == '\x01')) {
            DAT_ffff8573 = '\x02';
            DAT_ffff8575 = 0;
            DAT_ffff6b91 = 0x50;
            DAT_ffff6b92 = '\x02';
            DAT_ffff6789 = '\x02';
            uVar1 = FUN_00077008();
            goto LAB_00075b30;
          }
        }
      }
LAB_00075b3a:
      uVar1 = 0x22;
      DAT_ffff6b93 = 0x22;
    }
    else {
      uVar1 = 0x13;
      DAT_ffff6b93 = 0x13;
    }
  }
  else {
    uVar1 = 0x12;
    DAT_ffff6b93 = 0x12;
  }
  DAT_ffff6b92 = '\x10';
  DAT_ffff6b91 = 0x7f;
  _DAT_ffff7b98 = 3;
LAB_00075ba0:
  if (DAT_fffef4cd != DAT_ffff8573) {
    DAT_fffef054 = 0;
    DAT_ffff051d = 0;
    DAT_fffef59c = 0;
    DAT_fffef055 = 0;
    DAT_ffff66b1 = 0;
    DAT_ffff66b3 = 0;
    DAT_ffff66b2 = 0;
    DAT_ffff855e = 0;
    _DAT_ffff8552 = 0;
    _DAT_ffff8554 = 0;
    _DAT_ffff8556 = 0;
    _DAT_ffff8558 = 0;
    _DAT_ffff855a = 0;
    _DAT_ffff855c = 0;
    _DAT_ffff66b4 = 0;
    _DAT_ffff66b6 = 0;
    _DAT_fffef48c = 0;
    _DAT_fffef48e = 0;
    _DAT_fffef490 = 0;
    _DAT_fffef492 = 0;
    _DAT_fffef494 = 0;
    _DAT_fffef496 = 0;
    _DAT_fffef508 = 0;
    _DAT_fffef512 = 0;
    _DAT_fffef49e = 0;
    _DAT_fffef506 = 0;
    _DAT_fffef50a = 0;
    _DAT_fffef50c = 0;
    _DAT_fffef50e = 0;
    _DAT_fffef596 = 0;
    _DAT_fffef598 = 0;
    _DAT_fffef59a = 0;
    _DAT_fffef510 = 0;
    _DAT_fffef514 = 0;
    DAT_fffef453 = 0;
    DAT_fffef687 = 0;
  }
  return uVar1;
}

