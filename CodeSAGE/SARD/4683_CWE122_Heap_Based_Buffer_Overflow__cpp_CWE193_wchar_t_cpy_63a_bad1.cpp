#ifndef VAR1
void FUN1(wchar_t * * VAR2);
void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR3 = new wchar_t[10];
 FUN1(&VAR3);
}
#endif
