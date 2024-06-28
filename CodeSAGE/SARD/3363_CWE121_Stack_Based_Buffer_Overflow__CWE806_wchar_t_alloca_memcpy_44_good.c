#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[50] = VAR4"";
 memcpy(VAR3, VAR2, wcslen(VAR2)*sizeof(wchar_t));
 VAR3[50-1] = VAR4'';
 FUN2(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 void (*VAR5) (wchar_t *) = VAR6;
 wchar_t * VAR7 = (wchar_t *)FUN4(100*sizeof(wchar_t));
 VAR2 = VAR7;
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 FUN5(VAR2);
}
void FUN6()
{
 FUN3();
}
#endif
