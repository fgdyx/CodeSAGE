#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = (char *)malloc(10*sizeof(char));
 }
 {
 char VAR4[10+1] = VAR5;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memcpy(VAR2, VAR4, (strlen(VAR4) + 1) * sizeof(char));
 FUN2(VAR2);
 free(VAR2);
 }
}
#endif
