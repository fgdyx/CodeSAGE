#ifndef VAR1
void FUN1(structType VAR2)
{
 size_t VAR3 = VAR2.VAR4;
 {
 wchar_t * VAR5;
 if (VAR3 > wcslen(VAR6))
 {
 VAR5 = new wchar_t[VAR3];
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
void FUN4(structType VAR2)
{
 size_t VAR3 = VAR2.VAR4;
 {
 wchar_t * VAR5;
 if (VAR3 > wcslen(VAR6) && VAR3 < 100)
 {
 VAR5 = new wchar_t[VAR3];
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
#endif
