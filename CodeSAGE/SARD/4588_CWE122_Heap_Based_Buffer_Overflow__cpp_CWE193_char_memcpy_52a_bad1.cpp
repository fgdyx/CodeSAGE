#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = new char[10];
 FUN1(VAR2);
}
#endif
