#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 if(VAR5==5)
 {
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR3 - 8;
 }
 {
 wchar_t VAR6[100];
 wmemset(VAR6, VAR4'', 100-1);
 VAR6[100-1] = VAR4'';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 memmove(VAR6, VAR2, 100*sizeof(wchar_t));
 VAR6[100-1] = VAR4'';
 FUN2(VAR6);
 }
}
#endif
