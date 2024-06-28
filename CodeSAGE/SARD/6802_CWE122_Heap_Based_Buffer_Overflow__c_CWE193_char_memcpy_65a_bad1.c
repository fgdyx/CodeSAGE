#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 VAR2 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = (char *)malloc(10*sizeof(char));
 FUN3(VAR2);
}
#endif
