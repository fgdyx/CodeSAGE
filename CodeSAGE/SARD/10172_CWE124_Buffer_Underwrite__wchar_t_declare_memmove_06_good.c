#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 if(VAR5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR3;
 }
 {
 wchar_t VAR6[100];
 wmemset(VAR6, VAR4'', 100-1);
 VAR6[100-1] = VAR4'';
 memmove(VAR2, VAR6, 100*sizeof(wchar_t));
 VAR2[100-1] = VAR4'';
 FUN3(VAR2);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 if(VAR5==5)
 {
 VAR2 = VAR3;
 }
 {
 wchar_t VAR6[100];
 wmemset(VAR6, VAR4'', 100-1);
 VAR6[100-1] = VAR4'';
 memmove(VAR2, VAR6, 100*sizeof(wchar_t));
 VAR2[100-1] = VAR4'';
 FUN3(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
