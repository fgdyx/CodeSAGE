#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 wchar_t * VAR5 = (wchar_t *)FUN3((10)*sizeof(wchar_t));
 wchar_t * VAR6 = (wchar_t *)FUN3((10+1)*sizeof(wchar_t));
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR5;
 VAR2[0] = VAR7'';
 FUN4(VAR2);
}
#endif
