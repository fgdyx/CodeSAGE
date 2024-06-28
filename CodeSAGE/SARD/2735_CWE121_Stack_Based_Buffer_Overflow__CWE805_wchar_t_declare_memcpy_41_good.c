#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 memcpy(VAR2, VAR3, 100*sizeof(wchar_t));
 VAR2[100-1] = VAR4'';
 FUN2(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR5[50];
 wchar_t VAR6[100];
 VAR2 = VAR6;
 VAR2[0] = VAR4'';
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
