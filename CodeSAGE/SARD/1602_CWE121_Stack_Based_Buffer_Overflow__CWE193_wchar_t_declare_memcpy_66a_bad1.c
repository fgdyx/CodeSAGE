#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 wchar_t VAR4[10];
 wchar_t VAR5[10+1];
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR3 = VAR4;
 VAR3[0] = VAR6'';
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
