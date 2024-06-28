#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 }
 {
 size_t VAR4, VAR5;
 wchar_t VAR6[100];
 wmemset(VAR6, VAR3'', 100-1);
 VAR6[100-1] = VAR3'';
 VAR5 = wcslen(VAR6);
 for (VAR4 = 0; VAR4 < VAR5; VAR4++)
 {
 VAR6[VAR4] = VAR2[VAR4];
 }
 VAR6[100-1] = VAR3'';
 FUN4(VAR6);
 delete [] VAR2;
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN6())
 {
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 }
 {
 size_t VAR4, VAR5;
 wchar_t VAR6[100];
 wmemset(VAR6, VAR3'', 100-1);
 VAR6[100-1] = VAR3'';
 VAR5 = wcslen(VAR6);
 for (VAR4 = 0; VAR4 < VAR5; VAR4++)
 {
 VAR6[VAR4] = VAR2[VAR4];
 }
 VAR6[100-1] = VAR3'';
 FUN4(VAR6);
 delete [] VAR2;
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
