#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = VAR4;
 }
 {
 wchar_t VAR6[100];
 wmemset(VAR6, VAR5'', 100-1);
 VAR6[100-1] = VAR5'';
 memcpy(VAR3, VAR6, 100*sizeof(wchar_t));
 VAR3[100-1] = VAR5'';
 FUN2(VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
