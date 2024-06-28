#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 wchar_t * VAR3;
 structType VAR2;
 VAR3 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR3 = new wchar_t[10];
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
