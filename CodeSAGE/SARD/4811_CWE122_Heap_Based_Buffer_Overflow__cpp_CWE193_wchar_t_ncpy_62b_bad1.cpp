#ifndef VAR1
void FUN1(wchar_t * &VAR2)
{
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = new wchar_t[10];
}
#endif
