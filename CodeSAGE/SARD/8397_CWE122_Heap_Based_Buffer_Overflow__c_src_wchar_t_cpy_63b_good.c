#ifndef VAR1
void FUN1(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 {
 wchar_t VAR4[50] = VAR5"";
 wcscpy(VAR4, VAR3);
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
