#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[100*2];
 wmemset(VAR4, VAR5'', 100*2-1);
 VAR4[100*2-1] = VAR5'';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 wcscpy(VAR4, VAR2);
 FUN2(VAR4);
 }
}
#endif
