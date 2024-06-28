#ifndef VAR1
void FUN1();
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = new wchar_t[10];
 VAR3 = VAR2;
 FUN1();
}
#endif
