#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 wcscat(VAR2, VAR3);
 FUN2(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 void (*VAR5) (wchar_t *) = VAR6;
 wchar_t * VAR7 = (wchar_t *)FUN4(50*sizeof(wchar_t));
 wchar_t * VAR8 = (wchar_t *)FUN4(100*sizeof(wchar_t));
 VAR2 = VAR8;
 VAR2[0] = VAR4'';
 FUN5(VAR2);
}
void FUN6()
{
 FUN3();
}
#endif
