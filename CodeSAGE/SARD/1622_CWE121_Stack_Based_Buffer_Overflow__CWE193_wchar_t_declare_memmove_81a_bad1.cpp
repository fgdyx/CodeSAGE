#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[10];
 wchar_t VAR4[10+1];
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR3;
 VAR2[0] = VAR5'';
 const VAR6& VAR7 = FUN2();
 VAR7.FUN3(VAR2);
}
#endif
