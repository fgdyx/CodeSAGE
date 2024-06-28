#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 VAR2 = VAR3;
 switch(5)
 {
 case 6:
 FUN3("");
 break;
 default:
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 break;
 }
 {
 wchar_t VAR5[50] = VAR4"";
 wcscat(VAR5, VAR2);
 FUN4(VAR2);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 break;
 default:
 FUN3("");
 break;
 }
 {
 wchar_t VAR5[50] = VAR4"";
 wcscat(VAR5, VAR2);
 FUN4(VAR2);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
