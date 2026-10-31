
/* WARNING: Removing unreachable block (ram,0x0009e4f4) */
/* WARNING: Removing unreachable block (ram,0x0009e520) */

void FUN_0009e468(ushort param_1,char param_2,ushort param_3,char param_4,undefined4 param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  
  if (DAT_fffec089 == '\0') {
    uVar5 = 0x6800;
  }
  else {
    uVar5 = 0x6400;
  }
  DAT_fffec089 = uVar5 <= param_3;
  if (DAT_fffec08b == '\0') {
    uVar5 = 0x5400;
  }
  else {
    uVar5 = 0x5000;
  }
  DAT_fffec08b = uVar5 <= param_3;
  if (DAT_fffec08a == '\0') {
    uVar5 = 0x3c00;
  }
  else {
    uVar5 = 0x4000;
  }
  DAT_fffec08a = param_3 <= uVar5;
  if (DAT_fffec088 == '\0') {
    uVar5 = 0x2c00;
  }
  else {
    uVar5 = 0x3000;
  }
  DAT_fffec088 = param_3 <= uVar5;
  bVar1 = param_4 != '\x04';
  bVar2 = param_4 != '\x03';
  bVar3 = param_4 != '\x02';
  bVar4 = param_4 != '\x01';
  if (param_2 == '\0') {
    if ((bool)DAT_fffec088) {
      if (bVar4) {
        if (bVar3) {
          if (bVar2) {
            if (bVar1) {
              uVar5 = 1;
            }
            else {
              uVar5 = 1;
            }
          }
          else {
            uVar5 = 1;
          }
        }
        else {
          uVar5 = 1;
        }
      }
      else {
        uVar5 = 1;
      }
    }
    else if ((bool)DAT_fffec08b) {
      if (bVar4) {
        if (bVar3) {
          if (bVar2) {
            if (bVar1) {
              uVar5 = 1;
            }
            else {
              uVar5 = 1;
            }
          }
          else {
            uVar5 = 1;
          }
        }
        else {
          uVar5 = 1;
        }
      }
      else {
        uVar5 = 1;
      }
    }
    else if (bVar4) {
      if (bVar3) {
        if (bVar2) {
          if (bVar1) {
            uVar5 = 1;
          }
          else {
            uVar5 = 1;
          }
        }
        else {
          uVar5 = 1;
        }
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 1;
    }
  }
  else if ((bool)DAT_fffec08a) {
    if (bVar4) {
      if (bVar3) {
        if (bVar2) {
          if (bVar1) {
            uVar5 = 0xf;
          }
          else {
            uVar5 = 0xf;
          }
        }
        else {
          uVar5 = 0xf;
        }
      }
      else {
        uVar5 = 0xf;
      }
    }
    else {
      uVar5 = 0xf;
    }
  }
  else if ((bool)DAT_fffec089) {
    if (bVar4) {
      if (bVar3) {
        if (bVar2) {
          if (bVar1) {
            uVar5 = 5;
          }
          else {
            uVar5 = 5;
          }
        }
        else {
          uVar5 = 5;
        }
      }
      else {
        uVar5 = 5;
      }
    }
    else {
      uVar5 = 5;
    }
  }
  else if (bVar4) {
    if (bVar3) {
      if (bVar2) {
        if (bVar1) {
          uVar5 = 8;
        }
        else {
          uVar5 = 8;
        }
      }
      else {
        uVar5 = 8;
      }
    }
    else {
      uVar5 = 8;
    }
  }
  else {
    uVar5 = 8;
  }
  *(bool *)param_5 = uVar5 < param_1;
  return;
}

