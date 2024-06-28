#ifndef VAR1
void FUN1();
void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[10];
 wchar_t VAR4[10+1];
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR3;
 VAR2[0] = VAR5'';
 VAR6 = VAR2;
 FUN1();
}
#endif
