#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 if(VAR5!=5)
 {
 FUN3("");
 }
 else
 {
 VAR2 = VAR3;
 }
 {
 wchar_t VAR6[100*2];
 wmemset(VAR6, VAR4'', 100*2-1);
 VAR6[100*2-1] = VAR4'';
 wcscpy(VAR6, VAR2);
 FUN4(VAR6);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 if(VAR5==5)
 {
 VAR2 = VAR3;
 }
 {
 wchar_t VAR6[100*2];
 wmemset(VAR6, VAR4'', 100*2-1);
 VAR6[100*2-1] = VAR4'';
 wcscpy(VAR6, VAR2);
 FUN4(VAR6);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
