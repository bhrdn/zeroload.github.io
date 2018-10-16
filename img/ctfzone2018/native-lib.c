int __fastcall Java_ololo_ololo_ololo_MainActivity_checkSomethings(int JNIEnv, int a2, int a3)
{
  int JNIEnv_; // r9
  int v4; // r11
  int v5; // r4
  int v6; // r0
  int v7; // r10
  int v8; // r4
  size_t v9; // r5
  char *v10; // r0
  const char *_str_Line1Number; // r6
  int *v12; // r4
  unsigned __int8 *v13; // r0
  unsigned __int8 *_str_subscriberID; // r5
  int v15; // r0
  int v16; // r0
  int _str_coutryISO; // r4
  int v18; // r0
  int v19; // r4
  size_t v20; // r8
  char *v21; // r0
  const char *_str_deviceID; // r10
  int v23; // r1
  unsigned __int8 *v24; // r4
  size_t v25; // r0
  unsigned int i; // r1
  int v27; // t1
  size_t v28; // r0
  unsigned int j; // r1
  int v30; // t1
  int v31; // r0
  int _str_packageName; // r4
  int v33; // r0
  int _str_sdkVer; // r4
  int v35; // r0
  int v36; // r0
  bool v37; // zf
  bool v38; // nf
  unsigned __int8 v39; // vf
  int v40; // r0
  size_t v41; // r0
  unsigned int k; // r1
  int v43; // t1
  int v44; // r0
  int v45; // r0
  unsigned __int8 *v46; // r4
  size_t v47; // r0
  unsigned int l; // r5
  int v49; // t1
  size_t v50; // r0
  unsigned int m; // r1
  int v52; // t1
  unsigned __int8 *v53; // r6
  size_t v54; // r0
  unsigned int n; // r1
  int v56; // t1
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r1
  int v61; // r10
  int v62; // r0
  int v63; // lr
  int v64; // r3
  int v65; // r6
  int v66; // r2
  int v67; // r1
  int v68; // r1
  int v69; // r4
  unsigned int v70; // r0
  char *v71; // r0
  char *v72; // r5
  int v73; // r0
  int v74; // r0
  int v75; // r0
  int v76; // r0
  int result; // r0
  int v78; // [sp+8h] [bp-298h]
  int v79; // [sp+Ch] [bp-294h]
  char md5_deviceID[16]; // [sp+10h] [bp-290h]
  char v81; // [sp+20h] [bp-280h]
  char md5_sdkVer[16]; // [sp+78h] [bp-228h]
  char v83; // [sp+88h] [bp-218h]
  char md5_Line1Number[16]; // [sp+E0h] [bp-1C0h]
  char md5_countryISO[16]; // [sp+F0h] [bp-1B0h]
  char md5_subscriberID[16]; // [sp+100h] [bp-1A0h]
  char v87; // [sp+110h] [bp-190h]
  char v88; // [sp+168h] [bp-138h]
  char md5_packageName[16]; // [sp+1C0h] [bp-E0h]
  char v90; // [sp+1D0h] [bp-D0h]
  char v91; // [sp+228h] [bp-78h]
  int v92; // [sp+280h] [bp-20h]

  JNIEnv_ = JNIEnv;
  v79 = a3;
  v4 = a2;
  v5 = (*(int (__fastcall **)(int, const char *))(*(_DWORD *)JNIEnv + jni_FindClass))(JNIEnv, "java/lang/String");
  v6 = (*(int (__fastcall **)(int, void *))(*(_DWORD *)JNIEnv_ + jni_NewStringUTF))(JNIEnv_, &unk_5F76);
  v7 = (*(int (__fastcall **)(int, signed int, int, int))(*(_DWORD *)JNIEnv_ + jni_NewObjectArray))(JNIEnv_, 4, v5, v6);
  _aeabi_memclr8(dword_9AA8, 20);
  call_java_getCountryISO(JNIEnv_, v4);
  call_java_getPackageName(JNIEnv_, v4);
  call_java_getSubscriberID(JNIEnv_, v4);
  call_java_getLine1Number(JNIEnv_, v4);
  v8 = str_Line1Number;
  v9 = strlen((const char *)str_Line1Number);
  v10 = (char *)malloc(8u);
  _str_Line1Number = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 1) = 0;
    *(_DWORD *)v10 = 0;
    _aeabi_memcpy(v10, v8 + v9 - 7, 7);
    v12 = (int *)str_subscriberID;
    v13 = (unsigned __int8 *)malloc(9u);
    _str_subscriberID = v13;
    if ( v13 )
    {
      v13[8] = 0;
      *((_DWORD *)v13 + 1) = 0;
      v78 = v7;
      *(_DWORD *)v13 = 0;
      v15 = *v12;
      *((_DWORD *)_str_subscriberID + 1) = v12[1];
      *(_DWORD *)_str_subscriberID = v15;
      call_java_getSdkVER(JNIEnv_, v4);
      dword_9AA4 = 0;
      md5_init((int)&v87);
      md5_init((int)&v90);
      call_java_getDeviceID(JNIEnv_, v4);
      v16 = strlen((const char *)_str_subscriberID);
      md5_update((int)&v87, (int)_str_subscriberID, v16);
      md5_init((int)&v91);
      _str_coutryISO = str_coutryISO;
      v18 = strlen((const char *)str_coutryISO);
      md5_update((int)&v91, _str_coutryISO, v18);
      md5_digest(&v87, md5_subscriberID);
      v19 = str_deviceID;
      v20 = strlen((const char *)str_deviceID);
      v21 = (char *)malloc(9u);
      _str_deviceID = v21;
      if ( v21 )
      {
        v21[8] = 0;
        *((_DWORD *)v21 + 1) = 0;
        *(_DWORD *)v21 = 0;
        v23 = *(_DWORD *)(v19 + v20 - 8);
        *((_DWORD *)v21 + 1) = *(_DWORD *)(v19 + v20 - 4);
        *(_DWORD *)v21 = v23;
        md5_digest(&v91, md5_countryISO);
        md5_init((int)&v88);
        v24 = (unsigned __int8 *)str_coutryISO;
        v25 = strlen((const char *)str_coutryISO);
        for ( i = 0xFFFFFFFF; v25; i = crc32_table[(unsigned __int8)i ^ v27] ^ (i >> 8) )
        {
          v27 = *v24++;
          --v25;
        }
        crc32_countryISO = ~i;
        v28 = strlen((const char *)_str_subscriberID);
        for ( j = 0xFFFFFFFF; v28; j = crc32_table[v30 ^ (unsigned __int8)j] ^ (j >> 8) )
        {
          v30 = *_str_subscriberID++;
          --v28;
        }
        crc32_subscriberID = ~j;
        md5_init((int)&v83);
        v31 = strlen(_str_Line1Number);
        md5_update((int)&v88, (int)_str_Line1Number, v31);
        _str_packageName = str_packageName;
        v33 = strlen((const char *)str_packageName);
        md5_update((int)&v90, _str_packageName, v33);
        md5_digest(&v90, md5_packageName);
        _str_sdkVer = str_sdkVer;
        v35 = strlen((const char *)str_sdkVer);
        md5_update((int)&v83, _str_sdkVer, v35);
        md5_init((int)&v81);
        v36 = 0;
        while ( md5_packageName[v36] == byte_9709[v36] )
        {
          v39 = __OFSUB__(v36, 14);
          v37 = v36 == 14;
          v38 = v36++ - 14 < 0;
          if ( !((unsigned __int8)(v38 ^ v39) | v37) )
          {
            dword_9AA8[3] |= 1u;
            break;
          }
        }
        v40 = strlen(_str_deviceID);
        md5_update((int)&v81, (int)_str_deviceID, v40);
        md5_digest(&v81, md5_deviceID);
        md5_digest(&v88, md5_Line1Number);
        v41 = strlen(_str_deviceID);
        for ( k = -1; v41; k = crc32_table[v43 ^ (unsigned __int8)k] ^ (k >> 8) )
        {
          v43 = *(unsigned __int8 *)_str_deviceID++;
          --v41;
        }
        dword_9AA0 = ~k;
        v44 = 0;
        while ( md5_countryISO[v44] == byte_96A9[v44] )
        {
          v39 = __OFSUB__(v44, 14);
          v37 = v44 == 14;
          v38 = v44++ - 14 < 0;
          if ( !((unsigned __int8)(v38 ^ v39) | v37) )
          {
            dword_9AA8[0] |= 1u;
            break;
          }
        }
        md5_digest(&v83, md5_sdkVer);
        v45 = 0;
        while ( md5_subscriberID[v45] == byte_96E9[v45] )
        {
          v39 = __OFSUB__(v45, 14);
          v37 = v45 == 14;
          v38 = v45++ - 14 < 0;
          if ( !((unsigned __int8)(v38 ^ v39) | v37) )
          {
            dword_9AA8[2] |= 1u;
            break;
          }
        }
        v46 = (unsigned __int8 *)str_packageName;
        v47 = strlen((const char *)str_packageName);
        for ( l = 0xFFFFFFFF; v47; l = crc32_table[v49 ^ (unsigned __int8)l] ^ (l >> 8) )
        {
          v49 = *v46++;
          --v47;
        }
        crc32_packageName = ~l;
        v50 = strlen(_str_Line1Number);
        for ( m = 0xFFFFFFFF; v50; m = crc32_table[v52 ^ (unsigned __int8)m] ^ (m >> 8) )
        {
          v52 = *(unsigned __int8 *)_str_Line1Number++;
          --v50;
        }
        v53 = (unsigned __int8 *)str_sdkVer;
        crc32_Line1Number = ~m;
        v54 = strlen((const char *)str_sdkVer);
        for ( n = -1; v54; n = crc32_table[v56 ^ (unsigned __int8)n] ^ (n >> 8) )
        {
          v56 = *v53++;
          --v54;
        }
        crc32_packageName = n ^ l;
        v57 = 0;
        while ( md5_deviceID[v57] == byte_9729[v57] )
        {
          v39 = __OFSUB__(v57, 14);
          v37 = v57 == 14;
          v38 = v57++ - 14 < 0;
          if ( !((unsigned __int8)(v38 ^ v39) | v37) )
          {
            dword_9AA8[4] |= 1u;
            break;
          }
        }
        v58 = 0;
        while ( md5_sdkVer[v58] == byte_9719[v58] )
        {
          v39 = __OFSUB__(v58, 14);
          v37 = v58 == 14;
          v38 = v58++ - 14 < 0;
          if ( !((unsigned __int8)(v38 ^ v39) | v37) )
          {
            if ( dword_9AA8[3] == 1 )
              dword_9AA8[3] = 1;
            break;
          }
        }
        if ( !dword_9AA8[2] )
          dword_9AA4 += 16;
        v59 = 0;
        do
        {
          if ( md5_sdkVer[v59] != byte_9719[v59] )
          {
            v60 = dword_9AA8[3];
            goto LABEL_45;
          }
          v39 = __OFSUB__(v59, 14);
          v37 = v59 == 14;
          v38 = v59++ - 14 < 0;
        }
        while ( (unsigned __int8)(v38 ^ v39) | v37 );
        v60 = dword_9AA8[3];
        if ( dword_9AA8[3] == 1 )
        {
          v60 = 1;
          v61 = v78;
          dword_9AA8[3] = 1;
LABEL_46:
          dword_9AA4 += 0x400000;
          goto LABEL_48;
        }
LABEL_45:
        v61 = v78;
        if ( v60 )
          goto LABEL_46;
        v60 = 0;
LABEL_48:
        v62 = 0;
        while ( md5_deviceID[v62] == byte_9739[v62] )
        {
          v39 = __OFSUB__(v62, 14);
          v37 = v62 == 14;
          v38 = v62++ - 14 < 0;
          if ( !((unsigned __int8)(v38 ^ v39) | v37) )
          {
            v63 = 0;
            dword_9AA8[4] = 0;
            goto LABEL_55;
          }
        }
        v63 = dword_9AA8[4];
        if ( dword_9AA8[4] )
          dword_9AA4 += 0x100000;
        else
          v63 = 0;
LABEL_55:
        v64 = dword_9AA8[0];
        if ( !dword_9AA8[0] )
          dword_9AA4 += 4096;
        v65 = 0;
        while ( md5_Line1Number[v65] == byte_96C9[v65] )
        {
          v39 = __OFSUB__(v65, 14);
          v37 = v65 == 14;
          v38 = v65++ - 14 < 0;
          if ( !((unsigned __int8)(v38 ^ v39) | v37) )
          {
            dword_9AA8[1] |= 1u;
            break;
          }
        }
        if ( dword_9AA8[2] )
          dword_9AA4 += 4;
        v66 = 0;
        while ( md5_countryISO[v66] == byte_96B9[v66] )
        {
          v39 = __OFSUB__(v66, 14);
          v37 = v66 == 14;
          v38 = v66++ - 14 < 0;
          if ( !((unsigned __int8)(v38 ^ v39) | v37) )
          {
            v64 = 0;
            dword_9AA8[0] = 0;
            break;
          }
        }
        if ( !v60 )
          dword_9AA4 += 0x4000000;
        v67 = 0;
        while ( md5_Line1Number[v67] == byte_96D9[v67] )
        {
          v39 = __OFSUB__(v67, 14);
          v37 = v67 == 14;
          v38 = v67++ - 14 < 0;
          if ( !((unsigned __int8)(v38 ^ v39) | v37) )
          {
            v68 = 0;
            v69 = v4;
            v70 = v79;
            dword_9AA8[1] = 0;
            goto LABEL_76;
          }
        }
        v69 = v4;
        v70 = v79;
        v68 = dword_9AA8[1];
        if ( dword_9AA8[1] )
          dword_9AA4 += 128;
        else
          v68 = 0;
LABEL_76:
        if ( v64 )
          dword_9AA4 += 1024;
        if ( !v63 )
          dword_9AA4 += 0x4000;
        if ( !v68 )
          dword_9AA4 += 0x2000;
        setup_key_from_calculated_crc32(v70);
        v71 = get_flag(JNIEnv_, v69);
        v72 = v71;
        v73 = (*(int (__fastcall **)(int, char *))(*(_DWORD *)JNIEnv_ + 668))(JNIEnv_, v71);
        (*(void (__fastcall **)(int, int, _DWORD, int))(*(_DWORD *)JNIEnv_ + 696))(JNIEnv_, v61, 0, v73);
        v74 = (*(int (__fastcall **)(int, char *))(*(_DWORD *)JNIEnv_ + 668))(JNIEnv_, v72);
        (*(void (__fastcall **)(int, int, signed int, int))(*(_DWORD *)JNIEnv_ + 696))(JNIEnv_, v61, 1, v74);
        v75 = (*(int (__fastcall **)(int, char *))(*(_DWORD *)JNIEnv_ + 668))(JNIEnv_, v72);
        (*(void (__fastcall **)(int, int, signed int, int))(*(_DWORD *)JNIEnv_ + 696))(JNIEnv_, v61, 2, v75);
        v76 = (*(int (__fastcall **)(int, char *))(*(_DWORD *)JNIEnv_ + 668))(JNIEnv_, v72);
        (*(void (__fastcall **)(int, int, signed int, int))(*(_DWORD *)JNIEnv_ + 696))(JNIEnv_, v61, 3, v76);
      }
      v7 = v78;
    }
  }
  result = _stack_chk_guard - v92;
  if ( _stack_chk_guard == v92 )
    result = v7;
  return result;
}

int __fastcall setup_key_from_calculated_crc32(unsigned int a1)
{
  int v1; // r8
  int *v2; // r3
  int *v3; // r2
  int v4; // r0
  int v5; // r6
  int v6; // r4
  int v7; // r4
  int result; // r0
  int v9; // [sp+4h] [bp-2Ch]
  int v10; // [sp+8h] [bp-28h]
  int v11; // [sp+Ch] [bp-24h]
  __int64 v12; // [sp+10h] [bp-20h]
  int v13; // [sp+18h] [bp-18h]
  int v14; // [sp+1Ch] [bp-14h]
  int v15; // [sp+20h] [bp-10h]

  v15 = v1;
  v9 = crc32_countryISO;
  v10 = crc32_Line1Number;
  v11 = crc32_subscriberID;
  v12 = *(_QWORD *)&crc32_packageName;
  v2 = &v9;
  v13 = dword_9AA4;
  v3 = &v9;
  if ( a1 <= 5 )
  {
    v2 = (int *)*(&off_7E20 + a1);
    v3 = (int *)*(&off_7E00 + a1);
  }
  v4 = 0;
  do
  {
    v5 = *(&v9 + v2[v4]);
    dword_9750[v4] = v5;
    v6 = v3[v4];
    rearranged_calculated_crc32_1[v4] = v5;
    v7 = *(&v9 + v6);
    dword_9760[v4] = v7;
    rearranged_calculated_crc32_2[v4++] = v7;
  }
  while ( v4 != 4 );
  result = _stack_chk_guard - v14;
  if ( _stack_chk_guard == v14 )
    result = 0;
  return result;
}

char *__fastcall get_flag(int a1, int a2)
{
  int v2; // r8
  int v3; // r5
  int v4; // r4
  int v5; // r0
  int v6; // r4
  void *v7; // r8
  size_t v8; // r6
  int *v9; // r5
  int v10; // r0
  void *v11; // r4
  char *result; // r0
  void *v13; // r4
  int v14; // [sp+8h] [bp-18h]
  int v15; // [sp+10h] [bp-10h]

  v15 = v2;
  v3 = a1;
  v4 = a2;
  v14 = 0;
  sub_2B00(a1);
  call_java_MainActivity_getSoPath(v3, v4);
  v5 = call_java_MainActivity_getSoBody(v3, v4, &v14);
  v6 = v14;
  v7 = (void *)v5;
  v8 = v14 + 16 - v14 % 16;
  v9 = (int *)malloc(v8);
  _aeabi_memclr();
  AES_decrypt((int)v9, (int)v7, v6, (int)rearranged_calculated_crc32_1, (int)rearranged_calculated_crc32_2);
  v10 = *v9;
  v14 = v8;
  if ( v10 == 0x464C457F )
  {
    sub_2478(v9, v8);
    v11 = dlopen((const char *)&unk_9790, 1);
    result = dlerror();
    if ( v11 )
    {
      v13 = dlsym(v11, "get_string");
      result = dlerror();
      if ( !result )
        result = (char *)((int (__fastcall *)(_DWORD *, _DWORD *))v13)(
                           rearranged_calculated_crc32_1,
                           rearranged_calculated_crc32_2);
    }
  }
  else
  {
    free(v7);
    free(v9);
    result = "OLOLO!";
  }
  return result;
}