#ifndef VAR1
void FUN1(wchar_t * &VAR2)
{
 VAR2 = new wchar_t[100];
}
void FUN2(wchar_t * &VAR2)
{
 {
 wchar_t VAR3[] = VAR4"";
 VAR2 = FUN3(VAR3);
 }
}
#endif
