#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 VAR2 = VAR3;
 while(1)
 {
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 break;
 }
 {
 wchar_t VAR5[50] = VAR4"";
 wcscat(VAR5, VAR2);
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
