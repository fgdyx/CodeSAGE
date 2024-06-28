#ifndef VAR1
static char * FUN1(char * VAR2)
{
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = (char *)malloc(10*sizeof(char));
 return VAR2;
}
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 {
 char VAR3[10+1] = VAR4;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memmove(VAR2, VAR3, (strlen(VAR3) + 1) * sizeof(char));
 FUN3(VAR2);
 free(VAR2);
 }
}
#endif
