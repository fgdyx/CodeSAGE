#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = (char *)malloc(10*sizeof(char));
 VAR3* VAR4 = new VAR5;
 VAR4->FUN2(VAR2);
 delete VAR4;
}
#endif
