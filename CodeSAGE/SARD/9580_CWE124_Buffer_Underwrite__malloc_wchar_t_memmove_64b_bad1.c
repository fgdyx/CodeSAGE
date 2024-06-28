#ifndef VAR1
void FUN1(void * VAR2)
{
 wchar_t * * VAR3 = (wchar_t * *)VAR2;
 wchar_t * VAR4 = (*VAR3);
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 memmove(VAR4, VAR5, 100*sizeof(wchar_t));
 VAR4[100-1] = VAR6'';
 FUN2(VAR4);
 }
}
#endif
