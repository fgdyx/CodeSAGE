#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 if(VAR5)
 {
 FUN2("");
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
 FUN3(VAR6);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 if(VAR7)
 {
 VAR2 = VAR3;
 }
 {
 wchar_t VAR6[100*2];
 wmemset(VAR6, VAR4'', 100*2-1);
 VAR6[100*2-1] = VAR4'';
 wcscpy(VAR6, VAR2);
 FUN3(VAR6);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
