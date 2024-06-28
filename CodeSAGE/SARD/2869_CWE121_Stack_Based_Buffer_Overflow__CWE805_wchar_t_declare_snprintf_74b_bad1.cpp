#ifndef VAR1
void FUN1(VAR2<int, wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3[2];
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 FUN2(VAR4, 100, VAR6"", VAR5);
 FUN3(VAR4);
 }
}
#endif
