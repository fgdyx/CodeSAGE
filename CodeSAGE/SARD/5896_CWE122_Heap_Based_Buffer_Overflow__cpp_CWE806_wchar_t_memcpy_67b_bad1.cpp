#ifndef VAR1
void FUN1(structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 {
 wchar_t VAR5[50] = VAR6"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memcpy(VAR5, VAR3, wcslen(VAR3)*sizeof(wchar_t));
 VAR5[50-1] = VAR6'';
 FUN2(VAR3);
 delete [] VAR3;
 }
}
#endif
