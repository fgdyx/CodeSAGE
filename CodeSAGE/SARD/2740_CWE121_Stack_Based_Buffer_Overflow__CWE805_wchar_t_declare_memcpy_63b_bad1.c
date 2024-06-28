#ifndef VAR1
void FUN1(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 memcpy(VAR3, VAR4, 100*sizeof(wchar_t));
 VAR3[100-1] = VAR5'';
 FUN2(VAR3);
 }
}
#endif
