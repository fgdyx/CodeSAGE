#ifndef VAR1
void FUN1(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 {
 wchar_t VAR4[10+1] = VAR5;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 wcscpy(VAR3, VAR4);
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
