#ifndef VAR1
void FUN1(void * VAR2)
{
 wchar_t * * VAR3 = (wchar_t * *)VAR2;
 wchar_t * VAR4 = (*VAR3);
 {
 size_t VAR5;
 wchar_t VAR6[100];
 wmemset(VAR6, VAR7'', 100-1);
 VAR6[100-1] = VAR7'';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR6[VAR5] = VAR4[VAR5];
 }
 VAR6[100-1] = VAR7'';
 FUN2(VAR6);
 }
}
#endif
