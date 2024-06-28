#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[50];
 wchar_t VAR4[100];
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 {
 wchar_t VAR6[100];
 wmemset(VAR6, VAR5'', 100-1);
 VAR6[100-1] = VAR5'';
 memcpy(VAR2, VAR6, 100*sizeof(wchar_t));
 VAR2[100-1] = VAR5'';
 FUN2(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
