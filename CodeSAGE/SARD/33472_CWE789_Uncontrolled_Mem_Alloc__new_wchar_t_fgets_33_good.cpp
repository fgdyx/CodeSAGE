#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR3 &VAR4 = VAR2;
 VAR2 = 0;
 VAR2 = 20;
 {
 size_t VAR2 = VAR4;
 {
 wchar_t * VAR5;
 if (VAR2 > wcslen(VAR6))
 {
 VAR5 = new wchar_t[VAR2];
 wcscpy(VAR5, VAR6);
 FUN2(VAR5);
 delete [] VAR5;
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN4()
{
 size_t VAR2;
 VAR3 &VAR4 = VAR2;
 VAR2 = 0;
 {
 char VAR7[VAR8] = "";
 if (fgets(VAR7, VAR8, stdin) != NULL)
 {
 VAR2 = FUN5(VAR7, NULL, 0);
 }
 else
 {
 FUN3("");
 }
 }
 {
 size_t VAR2 = VAR4;
 {
 wchar_t * VAR5;
 if (VAR2 > wcslen(VAR6) && VAR2 < 100)
 {
 VAR5 = new wchar_t[VAR2];
 wcscpy(VAR5, VAR6);
 FUN2(VAR5);
 delete [] VAR5;
 }
 else
 {
 FUN3("");
 }
 }
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
