#ifndef VAR1
void FUN1(structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 {
 wchar_t VAR5[10+1] = VAR6;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memmove(VAR3, VAR5, (wcslen(VAR5) + 1) * sizeof(wchar_t));
 FUN2(VAR3);
 delete [] VAR3;
 }
}
#endif
