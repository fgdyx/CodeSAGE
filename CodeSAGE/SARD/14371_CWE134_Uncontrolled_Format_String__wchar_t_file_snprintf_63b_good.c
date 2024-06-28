#ifndef VAR1
void FUN1(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 {
 wchar_t VAR4[100] = VAR5"";
 FUN2(VAR4, 100-1, VAR3);
 FUN3(VAR4);
 }
}
void FUN4(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 {
 wchar_t VAR4[100] = VAR5"";
 FUN2(VAR4, 100-1, VAR5"", VAR3);
 FUN3(VAR4);
 }
}
#endif
