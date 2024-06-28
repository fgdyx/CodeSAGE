#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 VAR2 = 20;
 {
 size_t VAR3 = VAR2;
 size_t VAR2 = VAR3;
 {
 wchar_t * VAR4;
 if (VAR2 > wcslen(VAR5))
 {
 VAR4 = new wchar_t[VAR2];
 wcscpy(VAR4, VAR5);
 FUN2(VAR4);
 delete [] VAR4;
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
 VAR2 = 0;
 VAR2 = rand();
 {
 size_t VAR3 = VAR2;
 size_t VAR2 = VAR3;
 {
 wchar_t * VAR4;
 if (VAR2 > wcslen(VAR5) && VAR2 < 100)
 {
 VAR4 = new wchar_t[VAR2];
 wcscpy(VAR4, VAR5);
 FUN2(VAR4);
 delete [] VAR4;
 }
 else
 {
 FUN3("");
 }
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
