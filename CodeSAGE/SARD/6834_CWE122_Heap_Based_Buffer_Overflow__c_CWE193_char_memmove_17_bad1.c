#ifndef VAR1
void FUN1()
{
 int VAR2;
 char * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Did not leave space for a null terminator */
 VAR3 = (char *)malloc(10*sizeof(char));
 }
 {
 char VAR4[10+1] = VAR5;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memmove(VAR3, VAR4, (strlen(VAR4) + 1) * sizeof(char));
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
