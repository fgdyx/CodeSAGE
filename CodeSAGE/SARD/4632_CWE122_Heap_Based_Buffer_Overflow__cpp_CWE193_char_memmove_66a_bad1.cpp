#ifndef VAR1
void FUN1(char * VAR2[]);
void FUN2()
{
 char * VAR3;
 char * VAR2[5];
 VAR3 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR3 = new char[10];
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
