#ifndef VAR1
void FUN1(char * &VAR2)
{
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = new char[10];
}
#endif
