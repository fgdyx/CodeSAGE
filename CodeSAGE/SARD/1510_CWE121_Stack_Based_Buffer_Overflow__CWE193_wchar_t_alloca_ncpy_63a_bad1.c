#ifndef VAR1
void FUN1(wchar_t * * VAR2);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR4 = (wchar_t *)FUN3((10)*sizeof(wchar_t));
 wchar_t * VAR5 = (wchar_t *)FUN3((10+1)*sizeof(wchar_t));
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR3 = VAR4;
 VAR3[0] = VAR6'';
 FUN1(&VAR3);
}
#endif
