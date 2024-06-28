#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 FUN2("");
 }
 else
 {
 {
 wchar_t * VAR4 = new wchar_t[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 VAR2 = VAR4;
 }
 }
 {
 wchar_t VAR6[100];
 wmemset(VAR6, VAR5'', 100-1);
 VAR6[100-1] = VAR5'';
 memmove(VAR6, VAR2, 100*sizeof(wchar_t));
 VAR6[100-1] = VAR5'';
 FUN3(VAR6);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR7)
 {
 {
 wchar_t * VAR4 = new wchar_t[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 VAR2 = VAR4;
 }
 }
 {
 wchar_t VAR6[100];
 wmemset(VAR6, VAR5'', 100-1);
 VAR6[100-1] = VAR5'';
 memmove(VAR6, VAR2, 100*sizeof(wchar_t));
 VAR6[100-1] = VAR5'';
 FUN3(VAR6);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
