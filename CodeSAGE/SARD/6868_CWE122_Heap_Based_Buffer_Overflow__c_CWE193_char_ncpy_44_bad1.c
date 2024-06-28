#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 char VAR3[10+1] = VAR4;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 strncpy(VAR2, VAR3, strlen(VAR3) + 1);
 FUN2(VAR2);
 free(VAR2);
 }
}
void FUN3()
{
 char * VAR2;
 void (*VAR5) (char *) = VAR6;
 VAR2 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = (char *)malloc(10*sizeof(char));
 FUN4(VAR2);
}
#endif
