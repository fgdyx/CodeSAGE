#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 FUN2(VAR2, 100, VAR5"", VAR4);
 FUN3(VAR2);
 }
}
#endif
