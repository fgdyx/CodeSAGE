#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 if(FUN3())
 {
 VAR2 = VAR3;
 }
 else
 {
 VAR2 = VAR3;
 }
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR4'', 100-1);
 VAR5[100-1] = VAR4'';
 wcscpy(VAR2, VAR5);
 FUN4(VAR2);
 }
}
void FUN5()
{
 FUN1();
}
#endif
