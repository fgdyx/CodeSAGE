#ifndef VAR1
void FUN1()
{
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
void FUN4()
{
 size_t VAR2 = VAR6;
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
#endif
