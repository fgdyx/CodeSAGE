#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[100*2];
 wmemset(VAR3, VAR4'', 100*2-1);
 VAR3[100*2-1] = VAR4'';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 wcscpy(VAR3, VAR2);
 FUN2(VAR3);
 }
}
#endif
