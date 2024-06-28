#ifndef VAR1
void FUN1(VAR2<VAR3> VAR4)
{
 size_t VAR5 = VAR4.FUN2();
 {
 wchar_t * VAR6;
 if (VAR5 > wcslen(VAR7))
 {
 VAR6 = new wchar_t[VAR5];
 wcscpy(VAR6, VAR7);
 FUN3(VAR6);
 delete [] VAR6;
 }
 else
 {
 FUN4("");
 }
 }
}
void FUN5(VAR2<VAR3> VAR4)
{
 size_t VAR5 = VAR4.FUN2();
 {
 wchar_t * VAR6;
 if (VAR5 > wcslen(VAR7) && VAR5 < 100)
 {
 VAR6 = new wchar_t[VAR5];
 wcscpy(VAR6, VAR7);
 FUN3(VAR6);
 delete [] VAR6;
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
